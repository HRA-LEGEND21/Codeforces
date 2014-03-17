#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char str[202];
	int i;
	while(gets(str)){
		for(i=0;str[i]!='\0';i++){
			if(str[i]=='-' && str[i+1]=='.') { printf("1"); i++; }
			else if(str[i]=='.') printf("0");
			else if(str[i]=='-' && str[i+1]=='-') { printf("2"); i++; }
		}
		printf("\n");
	}
	return 0;
}
