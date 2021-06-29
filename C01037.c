#include<stdio.h>
#include<math.h>

void bai_lam(){
	int a,b,i, kq = 0; 
	scanf("%d%d", &a, &b);
	if(a > b){
		int temp = a;
		a = b;
		b = temp;
	}
	for(i = a; i <= b; i++){
		kq += i;
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

