#include <stdio.h>

int main(){
	int seats = 40, book = 0;
	printf("Press: \n 1. To Book a Seat \n 0. To Exit \n");
	scanf("%d", &book);
	while(seats >= 1 && book != 0){
		seats = seats - 1;
		printf("%d Seats Remaining \n", seats);
		printf("Press: \n 1. To Book a Seat \n 0. To Exit \n");
		scanf("%d", &book);
	}printf("Sorry, Either No Seats Available or Program Exited");

}
