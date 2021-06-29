#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void chen_mang(int arr[], int n, int index){
	int i, temp = arr[0];
	for(i = 0; i < index ; i++){
		arr[i] = arr[i + 1];
	}
	arr[index] = temp;
}

void bai_lam(){
	int n,m,i,j,k;
	scanf("%d%d", &n, &m);
	int arr[m];
	for(i = 0; i < m; i++) arr[i] = i + 1;
	int index = m - 1;
	for(i = 0; i < n; i++){
		if(index > 0){
			if(i != 0){
				chen_mang(arr, m, index);
				index--;
			}
			for(j = 0; j < m; j++) printf("%d",arr[j]);
		} else{
			++arr[0];
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

