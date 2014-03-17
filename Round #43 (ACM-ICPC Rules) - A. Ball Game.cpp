#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,n,x=2;
	scanf("%d",&n);
	for(i=0;i<n-1;i++){
		printf("%d ",x);
		x+= (2+i);
		if(x > n) x-=n;
	}
	
	return 0;
}
