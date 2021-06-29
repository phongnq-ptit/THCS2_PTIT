#include<stdio.h>
#include<math.h>
#include<string.h>

int so_chinh_phuong(int n){
	int temp = (int) sqrt(n);
	if(temp*temp == n) return 1;
	else return 0;
}

void bai_lam(){
	int n, i;
	scanf("%d", &n);
	if(so_chinh_phuong(n)) printf("YES\n");
	else printf("NO\n");
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

