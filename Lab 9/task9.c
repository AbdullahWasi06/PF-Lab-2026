#include <stdio.h>


int main(){
	int attendance[4][5] = {
		{1, 0, 1, 1, 0},
		{0, 1, 0, 0, 1},
		{1, 1, 1, 0, 1},
		{0, 0, 1, 1, 1}
	};
	
	
	int (*p)[5] = attendance;
	int present;
	printf("1-Present, 0-Absent\n");
	for(int i = 0; i < 4; i++){

		printf("Student %d: \n", i+1);
		present = 0;
		for(int j = 0; j < 5; j++){
			printf("Student was %d on Day %d\n", p[i][j], j+1);
			if(p[i][j] == 1){
				present = present + 1;
			}
		}
		if(present < 3){
			printf("3 or More Absences this week, At Risk!\n");
		}
	}
}
