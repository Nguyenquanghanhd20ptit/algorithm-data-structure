#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int x;
		scanf("%d",&x);
		int a[x];
		int m=0;
		for(int i=0;i<x;i++){
			scanf("%d",&a[i]);
			
		}
		for(int i=0;i <=x/2;i++){
			if(a[i] !=a[x-i-1]){
				m=1;
			}
		}if(m==0){
			printf("YES\n");
		}
		else{
			printf("NO");
		}
		printf("\n");
	}
	return 0;
}
