#include<stdio.h>
#include<math.h>
#include<string.h>

int ucln(int a, int b){
	while( a != b){
		if(a > b) a -= b;
		else b -= a;
	}
	return a;
}

void bai_lam(){
	int a,b,i,j;
	scanf("%d%d",&a, &b);
	if(a > b){
		int temp = a;
		a = b;
		b = temp;
	}
	for(i = a; i <= b - 1; i++){
		for(j = i + 1; j <= b; j++){
			if(ucln(i,j) == 1 && i != j){
				printf("(%d,%d)\n", i, j);
			}
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

