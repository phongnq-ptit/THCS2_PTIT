#include<stdio.h>
#include<math.h>
#include<string.h>

int giaiPT(float a, float b, float c){
    float delta = b*b - 4*a*c;
    return delta;
}

void bai_lam(){
	float a,b,c,x1,x2;
	scanf("%f%f%f", &a, &b, &c);
	int numNo = giaiPT(a,b,c);
        if(numNo < 0) {
        printf("NO");
    }
    else if(numNo == 0){
        printf("%.2f",-b/(2*a));
    }
    else{
    	float delta = sqrt(numNo);
        printf("%.2f %.2f",(-b + delta) / (2*a),(-b - delta) / (2*a));
    }
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

