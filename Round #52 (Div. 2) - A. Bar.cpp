#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
	int n,c=0,i;
	char text[1000];
	scanf("%d",&n);
	getchar();
	i = 0;
	while(i++<n){
		gets(text);
		if(isdigit(text[0]) && atoi(text)<18) c++;
		else if(strcmp(text,"ABSINTH")==0 || strcmp(text,"BEER")==0 || strcmp(text,"BRANDY")==0 || strcmp(text,"CHAMPAGNE")==0
			|| strcmp(text,"GIN")==0 || strcmp(text,"RUM")==0 || strcmp(text,"SAKE")==0 || strcmp(text,"TEQUILA")==0
			|| strcmp(text,"VODKA")==0 || strcmp(text,"WHISKEY")==0 || strcmp(text,"WINE")==0) c++;
	}
	printf("%d\n",c);
	return 0;
}
