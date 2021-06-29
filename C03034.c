#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int n,i,dem = 0;
	scanf("%d", &n);
	for(i = 1; i <= sqrt(n); i++){
		if(n%i == 0){
			if(i % 2 == 0) dem++;
			if(i != (n/i) && (n/i) % 2 == 0) dem++;
		}
	}
	printf("%d\n", dem);
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

