#include<stdio.h>
#include<string.h>
#include<math.h>
 
int ucln(int a, int b){
    while (a != b){
        if (a > b) a -= b;
        else b -= a;
    }
    return a;
}
 
int bcnn(int a, int b){
    return a * b / ucln(a, b);
}

int test = 1;
void bai_lam(){
	int a,b,c,d; scanf("%d%d%d%d", &a, &b, &c, &d);
	// rut gon
	int ucln_ab = ucln(a, b), ucln_cd = ucln(c, d);
	a /= ucln_ab; b /= ucln_ab; c /= ucln_cd; d /= ucln_cd;
	
	// quy dong
	int bcnn_bd = bcnn(b, d);
	a *= (bcnn_bd/b); c *= (bcnn_bd/d); 
	printf("Case #%d:\n", test++);
	printf("%d/%d %d/%d\n", a, bcnn_bd, c, bcnn_bd);
	
	// tong
	printf("%d/%d\n", a + c, bcnn_bd);
	
	// thuong
	int ucln_ac = ucln(a, c);
	printf("%d/%d\n", a/ucln_ac, c/ucln_ac);
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}
