#include<stdio.h>
#include<math.h>
#include<string.h>

long long ucln(long long a, long long b){
	while( a != b){
		if(a > b) a -= b;
		else b -= a;
	}
	return a;
}

long long bcnn(long long a, long long b){
	return (a*b)/ucln(a,b);
}

void bai_lam(){
	long long a,b; 
	scanf("%lld%lld",&a, &b);
	printf("%lld\n%lld", ucln(a,b), bcnn(a,b));
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

