// stringFunctionsWeek9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int countVowels(char string[]);
int isVowel(char c);
int getLength(char string[]);
char upperLetter(char c);
void upperString(char string[]);



int main()
{
	char random[100];
	puts("Enter a string:");
	gets_s(random);
	printf("Length of String = %d\n\n", getLength(random));
	printf("Number of Vowels = %d\n\n", countVowels(random));
	upperString(random);
	printf("In CAPITALS: %s\n\n", random);
    return 0;
}


//When given a string counts how many vowels are in the string and returns the count
int countVowels(char string[])
{
	int totalVowels = 0;
	for (int i = 0; i < getLength(string); i++)
	{
		if (isVowel(string[i]) == 1)
			totalVowels++;
	}
	return totalVowels;
}


//Finds out the length of a string and returns the value
int getLength(char string[])
{
	int i = 0;
	while(string[i] != '\0')
	{
		i++;
	}
	return i;
}


//Determines if a character is a vowel or not and returns 1 if true and 0 if false
int isVowel(char c)
{
	int vowel = 0;
	if ((c == 65) || (c==69) || (c==73) || (c==79) || (c == 85) || (c==97) || (c== 101) || (c ==105) || (c ==111) || (c==117))
		vowel = 1;
	return vowel;
}


//If the character is lowercase it is converted to uppercase and returned, otherwise it's left unchanged
char upperLetter(char c)
{
	if((c >=97) && (c <= 122))
	{
			c -= 32;
	}
	return c;
}


//Modifies the original string by replacing lowercase letters with uppercase one character at a time
void upperString(char string[])
{
	for(int i = 0; i < getLength(string); i++)
	{
		string[i] = upperLetter(string[i]);
	}
}

