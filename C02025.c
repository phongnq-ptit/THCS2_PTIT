#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void chen_mang(char arr[], int n, int index){
	int i;
	for(i = 0; i <= index; i++){
		arr[i] += 1;
	}
}

void bai_lam(){
	int n,m,i,j,max, index;
	scanf("%d%d", &n, &m);
	
	char arr[m];
	for(i = 0; i < m; i++) arr[i] = 64 + i;
	
	index = m - 2;
 	for(i = 0; i < n; i++){
		if(i == 0){
			for(j = 0; j < m; j++) printf("%c", arr[j]);
		} else {
			if(index >= 0){
				chen_mang(arr, m, index--);
				for(j = 0; j < m; j++) printf("%c", arr[j]);
			} else{
				for(j = 0; j < m; j++) printf("%c", arr[j]);
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
