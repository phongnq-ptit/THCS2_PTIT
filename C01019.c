#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int n, i;
	scanf("%d", &n);
	double kq = 0;
	for(i = 1; i <= n; i++){
		kq += (double) 1/i;
	}
	printf("%.4lf", kq);
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

