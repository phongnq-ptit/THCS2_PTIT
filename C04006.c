#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int n,i;
	scanf("%d", &n);
	int arr[n];
	for(i = 0; i < n; i++) scanf("%d", &arr[i]);
	for(i = n - 1; i >= 0; i--){
		printf("%d ", arr[i]);
	}
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}
