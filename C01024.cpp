#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int n, temp1, temp2;
	scanf("%d", &n);
	temp1 = n%10;
	while(n != 0){
		temp2 = n%10;
		n /= 10;
	}
	if(temp1 == temp2) printf("YES\n");
	else printf("NO\n");
}

int main(){
	int a; scanf("%d", &a); 
	while(a--){
		bai_lam();
	}
	return 0;
}

