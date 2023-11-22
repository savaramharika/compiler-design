 
%{
#include<stdio.h>
#include<string.h>
int wordcount=0;
char targetword[]="hello";
%}
%%
[a-zA-Z]+ {if(strcmp(yytext, targetword)==0) wordcount++;}
.|\n {;}
%%
int yywrap()
{
return 1;
}
int main(){
printf("enter the text and press ctrl-c to terminate:");
yylex();
printf("frequency of a word %s %d", targetword, wordcount); 
fclose(yyin);
}
