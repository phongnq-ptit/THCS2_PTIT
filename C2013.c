#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void chen_mang(int arr[], int n, int temp){
	int i;
	for(i = 0; i < n - 1; i++){
		arr[i] = arr[i + 1];
	}
	arr[n - 1] = temp;
}

void bai_lam(){
	int n,m,i,j,k,temp, round;
	scanf("%d%d", &n, &m);
	int arr[m];
	
	int max = (m >= n) ? m : n; 
	
	for(i = 0; i < m; i++) arr[i] = max - i;
	
	if(arr[m - 1] == 1){
		temp = 2;
		round = 1;
	} 
	else {
		temp = arr[m - 1] - 1;
		round = temp;
	}
	
	for(i = 0; i < n; i++){
		if(i == 0){
			for(j = 0; j < m; j++) printf("%d",arr[j]);
		} else{
			if(round == 1){
				chen_mang(arr, m, temp);
				temp++;
				for(j = 0; j < m; j++) printf("%d",arr[j]);
			} else{
				chen_mang(arr, m, temp);
				temp--; round--;
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

