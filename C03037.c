#include<stdio.h>
#include<math.h>
#include<string.h>

int isPrime(int n){
	if(n == 2 || n == 3 || n == 5 || n == 7)
		return 1; 
	return 0;
}

int xuat_hien[10] = {0}, danh_dau[10] = {0};
void bai_lam(){
	long long n,i = 0, len = 0;
	scanf("%lld", &n);
	int arr[18];
	while(n != 0){
		xuat_hien[n%10]++;
		arr[i] = n%10;
		i++; len++; n /= 10;
	}
	for(i = len - 1; i >= 0; i--){
		if(danh_dau[arr[i]] == 0 && isPrime(arr[i])){
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
