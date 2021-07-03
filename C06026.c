#include<stdio.h>
#include<string.h>
#include<limits.h>

int tim_kiem(char n[1005][1005], char s[1005], int len){
	int i;
	for(i = 0; i < len; i++){
		if(strcmp(n[i], s) == 0) return i;
	}
	return -1;
}

int _max(int a, int b){
	return (a > b) ? a : b;
}

int thuan_nghich(char s[1005]){
    int i, len = strlen(s);
    for (i = 0; i < len / 2; i++){
    	if (s[i] != s[len - 1 - i]) return 0;
	}
    return 1;
}

void bai_lam(){
	char s[100005]; 
	char luu_tru[1005][1005];
	char *p;
	int i, len = 0, max_size = INT_MIN;
	
	int danh_dau[1005]; memset(danh_dau, 0, sizeof(danh_dau));
	while(scanf("%s", s) != -1){
		if(thuan_nghich(s)){
			max_size = _max(max_size, strlen(s));
			int index = tim_kiem(luu_tru, s, len);
			if(index == -1){
				strcpy(luu_tru[len], s);
				danh_dau[len] = 1;
				len++;
			} else danh_dau[index]++;
		}
	}
	
	for(i = 0; i < len; i++){
		if(strlen(luu_tru[i]) == max_size){
			printf("%s %d\n", luu_tru[i], danh_dau[i]);
		}
	}
}

int main(){
	bai_lam();
	return 0;
}
