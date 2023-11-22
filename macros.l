%{
int define=0,header=0;
#define yywrap() 1
%}

%%
^#define {define++;}
^#include {header++;}
.|"\n" {}
%%

int main()
{
FILE *f;
char file[20];
printf("Enter the file : ");
scanf("%s",&file);
f=fopen(file,"r");
yyin=f;
yylex();

printf("Define = %d",define);
printf("Header = %d",header);
fclose(yyin);
}