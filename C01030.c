#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int n,i;
	scanf("%d", &n);
	for(i = 2; i <= sqrt(n); i++){
		while(n%i == 0){
			printf("%d ", i);
			n /= i;
		}
	}
	if(n > 2) printf("%d ", n);
	printf("\n");
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

