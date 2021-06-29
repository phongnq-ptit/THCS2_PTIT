#include<stdio.h>
#include<math.h>
#include<string.h>

void sap_xep(int arr[], int n){
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

void bai_lam(){
	int n,i;
	scanf("%d", &n);
	int arr[n];
	for(i = 0; i < n; i++) scanf("%d", &arr[i]);
	sap_xep(arr, n);
	printf("%d ", arr[0]);
	for(i = 1; i < n; i++){
		if(arr[i] != arr[0]){
			printf("%d ", arr[i]);
			break;
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

