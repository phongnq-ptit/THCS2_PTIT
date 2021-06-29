#include<stdio.h>
#include<math.h>
#include<string.h>

int test = 1;
void bai_lam(){
	int n,i, dem = 0;
	scanf("%d", &n);
	printf("Test %d: ", test);
	for(i = 2; i <= n; i++){
		dem = 0;
		while(n % i == 0){
			++dem;
			n /= i;
		}
		if(dem > 0) printf("%d(%d) ", i, dem);
	}
	printf("\n");
	test++;
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

