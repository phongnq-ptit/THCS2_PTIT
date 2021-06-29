#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int n,m,p,i, check = 0;
	scanf("%d%d",&n,&m);
	int a[n], b[n];
	for(i = 0; i < n; i++) scanf("%d",&a[i]);
	for(i = 0; i < m; i++) scanf("%d",&b[i]);
	scanf("%d",&p);
	for(i = 0; i < p; i++){
		printf("%d ", a[i]);
	}
	for(i = 0; i < m; i++){
		printf("%d ", b[i]);
	}
	for(i = p; i < n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

