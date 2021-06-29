#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int n, i;
	scanf("%d", &n);
	int sum = 0;
	while(n != 0){
		sum += n%10;
		n /= 10;
	}
	printf("%d\n", sum);
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

