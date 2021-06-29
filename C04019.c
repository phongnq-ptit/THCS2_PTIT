#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int danh_dau[30001], xuat_hien[30001];
void bai_lam(){
	int n,i, max = -1;
	scanf("%d", &n);
	int arr[n];
	memset(danh_dau, 0, sizeof(danh_dau));
	memset(xuat_hien, 0, sizeof(xuat_hien));
	
	for(i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		danh_dau[arr[i]]++;
		if(danh_dau[arr[i]] > max) max = danh_dau[arr[i]];
	}
	
	for(i = 0; i < n; i++){
		if(danh_dau[arr[i]] == max && xuat_hien[arr[i]] == 0){
			printf("%d ", arr[i]);
			xuat_hien[arr[i]]++;
		}
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

