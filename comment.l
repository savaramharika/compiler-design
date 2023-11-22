%{
int com=0;
#define yywrap() 1
%}

%%
"/*" {"\n";}
"/*"(.*)"*/" {com++;}
"//"(.*) {com++;}
(.) {printf("%s",yytext);}
%%

int main(){

FILE *f;
char file[20];
printf("Enter the file name : ");
scanf("%s",&file);
f=fopen(file,"r");
yyin=f;
yylex();
printf("number of comments : %d",com);
fclose(yyin);
}