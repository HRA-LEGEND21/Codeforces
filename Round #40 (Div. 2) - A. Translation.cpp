#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void wRev(char w[],char r[]){
	int i,j, l = strlen(w);
	for(i=l-1,j=0;i>=0;i--,j++) r[j] = w[i];
	r[j] = '\0';
}
int main(){
	char s[1000],t[1000],r[1000];
	while(gets(s)){
		gets(t);
		wRev(s,r);
		if(strcmp(r,t)==0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
