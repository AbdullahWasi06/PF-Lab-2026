#include <stdio.h>

int main(){
	int n;
	printf("Enter size of Array: ");
	scanf("%d", &n);
	char string[n +1 ];
	int i;
	
	printf("Enter your String: ");
	scanf(" %[^\n]", string);
	
	for(i = 0; string[i] != 0; i++){
		if(string[i] >= 'A' && string[i] <= 'Z'){
			string[i] = string[i] + 32;
		}
		else if(string[i] >= 'a' && string[i] <= 'z'){
			string[i] = string[i] - 32;
		}
    }
    printf("Converted string is: %s", string);
    
}
