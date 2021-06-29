#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int kiem_tra(int n){
	int i,thuan_nghich = 0, temp = n;
	if(n < 9) return 1;
	while(temp != 0){
		if(temp%10 == 9) return 0;
		thuan_nghich = thuan_nghich*10 + temp%10;
		temp /= 10;
	}
	if(thuan_nghich != n) return 0;
	return 1;
}

void bai_lam(){
	int n,i, dem = 0;
	scanf("%d", &n);
	
	for(i = 2; i < n; i++){
		if(kiem_tra(i)) {
			printf("%d ", i);
			dem++;
		}
	}
	
	printf("\n%d", dem);
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

