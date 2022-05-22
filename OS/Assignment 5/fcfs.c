#include <stdio.h>


typedef struct Pro{
	int aT , bT , cT , tAt , wT ;
}Prog;


int main(){
	int numProg;
	
	printf("Enter the number of Program you want to run : ");
	scanf("%d" , &numProg);
	
	Prog program[numProg];	
	int timeLine = 0;

	float avgWt = 0;



	for(int i = 0 ; i<numProg ; i++){
		Prog p1;
		int at , bt;
		printf("Enter the Arrival time of the program :");
		scanf("%d" , &at);

		printf("Enter the Brust time of the program :");
		scanf("%d" , &bt);
		
		p1.aT = at;
		p1.bT = bt;
		program[i] = p1 ;


	}
	

	for(int j = 0 ; j<numProg-1; j++){	
	
		for(int i = 0 ; i<numProg-j-1 ; i++){
			Prog p1 = program[i];
			Prog p2 = program[i+1];
			int at = p1.aT , at2 = p2.aT;
			if(at > at2){
				program[i] = program[i+1];
				program[i+1] = p1;
			} 
	


		}

	}



	
	for(int i = 0 ; i<numProg ; i++){
	
		if(i==0){
			timeLine = timeLine + program[i].aT + program[i].bT;
			program[i].cT = timeLine;	
			program[i].tAt = program[i].cT - program[i].aT;
			program[i].wT = program[i].tAt - program[i].bT;		
		}

		else{
			timeLine = timeLine + program[i].bT;
			program[i].cT = timeLine;	
			program[i].tAt = program[i].cT - program[i].aT;
			program[i].wT = program[i].tAt - program[i].bT;

		}

	

	}

	
	for(int i = 0 ; i<numProg ;i++){
		printf("program no : %d \n" , i);
		printf("Arrival Time : %d \n" , program[i].aT);
		printf("Brust Time : %d \n" , program[i].bT);
		printf("Completion Time : %d \n", program[i].cT);
		printf("Turn Arround Time : %d \n" , program[i].tAt);
		printf("Waiting Time : %d \n" , program[i].wT);

		printf("\n\n\n");
	}

	for(int i = 0 ; i<numProg ; i++){
		avgWt = (float) (avgWt + program[i].wT);
	}

	avgWt = avgWt / numProg;

	printf("Avarage Waiting Time : %.2f " , avgWt);


}
