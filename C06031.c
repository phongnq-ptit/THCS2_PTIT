#include<stdio.h>
#include<string.h>

int danh_dau[55];
void bai_lam(){
	char n[55]; gets(n);
	int i, j, max = -1;
	
	for(i = 0; i < 55; i++) danh_dau[i] = 1;
	
	for(i = 0; i < strlen(n); i++){
		for(j = 0; j < i; j++){
			if((int) n[i] > (int) n[j] && danh_dau[i] < danh_dau[j] + 1){
				danh_dau[i] = danh_dau[j] + 1;
			}
		}
		if(danh_dau[i] > max) max = danh_dau[i];
	}
	
	int kq = 26 - max;
	printf("%d", kq);
}

int main(){
	bai_lam();
	return 0;
}
