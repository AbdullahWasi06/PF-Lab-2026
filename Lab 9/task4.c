#include <stdio.h>


int validatePin(int storedPin, int enteredPin){
	if(storedPin == enteredPin){
		return 1;
	}else{
		return 0;
	}
	
}
int main(){
	int storedPin = 4729, enteredPin, i;
	
	
	for(i = 1; i <= 3; i++){
		printf("Enter PIN: \n");
	    scanf("%d", &enteredPin);
	    
		int signal = validatePin(storedPin, enteredPin);
		
		if(signal == 1){
			printf("Access Granted, Welcome!\n");
			break;
		}else{
			printf("Try Again, You have %d Tries Remaining\n", 3-i);
		}
	}if(i > 3){
		printf("Card Blocked, Contact Your Bank\n");
	}
	
	
	
}
