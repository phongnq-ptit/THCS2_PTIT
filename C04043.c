#include<stdio.h>

typedef long long ll;

// thuat toan sap xep nhanh quick sort
void sap_xep(ll arr[], ll l, ll r){
	ll p =  arr[(l + r) / 2];
	int i = l, j = r;
	
	while(i < j){
		while(arr[i] < p) i++;
		while(arr[j] > p) j--;
		if(i <= j){
			ll temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++; j--;
		}
	}
	
	if(i < r) sap_xep(arr, i, r);
	if(l < j) sap_xep(arr, l, j);
}

void bai_lam(){
	ll n, i, j, k;
	scanf("%lld", &n);
	ll arr[n];
	for(i = 0; i < n; i++){
		ll value; scanf("%lld", &value);
		arr[i] = value * value;
	}
	
	sap_xep(arr, 0, n - 1); // sap xep tang dan
	
	int check = 0;
	for(i = n - 1; i > 1; i--){
		ll left = 0, right = i - 1;
		while(left < right){
			if(arr[left] + arr[right] == arr[i]){
				check = 1;
				break;
			}
			if(arr[left] + arr[right] > arr[i]) right--;
			if(arr[left] + arr[right] < arr[i]) left++;
		}
		if(check) break;
	}
	
	if(check) printf("YES\n");
	else printf("NO\n");
}

int main(){
	int a; scanf("%d", &a);
	while(a--){
		bai_lam();
	}
	return 0;
}
