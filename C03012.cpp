#include<stdio.h>
#include<math.h>
#include<string.h>

long long f[1301];
void fibo(){
	f[0] = 0;
	f[1] = 1;
	int i;
	for(i = 2; i <= 1300; i++){
		f[i] = f[i - 1] + f[i - 2];
	}
}

void bai_lam(){
	int n,i;
	scanf("%d", &n);
	int kq = 0;
	for(i = 0; i <= 1300; i++){
		if(n == f[i]){
			kq = 1;
			break;
		}
	}
	printf("%d", kq);
}

int main(){
	fibo();
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

