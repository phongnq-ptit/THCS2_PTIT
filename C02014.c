#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void bai_lam(){
	int n,m,i,j;
	scanf("%d", &n);
	int len = 2*n - 1;
	int arr[len][len];
	memset(arr, 0, sizeof(arr));
	m = len;
	int len_copy = len;
	
	int hang = 0, cot = 0, temp = n;
	while(hang < len && cot < m){
		for(j = hang; j < m; j++) arr[hang][j] = temp;
		hang++;
		for(j = hang; j < len; j++) arr[j][m - 1] = temp; 
		m--;
		if(hang < len){
			for(j = m - 1; j >= cot; j--) arr[len - 1][j] = temp;
			len--;
		}
		if(cot < m){
			for(j = len - 1; j >= hang; j--) arr[j][cot] = temp;
			cot++;
		}
		--temp;
	}
	
	for(i = 0; i < len_copy; i++){
		for(j = 0; j < len_copy; j++) printf("%d ", arr[i][j]);
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
