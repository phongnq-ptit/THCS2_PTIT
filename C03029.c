#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	long long n, check = 0;
	scanf("%lld", &n);
	if(n % 2 != 0) check = 1;
	long long temp = n;
	while(temp != 0){
		if((temp%10) % 2 != 0){
			check = 1;
			break;
		}
		temp /= 10;
	}
	if(check) printf("NO\n");
	else printf("YES\n");
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

