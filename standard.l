%{
#define yywrap() 1
int line=0;
%}

%%
^(.*)\n  printf("%4d\t%s", ++line, yytext);
%%

int main(){
FILE *f;
char file[20];
printf("Enter the file name : ");
scanf("%s",&file);

f=fopen(file,"r");
yyin=f;
yylex();
fclose(yyin);
}