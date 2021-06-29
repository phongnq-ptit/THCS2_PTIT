#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int n, check = 0;
	scanf("%d", &n);
	while(n != 0){
		int temp = (n%10);
		if(temp != 0 && temp != 6 && temp != 8){
			check = 1;
			break;
		}
		n /= 10;
	}
	if(check) printf("NO\n");
	else printf("YES\n");
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

