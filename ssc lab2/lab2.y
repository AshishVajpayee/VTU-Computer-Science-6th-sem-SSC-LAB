%{
#include<stdio.h>
#include<stdlib.h>
%}
%token A B
%%
input:	s'\n' {printf("Successful Grammar\n");exit(0);}
		s: A s1 B| B
		s1: ; | A s1
%%
main()
{
	printf("\nEnter A String\n");
	yyparse();
}
int yyerror()
{
	printf("\nError \n");
	exit(0);
}