#include<stdio.h>
#include<math.h>
#include<string.h>

int tong_chu_so(int n){
	int kq = 0;
	while(n != 0){
		kq += n%10;
		n /= 10;
	}
	return kq;
}

void bai_lam(){
	int a,b,i;
	scanf("%d%d", &a, &b);
	int max = (tong_chu_so(a) > tong_chu_so(b)) ? a : b;
	int min = (tong_chu_so(a) > tong_chu_so(b)) ? b : a;
	printf("%d %d", min, max);	
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

