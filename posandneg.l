%{
#define yywrap() 1
int neg=0,pos=0;
%}

%%
^[-][0-9]* {printf("%s is negative number",yytext); neg++;}
[0-9]* {printf("%s is positive nummber",yytext);pos++;}
. {}
%%

int main(){
yylex();

printf("Number of negative numbers : %d",neg);
printf("Number of positive numbers : %d",pos);
}