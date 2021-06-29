#include<stdio.h>
#include<string.h>

int kiem_tra_thang_hang(int xa, int ya, int xb, int yb, int xc, int yc){
	if((xa - xb) * (yb - yc) == (ya - yb) * (xb - xc))
		return 0;
	else return 1;
}

void bai_lam(){
	int n, i;
	scanf("%d", &n);
	char str[10]; strcpy(str, "Yes");
	int x[n - 1], y[n - 1];
	
	for(i = 0; i < n - 1; i++) scanf("%d%d", &x[i], &y[i]);
	
	
	for(i = 0; i < n - 3; i++){
		int check = kiem_tra_thang_hang(x[i],y[i],x[i+1],y[i+1],x[i+2],y[i+2]);
		if(check){
			strcpy(str, "No");
			break;
		}
	}
	
	printf("%s", str);
}

int main(){
	bai_lam();
	return 0;
}
