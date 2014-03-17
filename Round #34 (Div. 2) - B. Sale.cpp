#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main(){
	int i,j,k,n,m,a[1000],b[1000],sum;
	scanf("%d %d",&n,&m);
		sum = 0;
		for(i=0,j=0;i<n;i++){

		    scanf("%d",&a[i]);
			if(a[i]<0){
				b[j++] = abs(a[i]);
			}
		}
		sort(b,b+j);
		i = j-1;
		for(k=i ; k>=0 && m;k--) {sum+=b[k];m--;}
		printf("%d\n",sum);

	return 0;
}
