#include<stdio.h>
#include<string.h>

void bai_lam(int n){
	scanf("\n");
	char s[222], s1[111], s2[111];
	gets(s1); scanf("\n"); gets(s2); scanf("\n"); gets(s);
	
	int i , j, dem = 0, check = 1;
	// chi can tron xau den 50 lan la duoc
	while(dem < 50){
		dem++;
		char temp[222]; 
		
		// tron xau
		int len = 0;
		for(i = 0; i < n; i++){
			temp[len++] = s2[i];
			temp[len++] = s1[i];
		}
		temp[len] = '\0';
		
		// so sanh
		if(strcmp(temp, s) == 0){
			check = 0;
			break;
		}
		
		// tach xau temp ghep lai vao s1, s2
		for(i = 0; i < n; i++){
			s1[i] = temp[i];
			s2[i] = temp[i + n];
		}
	}
	
	if(check) printf("%d\n", -1);
	else printf("%d\n", dem);
}

int main(){
	int a; 
	while(1){
		scanf("%d", &a);
		if(a == 0) break;
		bai_lam(a);
	}
	return 0;
}

