#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int so_uu_the(char n[1001]){
	int chan = 0, le = 0;
	int i, len = strlen(n),dem = 0;
	if(n[0] == '0') return 0; // INVALID
	for(i = 0; i < len; i++){
		if((int) n[i] < 48 || (int) n[i] > 57) return 0; //INVALID
		int temp = (int) n[i] - 48;
		if(temp % 2 == 0) chan++;
		else le++;
	}
	if(chan == le) return 1; // NO
	if(len % 2 == 0 && chan < le) return 1; // NO
	if(len % 2 != 0 && chan > le) return 1; // NO
	return 2; // YES
}

void bai_lam(){
	char n[1001];
	gets(n); 
	
	int check = so_uu_the(n);
	if(check == 0) printf("INVALID\n");
	else if(check == 1) printf("NO\n");
	else printf("YES\n");
}

int main(){
	int a; scanf("%d", &a); getchar();
	while(a--){
		bai_lam();
	}
	return 0;
}
