#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int n,i, check = 0;
	scanf("%d",&n);
	int arr[n];
	for(i = 0; i < n; i++) scanf("%d",&arr[i]);
	for(i = 0; i <= n/2; i++){
		if(arr[i] != arr[n - 1 - i]){
			check = 1;
			break;
		}
	}
	if(check) printf("NO");
	else printf("YES");
	printf("\n");
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

