#include<stdio.h>
#include<math.h>

void bai_lam(){
	int a,b; 
	scanf("%d%d", &a, &b);
//	if(b == 0){
//		printf("%d", 0);
//		return;
//	}
	printf("%d\n%d\n%lld\n%d\n%d\n%.2f\n", a + b, a - b,(long long) a * b, a/b, a%b, (float) a/b);
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}
