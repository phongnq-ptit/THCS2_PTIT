#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int tam_giac_pascal(int k, int n) {
	if(k == 0 || k == n) return 1;
	return tam_giac_pascal(k - 1, n - 1) + tam_giac_pascal(k, n - 1);
}

void bai_lam(){
	int n,i,j;
	scanf("%d", &n);
	
	for(i = 0; i < n; i++) {
		for(j = 0; j <= i; j++)	 {
			printf("%d ", tam_giac_pascal(j, i));
		}
		printf("\n");
	}
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

