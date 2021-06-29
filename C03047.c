#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int kiem_tra(int n){
	int i, chan = 0, le = 0;
	while(n != 0){
		if(n%2 == 0) chan++;
		else le++;
		n /= 10;
	}
	if(chan != le) return 0;
	return 1;
}

void bai_lam(){
	int n,i,a,b, dem = 0;
	scanf("%d", &n);
	
	a = pow(10, n - 1);
	b = pow(10, n);
	
	for(i = a; i < b; i++){
		if(kiem_tra(i)) {
			printf("%d ", i);
			dem++;
			if(dem != 0 && dem % 10 == 0) printf("\n");
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

