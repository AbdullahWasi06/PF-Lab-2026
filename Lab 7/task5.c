#include <stdio.h>

int main(){
	
	int array[10];
	int i, j, max = 0, min = 1000;
	for(i = 0; i < 10; i++){
		j = i+1;
		printf("Enter Integer No.%d: ", j);
		scanf("%d", &array[i]);
	}
	
	for(i = 0; i < 10; i++){
		if(array[i] > max){
			max = array[i];
		}
		else if(array[i] < min){
			min = array[i];
		}
	}
	printf("Max Value In Array is %d", max);
	printf("\nMin Value In Array is %d", min);

}
