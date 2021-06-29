#include<stdio.h>
#include<math.h>
#include<string.h>

int xuat_hien[1000000] = {0}, danh_dau[1000000] = {0};
void bai_lam(){
	int n,i, check = 0;
	scanf("%d", &n);
	int arr[n];
	for(i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		xuat_hien[arr[i]]++;
	}
	for(i = 0; i < n; i++){
		if(danh_dau[arr[i]] == 0){
			printf("%d %d\n", arr[i], xuat_hien[arr[i]]);
			danh_dau[arr[i]]++;
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
