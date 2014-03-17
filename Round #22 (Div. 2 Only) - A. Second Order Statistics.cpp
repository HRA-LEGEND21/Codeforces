#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main(){
    int number[102],n,i;
    bool flag;
    while(scanf("%d",&n)==1){
        flag = true;
        for(i=0;i<n;i++) scanf("%d",&number[i]);
        sort(number,number+n);
        i=0;
        while(i<n-1){
            if(number[i]!=number[i+1]) break;
            i++;
        }
        if(i==n-1) flag = false;
        if(flag) printf("%d\n",number[i+1]);
        else printf("NO\n");
    }
    return 0;
}
