%{
int tags=0;
#define yywrap() 1
%}

%%
"<"[^>]*> {tags++; printf("%s\n",yytext);}
.|"\n" {}
%%

int main(){
FILE *f;
char file[20];
printf("Enter the file name : ");
scanf("%s",&file);

f=fopen(file,"r");
yyin=f;
yylex();
printf("no.of tags : %d",tags);
fclose(yyin);
}