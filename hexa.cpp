#include <ctype.h>
#include <stdio.h>
#include <string.h>

char *fileName;
FILE *file;
int initState = 0;
int stateA = 1;
int stateB = 2;
int stateC = 3;
int stateD = 4;
int stateE = 5;
int stateG = 6;
int stateH = 7;
int stateJ = 8;

int main(int argc, char const *argv[])
{
	if (argc > 1)
	{

		file = fopen("test.txt", "r");
		if (file) {
		    while ((c = getc(file)) != EOF){

		        //putchar(c);
		    }
		    //fclose(file);
		}
	} else {
		printf("Proporciona el nombre del archivo\n");
	}
	return 0;
}

int getCharacterType(char character){
	if (isdigit(character))
	{
		int numberValue = character - '0';
		if (numberValue == 0)
		{
			return 1
		} else {
			return 2
		}

	} else if (character == 'u' || 'U')
	{
		return 3
	} else if (character == 'l' || 'L') {
		return
	} else if (belongsToAF()) {
		return 4
	}
}

bool belongsToAF(char character){
	char * aToFArray = ['a','b','c','d','e','f']
	char tempChar = toLowerCase(character)
	for (int i = 0; i < 6; ++i)
	{
		if (tempChar == aToFArray[i])
		{
			return true
		} else {
			return false
		}
	}
}

bool rightString(int stringState){
	switch(stringState) {

	   case   :
	      statement(s);
	      break; /* optional */
		
	   case constant-expression  :
	      statement(s);
	      break; /* optional */
	  
	   /* you can have any number of case statements */
	   default : /* Optional */
	   statement(s);
	}
}



