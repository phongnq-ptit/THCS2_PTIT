#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int thuan_nghich(long long n){
	long long temp = n, sum = 0;
	while(n != 0){
		sum = sum*10 + n%10;
		if((n%10) % 2 == 0) return 0;
		n /= 10;
	}
	if(sum == temp) return 1;
	else return 0;
}

int tong_le(long long n){
	long long temp = n, sum = 0;
	while(n != 0){
		sum += n%10;
		n /= 10;
	}
	if(sum % 2 != 0) return 1;
	else return 0;
}

void bai_lam(){
	long long n; scanf("%lld", &n);
	int i;
	if(thuan_nghich(n) && tong_le(n)) printf("YES\n");
	else printf("NO\n");
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

