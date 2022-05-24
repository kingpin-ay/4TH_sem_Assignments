#include <stdio.h>

typedef struct item
{
    float weight;
    float value;
    float perUnitValue;
} item;

void swap(item *xp, item *yp)
{
    item temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(item arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++)
    {

        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j].perUnitValue < arr[min_idx].perUnitValue)
                min_idx = j;

        // Swap the found minimum element
        // with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}

int main()

{
    int total;
    float limit;
    float value = 0;
    printf("Total number of problems : ");
    scanf("%d", &total);
    printf("Enter the weight limit of the problem : ");
    scanf("%f", &limit);

    item arr[total];

    for (int i = 0; i < total; i++)
    {
        item a;
        printf("Enter the items weight : ");
        scanf("%f", &a.weight);
        printf("Enter the items value : ");
        scanf("%f", &a.value);
        a.perUnitValue = a.value / a.weight;
        arr[i] = a;
    }

    selectionSort(arr, total);

    int count = 0;
    while (limit != 0)
    {
        if (arr[count].weight <= limit)
        {
            value += arr[count].value;
            limit -= arr[count].weight;
        }
        else
        {
            value += limit * arr[count].perUnitValue;
            limit -= limit;
        }
        count++;
    }

    printf("The knapsack solution value is  : %f", value);

    return 0;
}
