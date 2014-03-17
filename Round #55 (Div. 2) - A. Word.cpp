#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	char text[1000];
	int L,U,i;
	while(gets(text)){
		L = 0;
		U = 0;
		for(i=0;text[i];i++){
			if(isupper(text[i])) U++;
			else L++;
		}
		if(U>L){
			for(i=0;text[i];i++) printf("%c",toupper(text[i]));
		}
		else{
			for(i=0;text[i];i++) printf("%c",tolower(text[i]));
		}
		printf("\n");
	}
	return 0;
}
