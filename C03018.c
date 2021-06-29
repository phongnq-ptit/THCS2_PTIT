#include<stdio.h>
#include<math.h>

long long f[1301];
void fibo(){
	int i;
    f[0] = 1; 
	f[1] = 1;
	for(i = 2; i <= 1300; i++){
		f[i] = f[i - 1] + f[i - 2];
	}
}

int check_fibo(int n){
	int i;
    for(i = 0; i <= 1300; i++){
        if(n == f[i]) return 1;
    }
    return 0;
}

int isPrime(int n){
	int i;
    if(n < 2) return 0;
    if(n == 2) return 1;
    if(n%2 == 0) return 0;
    for(i = 3; i <= sqrt(n); i += 2){
        if(n%i == 0) return 0;
    }
    return 1;
}

int tong_chu_so(int n){
	int kq = 0;
	while(n != 0){
		kq += n%10;
		n /= 10;
	}
	return kq;
}

void bai_lam(){
    fibo();
    int a,b,i;
    scanf("%d%d", &a, &b);
    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    for(i = a; i <= b; i++) {
        if(isPrime(i) && check_fibo(tong_chu_so(i))) printf("%d ", i);
    }
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

