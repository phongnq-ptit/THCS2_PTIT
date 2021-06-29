#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void nhap_mang(int arr[], int n){
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
}

void sap_xep_tang(int arr[], int n){
	int i,j;
	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j < n; j++){
			if(arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void sap_xep_giam(int arr[], int n){
	int i,j;
	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j < n; j++){
			if(arr[i] < arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int test = 1;
void bai_lam(){
	int n,i,j,k;
	scanf("%d", &n);
	int arr_A[n], arr_B[n];
	nhap_mang(arr_A, n); nhap_mang(arr_B, n);
	sap_xep_tang(arr_A, n); sap_xep_giam(arr_B, n);
	
	printf("Test %d:\n", test++);
	for(i = 0,j = 0, k = 0; k < 2*n; k++){
		if(k % 2 == 0) printf("%d ", arr_A[i++]);
		else printf("%d ", arr_B[j++]);
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

