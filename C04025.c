#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void xuat_mang(int arr[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
}

void sap_xep(int arr[], int n){
	int i,j;
	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j < n; j++){
			if(arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void bai_lam(){
	int n,c = 0, l = 0, i;
	scanf("%d", &n);
	int arr[n];
	
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		if(arr[i] % 2 == 0) c++;
		else l++;
	}
	
	int chan[c], le[l];
	int j = 0, k = 0;
	for(i = 0; i < n; i++){
		if(arr[i] % 2 == 0) {
			chan[j] = arr[i];
			j++;
		} else{
			le[k] = arr[i];
			k++;
		}
	}
	
	sap_xep(chan, c); sap_xep(le, l);
	xuat_mang(chan, c); xuat_mang(le, l);
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

