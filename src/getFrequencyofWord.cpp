/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int check(char *str, char *word, int i){

	int j = 0;
	while (word[j]){
		if (str[i] != word[j] || !str[i])
			return -1;
		i++;
		j++;
	}
	return 0;
}

int count_word_in_str_way_1(char *str, char *word){

	int i = 0, j = 0, temp, len = 0, count = 0;

	while (str[i]){
		len++;
		i++;
	}
	i = 0;
	while (str[i]){
		if (str[i] == word[j]){
			temp = check(str, word, i);
			if (!temp){
				i++;
				if (i >= len){
					j = 0;
					count++;
					break;
				}
				j = 0;
				count++;
			}
			else
				i++;
		}
		else
			i++;
	}
	i++;
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

