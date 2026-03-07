#include <stdio.h>

int main(){
	int i, size, vowel = 0, cons = 0 ;
	printf("Enter Size Of Word: ");
	scanf("%d", &size);
	char word[size + 1];
	
	printf("Enter Word in Lowercase: ");
	scanf("%s", word);
	
	for(i = 0; word[i] != 0; i++){
		if(word[i] == 'a' || word [i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u'){
			vowel = vowel + 1;
		}
		else{
			cons = cons + 1;
		}
		
	}
	printf("%d Vowels in the word", vowel);
	printf("\n%d Consonants in the word", cons);
	

}
