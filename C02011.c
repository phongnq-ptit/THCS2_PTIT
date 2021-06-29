#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void chen_mang_phai(int arr[], int n, int temp){
	int i;
	for(i = 0; i < n - 1; i++){
		arr[i] = arr[i + 1];
	}
	arr[n - 1] = temp;
}

void chen_mang_trai(int arr[], int n, int temp){
	int i;
	for(i = n - 1; i >= 1; i--){
		arr[i] = arr[i - 1];
	}
	arr[0] = temp;
}

void bai_lam(){
	int n,m,i,j,k,temp_phai, temp_trai;
	scanf("%d%d", &n, &m);
	int arr[m];
	
	for(i = 0; i < m; i++) arr[i] = i + 1;
	
	temp_phai = m - 1, temp_trai = m + 1;
	for(i = 0; i < n; i++){
		if(i == 0) {
			for(j = 0; j < m; j++) printf("%d",arr[j]);
		} else{
			if(arr[0] < m){
				chen_mang_phai(arr, m, temp_phai--);
				for(j = 0; j < m; j++) printf("%d",arr[j]);
			} else {
				chen_mang_trai(arr, m, temp_trai++);
				for(j = 0; j < m; j++) printf("%d",arr[j]);
			}
		}
		printf("\n");
	}
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}
