#include<stdio.h>
#include<math.h>
#include<string.h>

const long long soHoanHao[7] = {6, 28, 496, 8128, 33550336, 8589869056, 137438691328};
void bai_lam(){
	int a,b,i, kq = 0;
	scanf("%d%d", &a, &b);
	if(a > b){
		int temp = a;
		a = b;
		b = temp;
	}
	for(i = 0; i < 7; i++){
		if(b >= soHoanHao[i] && soHoanHao[i] >= a){
			printf("%d ", soHoanHao[i]);
		}
	}
	
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

