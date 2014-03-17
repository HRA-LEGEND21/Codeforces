#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define S 0
#define M 1
#define L 2
#define XL 3
#define XXL 4
int main(){
	int size[5],i,k;
	char tshirt[4010],tsize[5];
	for(i=0;i<5;i++) scanf("%d",&size[i]);
	scanf("%d",&k);
	getchar();
	i=0;
	while(i++<k){
		gets(tsize);
		if(strcmp(tsize,"S")==0){
			if(size[S]){
				strcat(tshirt,"S."); size[S]--;
			}
			else if(size[M]){
				strcat(tshirt,"M."); size[M]--;
			}
			else if(size[L]){
				strcat(tshirt,"L."); size[L]--;
			}
			else if(size[XL]){
				strcat(tshirt,"XL."); size[XL]--;
			}
			else if(size[XXL]){
				strcat(tshirt,"XXL."); size[XXL]--;
			}
		}
		else if(strcmp(tsize,"M")==0){
			if(size[M]){
				strcat(tshirt,"M."); size[M]--;
			}
			else if(size[L]){
				strcat(tshirt,"L."); size[L]--;
			}
			else if(size[S]){
				strcat(tshirt,"S."); size[S]--;
			}
			else if(size[XL]){
				strcat(tshirt,"XL."); size[XL]--;
			}
			else if(size[XXL]){
				strcat(tshirt,"XXL."); size[XXL]--;
			}
		}
		else if(strcmp(tsize,"L")==0){
			if(size[L]){
				strcat(tshirt,"L."); size[L]--;
			}
			else if(size[XL]){
				strcat(tshirt,"XL."); size[XL]--;
			}
			else if(size[M]){
				strcat(tshirt,"M."); size[M]--;
			}
			else if(size[XXL]){
				strcat(tshirt,"XXL."); size[XXL]--;
			}
			else if(size[S]){
				strcat(tshirt,"S."); size[S]--;
			}
		}
		else if(strcmp(tsize,"XL")==0){
			if(size[XL]){
				strcat(tshirt,"XL."); size[XL]--;
			}
			else if(size[XXL]){
				strcat(tshirt,"XXL."); size[XXL]--;
			}
			else if(size[L]){
				strcat(tshirt,"L."); size[L]--;
			}
			else if(size[M]){
				strcat(tshirt,"M."); size[M]--;
			}
			else if(size[S]){
				strcat(tshirt,"S."); size[S]--;
			}
		}
		else if(strcmp(tsize,"XXL")==0){
			if(size[XXL]){
				strcat(tshirt,"XXL."); size[XXL]--;
			}
			else if(size[XL]){
				strcat(tshirt,"XL."); size[XL]--;
			}
			else if(size[L]){
				strcat(tshirt,"L."); size[L]--;
			}
			else if(size[M]){
				strcat(tshirt,"M."); size[M]--;
			}
			else if(size[S]){
				strcat(tshirt,"S."); size[S]--;
			}
		}
	}
	strcat(tshirt,"\0");
	for(i=0;tshirt[i]!='\0';i++){
		if(tshirt[i]=='.') printf("\n");
		else printf("%c",tshirt[i]);
	}
	printf("\n");
	return 0;
}
