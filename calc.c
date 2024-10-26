// Tori Overholtzer
// 2024

#include <stdio.h>


void Int_Int_Addition(){
	printf("Integer Addition\n");
}


void Int_Int_Subtraction(){
	printf("Integer Subtraction\n");
}

void Int_Int_Multiplication(){
	printf("Integer Multiplication\n");
}

void Int_Int_Division(){
	printf("Integer Division\n");
}

void Int_Int_Modulo(){
	printf("Integer Remainder\n");
}

void Int_String_Addition(){
	printf("String Addition\n");
}

void Int_String_Subtraction(){
	printf("String Subtraction\n");
}

void Int_String_Multiplication(){
	printf("String Multiplication\n");
}

void Int_String_Division(){
	printf("String Division\n");
}

void Int_String_Modulo(){
	printf("String Modulo\n");
}

int main(){
	printf("Advanced Calculator\n");
	printf("Focus: Defensive Programming for input validation and preventing integer overflow\n");

	printf("Five Arithmetic Operations which are +,-,*,/and %remainder\n");

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

