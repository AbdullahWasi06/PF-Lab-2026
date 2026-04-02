#include <stdio.h>

float triageScore(int, int, int);
int main(){
	int sev = 0, aged = 0, vit =0; 
	printf("For the Following Enter a Score of 1-10.\n");
	printf("Enter Severity, Age and Vitals Of The Patient: \n");
	scanf("%d %d %d", &sev, &aged, &vit);
	
	float priority = triageScore(aged, sev, vit);
	
	if(priority > 7.0){
		printf("Immediate Attention Required\n");
	}else if(priority >= 4.0 && priority <= 7.0){
		printf("Moderate Priority\n");
	}else{
		printf("Can Wait\n");
	}
	
	
}


float triageScore(int age, int severity, int vitals){
	
	float score = (age*0.3) + (severity*0.5) + (vitals*0.2);
	return score;
	
}
