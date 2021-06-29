#include<stdio.h>
#include<string.h>

struct mat_hang{
	int id;
	char ten[100], nhom[100];
	double gia_mua, gia_ban, loi_nhuan;
};

typedef struct mat_hang sp;

void bai_lam(){
	int n,i,j;
	scanf("%d", &n); 
	sp arr[n];
	
	for(i = 0; i < n; i++){
		scanf("\n");
		gets(arr[i].ten); scanf("\n");
		gets(arr[i].nhom);
		scanf("%lf%lf", &arr[i].gia_mua, &arr[i].gia_ban);
		arr[i].loi_nhuan = arr[i].gia_ban - arr[i].gia_mua;
		arr[i].id = i + 1; 
	}
	
	// sap xep
	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j < n; j++){
			if(arr[i].loi_nhuan < arr[j].loi_nhuan){
				sp temp = arr[i];
				arr[i]= arr[j];
				arr[j] = temp;
			}
		}
	}
	
	// in
	for(i = 0; i < n; i++){
		printf("%d %s %s %.2lf\n", arr[i].id, arr[i].ten, arr[i].nhom, arr[i].loi_nhuan);
	}
}

int main(){
	bai_lam();
	return 0;
}
