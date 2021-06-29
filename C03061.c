#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int check_so_dep(long long n){
	int i, len = 1, last_number = n%10;
	long long sum = 0, temp = n/10;
	while(temp > 9){
		sum = sum * 10 + temp%10;
		temp /= 10;
		len++;
	}
	if(last_number*2 != temp && temp*2 != last_number) return 0;
	n = n%((long long)pow(10, len)); n /= 10;
	if(sum != n) return 0;
	return 1;
}

void bai_lam(){
	long long n,i, check = 1;
	scanf("%lld", &n);
	
	if(check_so_dep(n)) printf("YES\n");
	else printf("NO\n");
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

