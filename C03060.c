#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int kiem_tra(int n, int k){
	int dem = 0;
	while(n > 1){
		int temp = n;
		while(temp % 2 == 0){
			dem++;
			temp /= 2;
		}
		n--;
	}
	
	if(dem >= k) return 1;
	else return 0;
}

void bai_lam(){
	int n,k;
	scanf("%d%d", &n, &k);
	
	if(kiem_tra(n,k)) printf("Yes");
	else printf("No");
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

