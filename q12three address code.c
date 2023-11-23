#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void spaces(char *s)
{
	int  i,k=0;
	 for(i=0;s[i];i++)
    {
     	s[i]=s[i+k];
     	if(s[i]==' '|| s[i]=='\t')
     	{
		  k++;
		  i--;
	    }
    }
}

void main(){
	char st[50],s,g[10],result[3];
	int i,j=0,t=0;
	printf("Enter the expression : ");
	scanf("%s",&st);
	int l=strlen(st);
	
	while(st[j]=='='){
		j=j+1;
	}
	s=st[j-1];
	
	for(i=j;i<l;i++){
		if(st[i]=='*'){

			printf("t%d= %c %c %c",t,st[i-1],st[i],st[i+1]);
			st[i-1]=(char)(t+48);
			st[i]=' ';
			st[i+1]=' ';
			t++;
		}
		}
		spaces(st);
		
	for(i=j;st[i];i++){
	    if(st[i]=='+'){
			
			printf("\nt%d = %c %c %c",t,st[i-1],st[i],st[i+1]);
			st[i]=' ';
			st[i+1]=' ';
			st[i-1]=(char)(t+48);
			t++;
	}
}
	spaces(st);
	for(i=j;st[i];i++){
	    if(st[i]=='-'){
			
			printf("\nt%d =%c %c %c",t,st[i-1],st[i],st[i+1]);
			st[i]=' ';
			st[i+1]=' ';
			st[i-1]=(char)(t+48);
			t++;
	}
}
	
	printf("\na = t%d",t-1);
	
	
}
