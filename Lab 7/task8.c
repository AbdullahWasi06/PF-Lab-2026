#include <stdio.h>

int main(){
	int n;
	printf("Enter Size of Array: ");
	scanf("%d", &n);
	
	char string[n + 1];
	printf("Enter Your String: ");
	scanf(" %[^A-Za-z]", string);
	printf("Your String without Alphabets is: %s", string);

}
