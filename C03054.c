#include<stdio.h>
#include<math.h>
#include<string.h>

int cat_doi(int n){
	int kq = -1;
	if(n == 0 || n == 8 || n == 9)
		kq = 0;
	if(n == 1) kq = 1;
	return kq;
}

void bai_lam(){
	long long n,i = 0, len = 0, check = 0;
	scanf("%lld", &n);
	int arr[18];
	while(n != 0){
		arr[i] = n%10;
		len++; i++;
		n /= 10;
	}
	for(i = len - 1; i >= 0; i--){
		if(arr[i] == 0 || arr[i] == 1 || arr[i] == 8 || arr[i] == 9){
			arr[i] = cat_doi(arr[i]);
		} else {
			printf("INVALID\n");
			return;
		}
	}
	i = len - 1;
	while(arr[i] == 0 && i >= 0) i--;
	if(i < 0){
		printf("INVALID\n");
		return;
	} else{
		for(;i >= 0; i--){
			printf("%d", arr[i]);
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

