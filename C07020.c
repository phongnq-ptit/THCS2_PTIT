#include<stdio.h>
#include<string.h>

struct Pokemon{
	char ten[5000];
	int da_tien_hoa, da_du_tru, so_lan_tien_hoa;
};

typedef struct Pokemon pkm;

void bai_lam(){
	int n, i, j; scanf("%d", &n);
	pkm pokemon[n];
	
	for(i = 0; i < n; i++){
		scanf("\n");
		gets(pokemon[i].ten);
		scanf("%d%d", &pokemon[i].da_tien_hoa, &pokemon[i].da_du_tru);
	}
	
	int max = -1, kq = 0;
	for(i = 0; i < n; i++){
		int dem = 0;
		while(pokemon[i].da_tien_hoa <= pokemon[i].da_du_tru){
			pokemon[i].da_du_tru -= pokemon[i].da_tien_hoa;
			pokemon[i].da_du_tru += 2;
			dem++; kq += 1;
		}
		pokemon[i].so_lan_tien_hoa = dem;
		if(dem > max) max = dem;
	}
	
	printf("%d\n", kq);
	for(i = 0; i < n; i++){
		if(pokemon[i].so_lan_tien_hoa == max){
			printf("%s\n", pokemon[i].ten);
			break;
		}
	}
}

int main(){
	bai_lam();
	return 0;
}
