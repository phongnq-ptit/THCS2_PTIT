#include<stdio.h>
#include<string.h>

const int SO_LA_MA[7] = {1, 5, 10, 50, 100, 500, 1000};

int chuyen_doi(char n){
	switch(n){
		case 'I':
			return 0;
		case 'V':
			return 1;
		case 'X':
			return 2;
		case 'L':
			return 3;
		case 'C':
			return 4;
		case 'D':
			return 5;
		case 'M':
			return 6;
	}
}

void bai_lam(){
	scanf("\n");
	char s[100]; gets(s);
	int n, i, j, len = strlen(s);
	
	int arr[len];
	for(i = 0; i < len; i++){
		arr[i] = chuyen_doi(s[i]);
	}
	
	int kq = 0;
	for(i = 0; i < len - 1; i++){
		if(arr[i] < arr[i + 1]) kq -= SO_LA_MA[arr[i]];
		else kq += SO_LA_MA[arr[i]];
	}
	
	printf("%d\n", kq + SO_LA_MA[arr[len - 1]]);
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}
