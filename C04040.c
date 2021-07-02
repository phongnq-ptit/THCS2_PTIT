#include<stdio.h>
#include<limits.h>

typedef long long ll;

ll _max(ll a, ll b){
	return (a >= b) ? a : b;
}

void bai_lam(){
	ll n; scanf("%lld", &n);
	ll i, sum = 0, kq = INT_MIN;
	for(i = 0; i < n; i++){
		ll value; scanf("%lld", &value);
		sum += value;
		if(sum < 0) sum = 0;
		kq = _max(kq, sum);
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
