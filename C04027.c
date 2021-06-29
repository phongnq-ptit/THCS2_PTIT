#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void in_mang(int arr[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void sap_xep_chon(int arr[], int n){
	int i,j, buoc = 1, min_index = -1;
	
	for(i = 0; i < n - 1; i++){
		
		printf("Buoc %d: ", buoc++);
		int min = arr[i];
		
		for(j = i + 1; j < n; j++){
			if(arr[j] < min){
				min = arr[j];
				min_index = j;
			}
		}
		
		int temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;

		in_mang(arr, n);
	}
}

void bai_lam(){
	int n,i;
	scanf("%d", &n);
	int arr[n];
	for(i = 0; i < n; i++) scanf("%d", &arr[i]);
	
	sap_xep_chon(arr,n);
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}
