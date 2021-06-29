#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void bai_lam(){
	int n,i,j; 
	scanf("%d",&n);
	
	char arr[n], temp = 65;
	for(i = 0; i < n; i++) arr[i] = temp + i*2;
	
	int index = 0;
	for(i = 1; i <= n; i++){
		for(j = index; j < n; j++){
			printf("%c", arr[j]);
		}
		index++;
		printf("\n");
	}
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

