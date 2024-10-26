// Tori Overholtzer
// 2024


//Libraries
#include <stdio.h>

//Function Definitions
void Int_Int_Addition();
void Int_Int_Modulo();
void Int_Int_Subtraction();
void Int_Int_Multiplication();
void Int_Int_Division();
void Int_String_Addition();
void Int_String_Subtraction();
void Int_String_Multiplication();
void Int_String_Division();
void Int_String_Modulo();



int main(int argc, char *argv[]){
	printf("Program Name: %s\n",argv[0]);
	for(int i = 1; i<argc; i++){
		printf("Arguments %d:%s\n", i, argv[i]);
	}
	printf("Advanced Calculator\n");
	printf("Focus: Defensive Programming for input validation and preventing integer overflow\n");

	//printf("Five Arithmetic Operations which are +,-,*,/and %remainder\n");

	Int_Int_Addition();
	Int_Int_Subtraction();
	Int_Int_Multiplication();
	Int_Int_Division();
	Int_Int_Modulo();

	Int_String_Addition();
	Int_String_Subtraction();
	Int_String_Multiplication();
	Int_String_Division();
	Int_String_Modulo();

return 0;
}



//Function Definitions 
void Int_String_Modulo(){
	printf("String Remainder\n");
}

void Int_String_Division(){
	printf("String Division\n");
}

void Int_String_Multiplication(){
	printf("String Multiplication\n");
}

void Int_String_Subtraction(){
	printf("String Subtraction\n");
}

void Int_String_Addition(){
	printf("String Addition\n");
}

void Int_Int_Modulo(){
	printf("Integer Remainder\n");
}

void Int_Int_Division(){
	printf("Integer Division\n");
}

void Int_Int_Multiplication(){
	printf("Integer Multiplication\n");
}

void Int_Int_Subtraction(){
	printf("Integer Subtraction\n");
}

void Int_Int_Addition(){
	printf("Integer Addition\n");
}
