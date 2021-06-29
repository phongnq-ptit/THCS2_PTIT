#include<stdio.h>
#include<string.h>

struct sinh_vien{
	int id;
	char ten[100];
	double p1, p2, p3, avg;
};

typedef struct sinh_vien sv;

void bai_lam(){
	int n,i,j, check = 0;
	sv arr[100];
	int len, msv; 
	double d1 , d2, d3;
	char name[100];
	
	while(1){
		scanf("%d", &n);
		switch(n){
			case 1:
				scanf("%d", &len);
				for(i = 0; i < len; i++){
					scanf("\n");
					gets(arr[i].ten);
					scanf("%lf%lf%lf", &arr[i].p1, &arr[i].p2, &arr[i].p3);
					arr[i].id = i + 1;
					arr[i].avg = (arr[i].p1 + arr[i].p2 + arr[i].p3)/3;
				}
				printf("%d\n", len);
				break;
			case 2:
				scanf("%d", &msv);
				scanf("\n");
				gets(name);
				strcpy(arr[msv - 1].ten, name);
				scanf("%lf%lf%lf", &d1, &d2, &d3);
				arr[msv - 1].p1 = d1;
				arr[msv - 1].p2 = d2;
				arr[msv - 1].p3 = d3;
				arr[msv - 1].avg = (d1 + d2 + d3)/3;
				printf("%d\n", msv);
				break;
			case 3:
				for(i = 0; i < len; i++){
					if(arr[i].p1 < arr[i].p2 && arr[i].p2 < arr[i].p3)
						printf("%d %s %.1lf %.1lf %.1lf\n", arr[i].id, arr[i].ten, arr[i].p1, arr[i].p2, arr[i].p3);
				}
				check = 1;
				break;
		}
		if(check) break;
	}
}

int main(){
	bai_lam();
	return 0;
}
