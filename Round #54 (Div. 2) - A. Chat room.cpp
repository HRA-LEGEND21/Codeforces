#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
	char text[1000];
	int i=0,c=0;
	gets(text);
	while(text[i]){
		if(text[i++]=='h') { c++; break; }
	}
	while(text[i]){
		if(text[i++]=='e') { c++; break; }
	}
	while(text[i]){
		if(text[i++]=='l') { c++; break; }
	}
	while(text[i]){
		if(text[i++]=='l') { c++; break; }
	}
	while(text[i]){
		if(text[i++]=='o') { c++; break; }
	}
	if(c==5) printf("YES\n");
	else printf("NO\n");
	return 0;
}
