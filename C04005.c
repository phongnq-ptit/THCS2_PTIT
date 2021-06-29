#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int n,i, max = -1;
	scanf("%d", &n);
	int arr[n];
	for(i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if(max < arr[i]) max = arr[i];
	}
	printf("%d\n", max);
	for(i = 0; i < n; i++){
		if(max == arr[i]){
			printf("%d ", i);
		}
	}
	printf("\n");
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

