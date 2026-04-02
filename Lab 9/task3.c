#include <stdio.h>

int totalRuns(int arr[], int size){
	int sum;
	for(int i = 0; i < size; i++){
		sum = sum + arr[i];
	}
	return sum;
}

int highestScore(int arr[], int size){
	int max = 0;
	for(int i = 0; i < size; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}

int aboveAvg(int arr[], int size, float avg){
	
	int count = 0;
	for(int i = 0; i < size; i++){
		if(arr[i] > avg){
			count = count + 1;
		}
	}
	return count;
	
	
}
int main(){
	int size;
	printf("Enter No.of Scores: ");
	scanf("%d", &size);
	
	int arr[size];
	
	for(int i = 0; i < size; i++){
		printf("Enter Score No.%d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	int sum = totalRuns(arr, size);
	int hscore = highestScore(arr, size);
	float avg = sum/size;
	
	int abAvg = aboveAvg(arr, size, avg);
	
	
	printf("Player Performance Report: \n");
	printf("Total Runs: %d\n", sum);
	printf("Average Score: %0.2f\n", avg);
	printf("Highest Score: %d\n", hscore);
	printf("No of Above Average Scores: %d\n", abAvg);
	

}
