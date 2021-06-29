#include<stdio.h>

void bai_lam(){
	int n,i,j,kq = -1;
	scanf("%d", &n);
	int arr[n];
	for(i = 0; i < n; i++) scanf("%d", &arr[i]);
	
	for(i = 0; i < n - 1; i++){
		int check = 0;
		for(j = i + 1; j < n; j++){
			if(arr[i] == arr[j]){
				kq = arr[i];
				check = 1;
				break;
			}
		}
		if(check) break;
	}
	
	if(kq != -1) printf("%d\n", kq);
	else printf("NO\n");
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
}
