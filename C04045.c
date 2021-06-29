#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int day_uu_the(char n[10000]){
	int chan = 0, le = 0, dem = 0;
	char *token;
	const char *delim = " ";
	
	for(token = strtok(n, delim); token != NULL; token = strtok(NULL, delim)){
		dem++;
		int temp = atoi(token);
		if(temp % 2 == 0) chan++;
		else le++;
	}
	
	if(chan == le) return 0; // NO
	if(dem % 2 == 0 && chan < le) return 0; // NO
	if(dem % 2 != 0 && chan > le) return 0; // NO
	return 1; // YES
}

void bai_lam(){
	char n[10000];
	gets(n); 
	
	int check = day_uu_the(n);
	if(check) printf("YES\n");
	else printf("NO\n");
}

int main(){
	int a; scanf("%d", &a); getchar();
	while(a--){
		bai_lam();
	}
	return 0;
}

