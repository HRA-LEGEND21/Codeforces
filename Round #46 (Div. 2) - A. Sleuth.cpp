#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
    char text[1000];
    int len,i;
    gets(text);
    len = strlen(text);
    len--;
    for(i=0;i<=len;i++) text[i] = tolower(text[i]);
    while(len>0){
        if(text[len]!='?' && text[len]!=' ') break;
        len--;
    }
    if(text[len]=='a' || text[len]=='e' || text[len]=='i' || text[len]=='o' || text[len]=='u' || text[len]=='y')
        printf("YES\n");
    else printf("NO\n");
    return 0;
}
