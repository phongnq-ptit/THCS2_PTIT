#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void in_mang(long long arr[], long long n){
	long long i;
	for(i = 0; i <= n; i++){
		printf("%lld ", arr[i]);
	}
	printf("\n");
}

void sap_xep_chen(long long arr[], long long n){
	long long i, key, j, buoc = 0;
	
    for(i = 1; i < n; i++){
       key = arr[i];
       j = i-1;
       
	   printf("Buoc %d: ", buoc++);
	   in_mang(arr, i - 1);
	   
       while (j >= 0 && arr[j] > key){
           arr[j+1] = arr[j];
           j -= 1;
       }
       
       arr[j+1] = key;
       
//       printf("Buoc %d: ", buoc++);
//       in_mang(arr, n - 1);
    }
    printf("Buoc %d: ", buoc++);
    in_mang(arr, n - 1);
}

void bai_lam(){
	long long n,i;
	scanf("%lld", &n);
	long long arr[n];
	for(i = 0; i < n; i++) scanf("%lld", &arr[i]);
	
	sap_xep_chen(arr,n);
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}
