#include<stdio.h>
#include<string.h>
int main(){
	int i;
char a[100];
printf("enter the plain text:");
gets(a);
for(i=0;i<strlen(a);i++)
{ 
printf("%c",a[i]+1);
}
}

