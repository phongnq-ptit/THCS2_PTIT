#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void bai_lam(){
	long long n, chan = 0, le = 0;
	scanf("%lld", &n);
	long long copy = n;
	while(n != 0){
		int temp = (n%10);
		if(temp % 2 == 0) chan++;
		else le++;
		n /= 10;
	}
	if(chan >= le || copy % 2 == 0) printf("NO\n");
	else printf("YES\n");
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

