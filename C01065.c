#include<stdio.h>
#include<math.h>
#include<string.h>

int danh_dau[10] = {0}, xuat_hien[10] = {0};
void bai_lam(){
	long long n,i = 0, len = 0;
	scanf("%lld", &n);
	int arr[10];
	while(n != 0){
		danh_dau[n%10]++;
		arr[i] = n%10;
		len++; i++;
		n /= 10;
	}
	for(i = len - 1; i >= 0; i--){
		if(arr[i] == 2 || arr[i] == 3 || arr[i] == 5 || arr[i] == 7){
			if(xuat_hien[arr[i]] == 0){
				printf("%d %d\n", arr[i], danh_dau[arr[i]]);
				xuat_hien[arr[i]]++;
			}
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

