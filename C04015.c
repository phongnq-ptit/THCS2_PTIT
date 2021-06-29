#include<stdio.h>
#include<math.h>
#include<string.h>

int test = 1;
int xuat_hien[1000000], danh_dau[1000000];
void bai_lam(){
	int n,i, check = 0;
	scanf("%d", &n);
	int arr[n];
	memset(xuat_hien, 0, sizeof(xuat_hien));
	memset(danh_dau, 0, sizeof(danh_dau));
	for(i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		xuat_hien[arr[i]]++;
	}
	printf("Test %d:\n", test++);
	for(i = 0; i < n; i++){
		if(danh_dau[arr[i]] == 0){
			printf("%d xuat hien %d lan\n", arr[i], xuat_hien[arr[i]]);
			danh_dau[arr[i]]++;
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
