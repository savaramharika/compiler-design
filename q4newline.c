#include<stdio.h>
int main()
{
	char str[100];
	int nspace=0,newline=0,i;
	scanf("%[^~]s",&str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		nspace++;
		else if (str[i]=='\n')
		newline++;
	}
	printf("no of white space:%d\n",nspace);
	printf("no of newlines:%d",newline);
	return 0;
	
}
