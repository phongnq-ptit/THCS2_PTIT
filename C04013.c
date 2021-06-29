#include<stdio.h>
#include<math.h>
#include<string.h>

int danh_dau[1000000] = {0};
void bai_lam(){
	int n,dem = 0,i;
	scanf("%d", &n);
	int arr[n];
	for(i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		danh_dau[arr[i]]++;
	}
	for(i = 0; i < n; i++){
		if(danh_dau[arr[i]] == 1) dem++;
	}
	printf("%d\n", dem);
	for(i = 0; i < n; i++){
		if(danh_dau[arr[i]] == 1){
			printf("%d ", arr[i]);
		}
	}
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

