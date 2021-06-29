#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

long long ucln(long long a, long long b){
	if(a%b != 0) return ucln(b, a%b);
	else return b;
}

long long bcnn(long long a, long long b){
	return (a*b)/ucln(a,b);
}

void bai_lam(){
	long long n, m,i;
	scanf("%lld%lld", &n, &m);
	
	if(n > m){
		long long temp = n;
		n = m;
		m = temp;
	}
	
	long long kq = 1;
	for(i = n; i <= m; i++){
		kq = bcnn(kq,i);
	}
	
	printf("%lld\n", kq);
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

