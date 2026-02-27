#include <stdio.h>

int main(){
	int bal = 0, amount = 0;
		printf("Enter balance: ");
		scanf("%d", &bal);
		while(bal > 0){
			printf("Enter Withdrawl amount: ");
			scanf("%d", &amount);
			bal = bal - amount;
			printf("Your New Balance is: %d\n ", bal);
		}printf("You are broke now :(");
}
