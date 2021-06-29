#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void bai_lam(){
	int n,p,i,j;
	scanf("%d%d", &n, &p);
	
	// tìm x de n! = pow(p, x) ta có công thuc
	// x += [n / p] (phan nguyên cua n chia nguyên cho p)
	// chia dan khi n bang 0
	int x = 0;
	while(n != 0){
		n /= p;
		x += n;
	}
	
	printf("%d\n", x);
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

