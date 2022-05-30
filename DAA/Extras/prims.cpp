#include <iostream>
#define MAX_INT 70000
#define numberOfNode 5

using namespace std;

int nextNodeSearch(int nextCol, int nodeLinkArray[numberOfNode][numberOfNode]);

int main()
{

    // Accepting data about Nodes
    // int numberOfNode;
    // cout << "Enter the total number of nodes : ";
    // cin >> numberOfNode;

    // creating the array for the node link weights and accepting all the values of the array

    int nodeLinkArray[numberOfNode][numberOfNode];

    for (auto row = 0; row < numberOfNode; row++)
    {
        for (auto colomn = 0; colomn < numberOfNode; colomn++)
        {

            if (row == colomn)
            {
                // setting the all same (i , j) cells value to 0 where i == j
                nodeLinkArray[row][colomn] = 0;
            }

            if (row > colomn)
            {
                // the values for the (row > colomn) cells will be same as (colomn > row) cells
                cout << "Enter the weight of the link between Node " << row << " and " << colomn << " : ";
                cin >> nodeLinkArray[row][colomn];
                // setting the values for (colomn > row);
                nodeLinkArray[colomn][row] = nodeLinkArray[row][colomn];
            }
        }
    }

    // array printer
    // for(auto row =0 ; row<numberOfNode ;row++){
    //     for(auto col  =0 ; col<numberOfNode ; col++){
    //         cout << nodeLinkArray[row] [col]  << " \t";
    //     }
    //     cout<<endl;

    // }

    nextNodeSearch(0, nodeLinkArray);

    return 0;
}

int nextNodeSearch(int nextCol, int nodeLinkArray[numberOfNode][numberOfNode])
{
    // we are setting the value of the lowest variable to max int that way any weight given to it will be smaller
    int lowest = MAX_INT;
    int nextIndex;
    int row = 0;
    for (; row < numberOfNode; row++)
    {
        if (nodeLinkArray[row][nextCol] != 0)
        {
            if (lowest > nodeLinkArray[row][nextCol])
            {
                lowest = nodeLinkArray[row][nextCol];
                nextIndex = row;
            }
            // cleaning the cells
            nodeLinkArray[row][nextCol] = 0;
            nodeLinkArray[nextCol][row] = 0;
        }
    }

    if (lowest == MAX_INT)
    {
        return 0;
    }

    else
    {
        cout << nextCol << " node to " << nextIndex << " node ,  weight : " << lowest << endl;
        nextNodeSearch(nextIndex, nodeLinkArray);
    }
}