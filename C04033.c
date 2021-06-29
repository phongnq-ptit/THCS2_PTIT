#include<stdio.h>
#include<math.h>
#include<string.h>

int danhdau[1000000] = {0};
void bai_lam(){
	int n,i; 
	scanf("%d", &n);
	int arr[n];
	for(i = 0; i < n; i++) scanf("%d", &arr[i]);
	for(i = 0; i < n; i++){
		if(danhdau[arr[i]] == 0){
			printf("%d ", arr[i]);
			danhdau[arr[i]]++;
		}
	}
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

