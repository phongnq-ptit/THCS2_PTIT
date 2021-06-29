#include<stdio.h>
#include<math.h>
#include<string.h>
const long long soHoanHao[7] = {6, 28, 496, 8128, 33550336, 8589869056, 137438691328};
void bai_lam(){
	int n,i, kq = 0;
	scanf("%d", &n);
	for(i = 0; i < 7; i++){
		if(n == soHoanHao[i]){
			kq = 1;
			break;
		}
	}
	printf("%d", kq);
}

int main(){
	//int a; scanf("%d", &a);
	//while(a--){
		bai_lam();
	//}
	return 0;
}

