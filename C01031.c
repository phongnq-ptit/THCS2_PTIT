#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int n;
	scanf("%d", &n);
	int i = 2;
	while(n > 1) {
		if(n % i == 0) {
			printf("%d", i);
			if(n != i) {
				printf("x");
			}
			n /= i;
		} else {
			i++;
		}
	}
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

