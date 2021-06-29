#include<stdio.h>
#include<math.h>
#include<string.h>

long long tong_thua_so(int n){
	long long sum = 0;
	int j;
	while(n % 2 == 0){
		sum += 2;
		n /= 2;
	}
	for(j = 3; j <= sqrt(n); j += 2){
			while(n%j == 0){
				sum += j;
				n /= j;
			}
		}
	if(n > 2) {
		sum += n;
	}
	return sum;
}

void bai_lam(){
	int n,i,j; 
	long long sum = 0;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		int value; scanf("%d", &value);
		sum += tong_thua_so(value);
	}
	printf("%lld", sum);
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

