#include<stdio.h>
#include<math.h>
#include<limits.h>

// thuat toan sap xep nhanh quick sort
void sap_xep(int a[], int l, int r){
    int i = l;
    int j = r;
    int p = a[(l + r) / 2];
    while (i < j){
        while (a[i] < p) i++;
        while (a[j] > p) j--;
        if (i <= j){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++; j--;
        }
    }
    if (i < r) sap_xep(a, i, r);
    if (j > l) sap_xep(a, l, j);
}

int _min(int a, int b){
	return (a >= b) ? b : a;
}

void bai_lam(){
	int n, i, j, min = INT_MAX;
	scanf("%d", &n);
	int arr[n];
	for(i = 0; i < n; i++) scanf("%d", &arr[i]);
	
	sap_xep(arr, 0, n - 1);
	
	for(i = 1; i < n; i++){
		min = _min(min, abs(arr[i - 1] - arr[i]));
	}
	
	int dem = 0;
	for(i = 1; i < n; i++){
		if(abs(arr[i - 1] - arr[i]) == min) dem++;
	}
	
	printf("%d %d\n", min, dem);
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}
