#include <stdio.h>


float toMegajoules(float);
float toBTU(float);
float toCalories(float);

int main(){
	
	float kwh;
	printf("Enter kwH Reading: \n");
	scanf("%f", &kwh);
	
	float mj = toMegajoules(kwh);
	float bt = toBTU(kwh);
	float ca = toCalories(kwh);
	
	printf("Megajoules: %0.2f\n", mj);
	printf("BTU: %0.2f\n", bt );
	printf("Calories: %0.2f\n", ca);
	
}

float toMegajoules(float kwh){
	float megaj = kwh * 3.6;
	return megaj;
}

float toBTU(float kwh){
	float btu = kwh * 3412.14;
	return btu;
}

float toCalories(float kwh){
	float cal = kwh * 859845;
	return cal;
}
