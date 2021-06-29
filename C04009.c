#include<stdio.h>
#include<math.h>
#include<string.h>

void bai_lam(){
	int n,i,j = 0,k = 0;
	scanf("%d", &n);
	int arr[n];
	int chan[n]; memset(chan, -1, sizeof(chan)); 
	int le[n]; memset(le, -1, sizeof(le)); 
	for(i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if(arr[i] % 2 == 0){
			chan[j] = arr[i];
			j++;
		} else{
			le[k] = arr[i];
			k++;
		}
	}
	for(i = 0; i < n; i++){
		if(chan[i] != -1){
			printf("%d ", chan[i]);
		}
	}
	printf("\n");
	for(i = 0; i < n; i++){
		if(le[i] != -1){
			printf("%d ", le[i]);
		}
	}
	printf("\n");
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

