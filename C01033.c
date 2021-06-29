#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	long long n,i;
	scanf("%lld", &n);
	long long temp = n, sum = 0;
	while(temp != 0){
		sum = sum*10 + temp%10;
		temp /= 10; 
	}
	if(sum == n) printf("YES\n");
	else printf("NO\n");
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

