#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void bai_lam(){
	int n,i,dem;
    scanf("%d", &n);
    printf("%d = ", n);
    for(i = 2; i <= n; i++){
        dem = 0;
        while(n % i == 0){
            ++dem;
            n /= i;
        }
        if(dem){
            printf("%d", i);
            if(dem >= 1) printf("^%d", dem);
            if(n > i){
                printf(" * ");
            }
        }
    }
    printf("\n");
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}

