#include<stdio.h>
#include<stdlib.h>
int main(){
	int x[1000],n,i,a,b,year;
	while(scanf("%d",&n)==1){
		year = 0;
		for(i=0;i<n-1;i++) scanf("%d",&x[i]);
		scanf("%d %d",&a,&b);
		a--;
		b--;
		for(;a<b;a++) year+=x[a];
		printf("%d\n",year);
	}
	return 0;
}
