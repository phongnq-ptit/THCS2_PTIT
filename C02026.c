#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void chen_mang(char arr[], int n, int index){
	int i;
	for(i = 0; i < index; i++){
		arr[i] = arr[i + 1];
	}
	arr[index] = arr[n - 1];
}

void bai_lam(){
	int n,m,i,j;
	scanf("%d%d", &n, &m);
	
	char kq[n][m], arr[m], temp = 64 + m;
	for(i = 0; i < m; i++) arr[i] = 65 + i;
	
	int index = m - 2;
	for(i = 0; i < n; i++){
		if(i == 0){
			for(j = 0; j < m; j++) kq[i][j] = arr[j];
		} else{
			if(index >= 0){
				chen_mang(arr, m, index--);
				for(j = 0; j < m; j++) kq[i][j] = arr[j];
			} else{
				for(j = 0; j < m; j++) kq[i][j] = arr[j];
			}
		}
	}
	
	for(i = n - 1; i >= 0; i--){
		for(j = 0; j < m; j++) {
			printf("%c",kq[i][j]);
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

