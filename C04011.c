#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void bai_lam(){
	int n,i,j,dem = 1;
	scanf("%d", &n);
	int arr[n];
	
	for(i = 0; i < n; i++){
		int check = 1;
		scanf("%d", &arr[i]);
		if(i > 0){
			for(j = 0; j < i; j++){
				if(arr[i] < arr[j]){
					check = 0;
					break;
				}
			}
			if(check) dem++;
		}
	}
	
	printf("%d\n", dem);
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

