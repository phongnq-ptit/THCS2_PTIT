#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	long long n, check = 0;
	scanf("%lld", &n);;
	long long temp = n;
	temp /= 10;
	while(temp != 0){
		if((temp%10) > (n%10)){
			check = 1;
			break;
		}
		temp /= 10; n /= 10;
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

