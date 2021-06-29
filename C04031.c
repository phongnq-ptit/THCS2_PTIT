#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void in_mang(int arr[], int a, int b){
	int i;
	for(i = a; i <= b; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int test = 1;
void bai_lam(){
	int n,i, max = -1;
	scanf("%d", &n);
	int arr[n];
	int danh_dau[n]; memset(danh_dau, -1, sizeof(danh_dau));
	for(i = 0; i < n; i++) scanf("%d", &arr[i]);
	
	int temp = 1;
	danh_dau[0] = 1;
	for(i = 1; i < n; i++){
		if(arr[i] > arr[i - 1]) danh_dau[i] = ++temp;
		else{
			if(temp > max) max = temp;
			temp = 1;
			danh_dau[i] = temp;
		}
	}
	

	printf("Test %d:\n%d\n",test++, max);
	for(i = 0; i < n; i++){
		if(danh_dau[i] == max){
			in_mang(arr,i + 1 - max, i);
		}
	}
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

