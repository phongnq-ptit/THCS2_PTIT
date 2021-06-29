#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int n;
	scanf("%d", &n);
	int kq = 0;
	while(n != 0){
		kq += n%10;
		n /= 10;
	}
	printf("%d", kq);
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

