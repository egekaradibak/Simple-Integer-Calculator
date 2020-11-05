/*
 * Program to implemement a simple calculator 
 *******************************************************************
 * Author         Dept.            Date           Notes
 *******************************************************************
 * Ege K.        Engineering      Feb172020     Initial verison
 * Ege K.        Engineering      Feb202020     Added if statement
 */
#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char*argv[] ) 
{	
if (argc!=4) {
     printf("Error: usage is simplecalc n1 operator n2\n");
return 1;
}	
//initializing variables
char o; //operator
int n1; //number 1
int n2; //number 2
int result; // result of the operaiton
//askin user for numbers and a operator 
o = argv[2][0];
n1 = atoi(argv[1]);
n2 = atoi(argv[3]);
//switch statment to assign o
 switch (o) {
case '+':
result = n1 + n2;
break;
case '*':
result = n1 * n2;
break;
case '-':
result = n1 - n2;
break;
case '/':
result = n1 / n2;
break;
default:
printf("%c  not a valid operator\n", o);
return 2;
}
if(o=='+' || o=='-' || o=='*' || o == '/')
		printf("The result is  %d\n",result);
return 0;
}


