#include<stdio.h>

void bai_lam(){
	int n, value_len, value_xuong, sum_len = 0, sum_xuong = 0;
	int min_len = 100000, min_xuong = 100000,i;
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%d%d", &value_len, &value_xuong);
		sum_len += value_len;
		sum_xuong += value_xuong;
		if(min_len > value_len) min_len = value_len;
		if(min_xuong > value_xuong) min_xuong = value_xuong;
	}
	
	if(sum_len > sum_xuong) printf("%d", sum_len + min_xuong);
	else printf("%d", sum_xuong + min_len);
}

int main(){
	bai_lam();
	return 0;
}
