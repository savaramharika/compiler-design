%{
#include <stdio.h>
%}

DIGIT [0-9]

%%
^([+-]?[[:space:]]*{DIGIT}+[[:space:]]*)+$ { printf("Valid mobile number: %s\n", yytext); }
.|\n { /* Ignore other characters */ }

%%
int yywrap()
{
return 1;
}

int main() {
printf("Enter the mobile number:");
    yylex();
    return 0;
}