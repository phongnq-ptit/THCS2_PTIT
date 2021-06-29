#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void in_mang(long long arr[], long long n){
	long long i;
	for(i = 0; i < n; i++){
		printf("%lld ", arr[i]);
	}
	printf("\n");
}

void sap_xep_chon(long long arr[], long long n){
	long long i,j, min_index = -1;
	
	for(i = 0; i < n - 1; i++){
		
		min_index = i;
		
		for(j = i + 1; j < n; j++){
			if(arr[j] < arr[min_index]){
				min_index = j;
			}
		}
		
		long long temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;

		in_mang(arr, n);
	}
}

void bai_lam(){
	long long n,i;
	scanf("%lld", &n);
	long long arr[n];
	for(i = 0; i < n; i++) scanf("%lld", &arr[i]);
	
	sap_xep_chon(arr,n);
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}
