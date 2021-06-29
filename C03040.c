#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int tong_chu_so(int n){
	int sum = 0;
	while(n != 0){
		sum += n%10;
		n /= 10;
	}
	return sum;
}

int tong_thua_so(int n){
	int i, sum = 0;
	for(i = 2; i <= n; i++){
        while(n % i == 0){
            sum += tong_chu_so(i);
            n /= i;
        }
    }
    return sum;
}

void bai_lam(){
	int n;
	scanf("%d", &n);
	if(tong_chu_so(n) == tong_thua_so(n)) printf("YES");
	else printf("NO");
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

