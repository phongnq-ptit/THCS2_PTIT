#include<stdio.h>

int main(){
    int a; scanf("%d", &a);
    while(a--){
    	int n, le = 0, chan = 0;
	    scanf("%d", &n);
	    while(n != 0){
	        int temp = n%10;
	        if(n%2==0) chan++;
	        else le++;
	        n/=10;
	    }
	    printf("%d %d\n", le, chan);
	}
    return 0;
}
