#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main(){
	int i=0,id=0,cn=0,op=0,m;
	char identifier[30],operators[30],constant[30],b[30];
	
	printf("enter the string : ");
	scanf("%[^\n]s",b);
	while(i<strlen(b)){
		if(isspace(b[i])){
			i=i+1;
		}
		
		else if(isalpha(b[i])){
			identifier[id]=b[i];
			id=id+1;
			i=i+1;
		}
		
		else if(isdigit(b[i])){
			m=(b[i]-'0');
			i=i+1;
			while(isdigit(b[i])){
				m=m*10+(b[i]-'0');
				i++;
			 
			}
			
			constant[cn]=m;
			cn=cn+1;
		}
		
		else{
			if(b[i]=='+'){
				operators[op]='+';
			}
			else if(b[i]=='-'){
				operators[op]='-';
			}
			else if(b[i]=='*'){
				operators[op]='*';
			}
			else if(b[i]=='='){
				operators[op]='=';
			}
			i=i+1;
			op=op+1;
			
		}

	}
	
	
	printf("\nOperators : ");
	for(i=0;i<op;i++){
		printf("%c ",operators[i]);
	}
	printf("\nidentifiers : ");
	for(i=0;i<id;i++){
		printf("%c ",identifier[i]);
	}
	printf("\nconstants : ");
	for(i=0;i<cn;i++){
		printf("%d ",constant[i]);
	}
}
