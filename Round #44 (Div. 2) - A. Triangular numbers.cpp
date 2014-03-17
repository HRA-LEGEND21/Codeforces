#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int n,i=1,j=1;
	bool check = false;
	scanf("%d",&n);
	while(i++<=n){
		if(n==j){ check = true; break; }
		j=j+i;
	}
	if(check) printf("YES\n");
	else printf("NO\n");
	return 0;
}
