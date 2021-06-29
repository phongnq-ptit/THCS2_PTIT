#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void chen_mang(int arr[], int n, int temp){
	int i;
	for(i = n - 1; i >= 1; i--){
		arr[i] = arr[i - 1];
	}
	arr[0] = temp;
}

void bai_lam(){
	int n,m,i,j,k;
	scanf("%d%d", &n, &m);
	int arr[m];
	for(i = 0; i < m; i++) arr[i] = i + 1;
	int temp = 2;
	for(i = 0; i < n; i++){
		if(i == 0){
			for(j = 0; j < m; j++) printf("%d",arr[j]);
		} else{
			chen_mang(arr, m, temp);
			temp++;
			for(j = 0; j < m; j++) printf("%d",arr[j]);
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

