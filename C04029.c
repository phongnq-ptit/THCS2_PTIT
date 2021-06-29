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

void sap_xep_noi_bot(int arr[], int n){
	int i,j, buoc = 1, min_index = -1;
	
	for(i = 0; i < n - 1; i++){
		
		int check = 1;
		
		for(j = 0; j < n - i - 1; j++){
			if(arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				check = 0;
			}
		}
		
		if(check) break;
		printf("Buoc %d: ", buoc++);
		in_mang(arr, n);
	}
}

void bai_lam(){
	int n,i;
	scanf("%d", &n);
	int arr[n];
	for(i = 0; i < n; i++) scanf("%d", &arr[i]);
	
	sap_xep_noi_bot(arr,n);
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}
