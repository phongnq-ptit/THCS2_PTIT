#include<stdio.h>
#include<math.h>
#include<string.h>

int so_thuan_nghich(int n){
	int temp = n, sum = 0;
	while(temp != 0){
		sum = sum*10 + temp%10;
		temp /= 10; 
	}
	if(sum == n) return 1;
	else return 0;
}

int so_nguyen_to(int n){
	if(n < 2) return 0;
	if(n == 2) return 1;
	if(n % 2 == 0) return 0;
	int i;
	for(i = 3; i <= sqrt(n); i += 2){
		if(n%i == 0) return 0;
	}
	return 1;	
}

void bai_lam(){
	int a,b,i, dem = 0;
	scanf("%d%d", &a, &b);
	if(a > b){
		int temp = a;
		a = b;
		b= temp;
	}
	for(i = a; i <= b; i++){
		if(so_nguyen_to(i) && so_thuan_nghich(i)){
			if(dem % 10 == 0 && dem != 0) printf("\n");
			printf("%d ", i);
			dem++;
		}
	}
	printf("\n\n");
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

