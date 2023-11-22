%{
#include <strings.h>

int counter = 0;
char longword[150];
%}

%%
[a-zA-Z]+ {if (yyleng > counter) 
		        {
                 counter = yyleng;
                 strcpy (longword, yytext);
                }
           }
                
%%
int yywrap (){
return 1;
}
int main (void) {
   yylex ();
   printf ("The longest word was \"%s\", which was %d characters long.\n", longword, counter);
   return 0;
}
