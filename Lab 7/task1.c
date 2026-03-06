#include <stdio.h>

int main(){
	
	int array[5]={};
	int i, temp;
	for(i = 0; i< 5; i++ ){
	printf("Enter Value: ");
	scanf("%d", &array[i]);
	}
	temp = array[4];
	for(i=4; i>0; i--){
		array[i] = array[i-1];
	}
	array[0]= temp;
	
	for(i = 0; i<5; i++){
		printf("%d", array[i]);
	}
}
