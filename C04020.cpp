#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int n,k,i;
	scanf("%d", &n);
	int arr[n];
	for(i = 0; i < n; i++) scanf("%d", &arr[i]);
	scanf("%d", &k);
	for(i = k; i < n; i++) printf("%d ", arr[i]);
	for(i = 0; i < k; i++) printf("%d ", arr[i]);
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

