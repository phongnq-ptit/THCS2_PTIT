#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void giam_mang(char arr[], int n, int index){
	int i;
	for(i = index; i < n; i++){
		arr[i] -= 1;
	}
}

void bai_lam(){
	int n,m,i,j,max, index = 1;
	scanf("%d%d", &n, &m);
	
	max = (n >= m) ? n : m;
	char temp = 96 + max;
	
	char arr[m];
	for(i = 0; i < m; i++) arr[i] = temp;
	
 	for(i = 0; i < n; i++){
		if(i == 0){
			for(j = 0; j < m; j++) printf("%c", arr[j]);
		} else {
			if(index < m){
				giam_mang(arr, m, i);
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
