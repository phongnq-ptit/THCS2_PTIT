#include<stdio.h>
#include<string.h>

int kiem_tra(char a[15], char b[15]){
	char ab[55], ba[55];
	
	// noi xau a voi b
	strcpy(ab, a); strcat(ab, b);
	
	// noi xau b voi a
	strcpy(ba, b); strcat(ba, a);
	
	if(strcmp(ab,ba) > 0) return 1;
	return 0;
}

void sap_xep(char arr[][15], int n){
	int i, j;
	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j < n; j++){
			if(kiem_tra(arr[i], arr[j])){
				char temp[15];
				strcpy(temp, arr[i]);
				strcpy(arr[i], arr[j]);
				strcpy(arr[j], temp);
			}
		}
	}
}

void bai_lam(){
	int n, i, j; scanf("%d", &n);
	char arr[n][15];
	for(i = 0; i < n; i++) scanf("%s", arr[i]);
	
	sap_xep(arr, n);
	
	for(i = 0; i < n; i++) printf("%s", arr[i]);
	printf("\n");
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}
