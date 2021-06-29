#include<stdio.h>
#include<math.h>
#include<string.h>

int isPrime(int n){
	if(n < 2) return 0;
	if(n == 2) return 1;
	if(n % 2 == 0) return 0;
	int i;
	for(i = 3; i <= sqrt(n); i+= 2){
		if(n % i == 0) return 0;
	}
	return 1;
}

int test = 1;
int xuat_hien[1000000];
void bai_lam(){
	int n,i, check = 0;
	scanf("%d", &n);
	int arr[n];
	memset(xuat_hien, 0, sizeof(xuat_hien));
	for(i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if(isPrime(arr[i])) xuat_hien[arr[i]]++;
	}
	printf("Test %d:\n", test++);
	for(i = 0; i < 1000000; i++){
		if(xuat_hien[i] != 0){
			printf("%d xuat hien %d lan\n", i, xuat_hien[i]);
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
