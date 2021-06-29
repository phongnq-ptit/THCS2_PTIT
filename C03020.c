#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int kiem_tra(int n){
	int i, check = 1, sum = 0, thuan_nghich = 0, temp = n;
	while(temp != 0){
		if(temp%10 == 6) check = 0;
		sum += temp%10;
		thuan_nghich = thuan_nghich*10 + temp%10;
		temp /= 10;
	}
	if(check || sum%10 != 8 || thuan_nghich != n) return 0;
	return 1;
}

void bai_lam(){
	int a,b,i;
	scanf("%d%d", &a, &b);
	
	if(a > b){
		int temp = a;
		a = b;
		b = temp;
	}
	
	for(i = a; i <= b; i++){
		if(kiem_tra(i)) printf("%d ", i);
	}
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

