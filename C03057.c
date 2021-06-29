#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

long long chuyen_so_6(char n[20]){
	int i;
	for(i = 0; i < strlen(n); i++){
		if(n[i] == '5') n[i] = '6';
	}
	long long kq = atoll(n);
	return kq;
}

long long chuyen_so_5(char n[20]){
	int i;
	for(i = 0; i < strlen(n); i++){
		if(n[i] == '6') n[i] = '5';
	}
	long long kq = atoll(n);
	return kq;
}

void bai_lam(){
	char a[20],b[20];
	scanf("%s%s", &a,&b); fflush(stdin);
	long long min = chuyen_so_5(a) + chuyen_so_5(b);
	long long max = chuyen_so_6(a) + chuyen_so_6(b);
	printf("%lld %lld\n", min, max);
}

int main(){
	int a; scanf("%d", &a); fflush(stdin);
	while(a--){
		bai_lam();
	}
	return 0;
}

