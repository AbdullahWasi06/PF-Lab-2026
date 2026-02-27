#include <stdio.h>

int main(){
	int sum =0, n;
	printf("Enter number: ");
	scanf("%d", &n);
	for(int i = 1; i <= n; i ++){
		sum = sum + i;
	}printf("Your sum is: %d ", sum);
}
