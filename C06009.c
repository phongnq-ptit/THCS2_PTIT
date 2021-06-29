#include<stdio.h>
#include<string.h>

int tang_chat(int arr[], int n){
	int i;
	for(i = 1; i < n; i++){
		if(arr[i - 1] >= arr[i]) return 1;
	}
	return 0;
}

int bang_nhau(int arr[], int n){
	int i;
	for(i = 1; i < n; i++){
		if(arr[i - 1] != arr[i]) return 1;
	}
	return 0;
}

int bang_nhau_dau_cuoi(int arr[], int n){
	int i;
	if(arr[0] != arr[1] && arr[1] != arr[2]) return 1;
	if(arr[3] != arr[4]) return 1;
	return 0;
}

int loc_phat(int arr[], int n){
	int i;
	for(i = 0; i < n; i++){
		if(arr[i] != 6 && arr[i] != 8) return 1;
	}
	return 0;
}

void bai_lam(){
	scanf("\n");
	char n[50]; gets(n);
	
	int i, j = 4, len = strlen(n), arr[5]; memset(arr, -1, sizeof(arr));
	for(i = len - 1; i >= len - 6; i--){
		if(n[i] != '.'){
			int temp = (int) n[i] - 48;
			arr[j] = temp;
			j--;
		}
	}
	
	int check1 = tang_chat(arr, 5);
	int check2 = bang_nhau(arr, 5);
	int check3 = loc_phat(arr, 5);
	int check4 = bang_nhau_dau_cuoi(arr, 5);
	
	if(check1 && check2 && check3 && check4) printf("NO\n");
	else printf("YES\n");
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}
