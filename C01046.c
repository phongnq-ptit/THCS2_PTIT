#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void bai_lam(){
	double a,b,c,d; 
	scanf("%lf%lf%lf%lf", &a, &b, &c, &d); 
	double kq = sqrt(pow((a - c), 2) + pow((b - d), 2)); 
	printf("%.4lf\n", kq);
}

int main(){ 
	int a; scanf("%d",&a); 
	while(a--){ 
		 bai_lam();
	} 
	return 0;
}
