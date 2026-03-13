#include <stdio.h>

int main(){
	int i, j, count = 0, max = 0, row = 0;
	int seat[5][6] = {
		{0, 1, 1, 1, 0, 1}, 
		{1, 1, 1, 1, 0, 1}, 
		{0, 0, 0, 1, 0, 1}, 
		{1, 1, 1, 1, 0, 1}, 
		{0, 1, 1, 1, 0, 1}
	};
	for(i =0 ; i < 5; i++){
		for(j= 0; j<6; j++){
			if(seat[i][j] == 0){
				count = count + 1;
			}
		}
	}printf("%d seats are available\n", count);
	
	for(i = 0; i < 5; i++){
		count = 0;
		for(j = 0; j< 6 ; j++){
			if(seat[i][j] == 1){
				count = count + 1;
			}

		}if(count > max){
			max = count;
			row = i;
		}
	}
	printf("Max seats booked in a row are %d in row %d", max, row + 1);
}
