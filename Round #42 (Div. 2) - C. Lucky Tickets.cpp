#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j,n,a[10000],c = 0;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i] && a[j] && (a[i]+a[j])%3==0) { c++; a[i] = 0; a[j] = 0; };
		}
	}
	printf("%d\n",c);
	return 0;
}
