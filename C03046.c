#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int kiem_tra(int n){
	int i, m = n/10, temp = n, sum = 0, thuan_nghich = 0;
	while(m != 0){
		if(m%10 == 4 || n%10 == 4) return 0;
		sum += n%10;
		thuan_nghich = thuan_nghich*10 + n%10;
		m /= 10; n /= 10;
	}
	sum += n%10;
	thuan_nghich = thuan_nghich*10 + n%10;
	if(sum%10 != 0 || thuan_nghich != temp) return 0;
	return 1;
}

void bai_lam(){
	int n,i,a,b;
	scanf("%d", &n);
	
	a = pow(10, n - 1);
	b = pow(10, n);
	
	for(i = a; i < b; i++){
		if(kiem_tra(i)) printf("%d ", i);
	}
	printf("\n");
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

