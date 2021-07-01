#include<stdio.h>
#include<math.h>

void bai_lam(){
	double x1, y1, x2, y2, x3, y3;
    scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
    
    double a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    double b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    double c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    
    if ((a + b) > c && (b + c) > a && (c + a) > b)
        printf("%.3lf", a + b + c);
    else
        printf("INVALID");
    printf("\n");
}

int main()
{
    int a; scanf("%d", &a);
    while(a--){
    	bai_lam();
	}
    return 0;
}
