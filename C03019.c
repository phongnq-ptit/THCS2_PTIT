#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int kiem_tra(int n){
	int i,thuan_nghich = 0, temp = n, sum = 0;
	if(n < 9) return 1;
	while(temp != 0){
		thuan_nghich = thuan_nghich*10 + temp%10;
		sum += temp%10;
		temp /= 10;
	}
	if(thuan_nghich != n || sum % 10 != 0) return 0;
	return 1;
}

void bai_lam(){
	int n,i, dem = 0,a,b;
	scanf("%d", &n);
	
	a = pow(10, n - 1);
	b = pow(10, n) - 1;
	for(i = a; i <= b; i++){
		if(kiem_tra(i)) {
			dem++;
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

