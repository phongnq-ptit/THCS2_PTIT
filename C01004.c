#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int n; scanf("%d", &n);
	printf("%.15lf\n", (double) 1/n);
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

