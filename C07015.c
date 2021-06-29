#include<stdio.h>
#include<string.h>

struct thi_sinh{
	int id;
	char ten[100], ngay[100];
	double p1, p2, p3, tong;
};

typedef struct thi_sinh hs;

void bai_lam(){
	int n,i,j;
	scanf("%d", &n); 
	hs arr[n];
	
	double max = -100;
	for(i = 0; i < n; i++){
		scanf("\n");
		gets(arr[i].ten); scanf("\n");
		gets(arr[i].ngay);
		scanf("%lf%lf%lf", &arr[i].p1, &arr[i].p2, &arr[i].p3);
		arr[i].tong = arr[i].p1 + arr[i].p2 + arr[i].p3;
		arr[i].id = i + 1; 
		if(arr[i].tong > max) max = arr[i].tong;
	}
	
	// sap xep
	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j < n; j++){
			if(arr[i].tong < arr[j].tong){
				hs temp = arr[i];
				arr[i]= arr[j];
				arr[j] = temp;
			}
		}
	}
	
	// in
	for(i = 0; i < n; i++){
		if(arr[i].tong == max)
			printf("%d %s %s %.1lf\n", arr[i].id, arr[i].ten, arr[i].ngay, arr[i].tong);
	}
}

int main(){
	bai_lam();
	return 0;
}
