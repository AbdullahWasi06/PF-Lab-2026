#include <stdio.h>

int main(){
	
	int pass[10]={};
	int fail[10] = {};
	int marks, i = 0, j= 0, avgp=0, avgf=0, sump =0, sumf=0, f, p, student = 1, k;
	
	do{
		printf("Enter Marks for Student %d: ", student);
		scanf("%d", &marks);
		
		if(marks >=5 && marks <= 10){
			pass[i]= marks;
			i++;
		}
		else if(marks >= 0 && marks < 5){
			fail[j] = marks;
			j++;
			
		}
		student++;
	}while(marks != -1 && student <= 10);

		for(k= 0; k< j; k++){
			sumf = sumf + fail[k];
		}
		for(k = 0; k< i; k++){
			sump = sump + pass[k];
		}
		if(i > 0){
			avgp = sump / i;
		}
		if(j> 0){
			avgf = sumf / j;
		}
		
		
		for(k= 0; k<i; k++){
			printf("Passing Marks: %d\n", pass[k]);	
		}
		for(k = 0; k<j; k++){
			printf("Failing Marks: %d\n", fail[k]);
		}
		printf("Average Pass Marks: %d\n", avgp);
		printf("Average Fail Marks: %d\n", avgf);
		
		
		
}
