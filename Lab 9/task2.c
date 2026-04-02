#include <stdio.h>

float applyDiscount(float, int);
void printInvoice(float, float);

int main(){
	float price;
	int tier;
	printf("Tiers: \n 1-Bronze\n 2-Silver\n 3-Gold \n 4-Platinum \n\n");
	printf("Enter Item Price and Your Tier: \n\n ");
	scanf("%f %d", &price, &tier);
	
	float disc = applyDiscount(price, tier);
	printInvoice(price, disc); 
	
	
}

float applyDiscount(float price, int tier){
	float dprice = 0;
	
	if(tier == 1){
		dprice = price * 0.95;
	}else if(tier == 2){
		dprice = price * 0.90;
	}else if(tier == 3){
		dprice = price * 0.80;
	}else if(tier == 4){
		dprice = price * 0.70;
	}
	
	return dprice; 
}

void printInvoice(float original, float discounted){
	int dcharge; 
	if(discounted < 2000){
		dcharge = 150;
	}else{
		dcharge = 0;
	}
	
	printf("Bill Invoice: \n\n");
	printf("Original Price: %0.2f\n", original);
	printf("Discounted Price: %0.2f\n", discounted);
	printf("Delivery Charges If Applicable: %d\n", dcharge);
	
}
