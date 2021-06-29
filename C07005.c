#include<stdio.h>
#include<math.h>

typedef struct Point{
	int x,y;
} Point;

int kiem_tra_tam_giac(float a, float b, float c){
	if(a + b > c && a + c > b && b + c > a) return 1;
	else return 0; 
}

void bai_lam(){
	Point a,b,c;
	scanf("%d%d", &a.x, &a.y);
	scanf("%d%d", &b.x, &b.y);
	scanf("%d%d", &c.x, &c.y);
	
	float _a = (float) sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
	float _b = (float) sqrt(pow(a.x - c.x, 2) + pow(a.y - c.y, 2));
	float _c = (float) sqrt(pow(c.x - b.x, 2) + pow(c.y - b.y, 2));
	
	int kq = kiem_tra_tam_giac(_a,_b,_c);
	
	if(kq == 0) printf("INVALID\n");
	else printf("%.3f\n", (double) _a + _c + _b);
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
}
