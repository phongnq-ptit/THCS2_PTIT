#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void bai_lam(){
	int n,i;
	double sum = 0;
	scanf("%d", &n);
	int arr[n];
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	printf("%.3lf", sum/n);
}

int main(){
	//int a; scanf("%d", &a); fflush(stdin);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

