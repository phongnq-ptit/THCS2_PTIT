#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int a,b,i, dem = 0;
	scanf("%d%d", &a, &b);
	if(a > b){
		int temp = a;
		a = b;
		b= temp;
	}
	int left = sqrt(a), right = sqrt(b);
	left = (left*left == a) ? left : left + 1;
	printf("%d\n", (int) right - left + 1);
	for(i = left; i <= right; i++){
		printf("%d\n", i*i);
	}
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

