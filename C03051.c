#include<stdio.h>
#include<math.h>

int ktraSoNT(long long n){
    if(n < 2) return 0;
    if(n ==2) return 1;
    if(n%2==0) return 0;
    for(long long i = 3; i <= sqrt(n); i += 2){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    int a; scanf("%d",&a);
    while(a--){
        long long l, r; scanf("%lld%lld", &l,&r);
        long long dem = 0;
        for(long long i = l; i <= sqrt(r) ;i++){
            if(ktraSoNT(i) == 1) dem++;
        }
        printf("%lld\n", dem);
;    }
    return 0;
}
