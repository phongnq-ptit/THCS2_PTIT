#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool Prime(int n){
    if(n < 2) return 0;
    if( n == 2) return 1;
    if(n%2 == 0) return 0;
    int i;
    for (i = 3; i <= sqrt(n); i += 2){
    	if (n % i == 0) return 0;
	}    
    return 1;
}

bool Check(int n){
    int sum = 0;
    while (n > 0){
        int x = n % 10;
        sum += x;
        if (x != 2 && x != 3 && x != 5 && x != 7)
            return 0;
        n /= 10;
    }
    if (Prime(sum)) return 1;
    return 0;
}

void bai_lam(){
    int l, r, i;
    scanf("%d%d", &l, &r);
    int d = 0;
    for (i = l; i <= r; i++)
        if (Check(i) && Prime(i)) d++;
    printf("%d\n", d);
}

int main()
{
    int a; scanf("%d", &a);
    while (a--){
    	bai_lam();
	}
    return 0;
}
