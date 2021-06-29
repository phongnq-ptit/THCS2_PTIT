#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i = 0; i < n; i++) scanf("%d",&arr[i]);
	for(i = 0; i < n; i++){
		if(arr[i] % 2 == 0) printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

