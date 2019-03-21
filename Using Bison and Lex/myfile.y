%{  
#include<stdio.h>  
#include<stdlib.h>  
%}
%token num alpha INC DEC IF ELSE END
%left '+''-'  
%left '*''/'
%left '<''>''='
%right '^'   
%nonassoc UMINUS  
%%
S : E END{printf("\n Accepted\n");exit(0);} 
;

C: alpha'<'num
  |alpha'<'alpha
  |alpha'>'num
  |alpha'>'alpha
  |alpha'=''='num
  |alpha'=''='alpha
  |alpha'<''='num
  |alpha'<''='alpha
  |alpha'>''='num
  |alpha'>''='alpha
  |alpha'<''>'num
  |alpha'<''>'alpha

E: E'+'E   
  |E'-'E   
  |E'*'E   
  |E'/'E  
  |E'^'E
  |IF '('C')' '{'E'}' ELSE '{'E'}'
  |'('E')'
  |'-'E %prec UMINUS  
  |alpha  
  |num  
  |alpha INC  
  |alpha DEC   
;  
%%

int yywrap()
{
return 0;
}
int main()  
{   
 yyparse();  
 return 0;  
}

yyerror(char *s)  
{  
  printf("\nError");  
}  


