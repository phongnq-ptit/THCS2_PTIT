#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int n;
	scanf("%d", &n);
	int sum = 0;
	while(n != 0){
		sum += n%10;
		n /= 10;
	}
	if(sum % 10 == 0) printf("YES\n");
	else printf("NO\n");
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

