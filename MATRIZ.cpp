#include <stdio.h>
#include <string.h>
#include <locale.h>
void q_1(){
	int n,i,med=0;
	scanf("%d", &n);
	int vet[n];
	for(i=0;i<n;i++){
		scanf("%d", &vet[i]);
		med+=vet[i];
	}
	printf("%.2f",(float) med/n);	
}
void q_2(){
	int n,i;
	scanf("%d", &n);
	int veta[n],vetb[n],vetc[n];
	for(i=0;i<n;i++){
		scanf("%d",&veta[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&vetb[i]);
	}
	for(i=0;i<n;i++){
		vetc[i]=veta[i]-vetb[i];
		printf("%d",vetc[i]);
	}
}
void q_3(){
	int n,m,i,j;
	scanf("%d %d", &n,&m);
	int mata[n][m],matb[n][m],matc[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&mata[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&matb[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			matc[i][j]=mata[i][j]+matb[i][j];
			printf("%d", matc[i][j]);
		}
		printf("\n");
	}
}
void q_4(){
	int m,n,i,j;
	scanf("%d",&m);
	scanf("%d",&n);
	int mtrz[m][n], trns[n][m]; 
	for(i=0;i<m;i++){//colhendo os valores que vão preencer as matrizes
		for(j=0;j<n;j++){
			scanf("%d", &mtrz[i][j]);
		}
	}
	printf("A matriz digitada foi:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("[%d]", mtrz[i][j]);
		}
		printf("\n");
	}
	printf("Sua transposta é:\n");
	for(j=0;j<n;j++){
		for(i=0;i<m;i++){
			trns[j][i]=mtrz[i][j];
			printf("[%d]", trns[j][i]);
		}
		printf("\n");
	}
}
void q_5(){
	int mtrz[4][4],i,j,soma=0,media=0;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			scanf("%d",&mtrz[i][j]);
			if(j%2 !=0){
				soma+=mtrz[i][j];
			}else{
				media+=mtrz[i][j];
			}
		}
	}
	printf("%d  %.2f", soma,(float)media/4);
}
void q_6(){
	int x,y,i,j,k;
	scanf("%d %d", &x,&y);
	int mat[x][y],vet[x];
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			scanf("%d",&mat[i][j]);
			if(j==0){
				vet[i]=mat[i][j];
			}else{
				if(mat[i][j]>vet[i]){
					vet[i]=mat[i][j];
				}
			}
		}
	}
	for(k=0;k<x;k++){
		printf("%d", vet[k]);
	}
}
void q_7(){
	int n,i;
	scanf("%d", &n);
	int vet_a[n],vet_b[n],vet_c[n];
	for(i=0;i<n;i++){
		scanf("%d", &vet_a[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d", &vet_b[i]);
		vet_c[i]=vet_a[i]*vet_b[i];
	}
	for(i=0;i<n;i++){
		printf("%d", vet_c[i]);
	}
}
int main(){
	setlocale(LC_ALL, "");
	int questao;
	scanf("%d", &questao);
	switch(questao){
		case 1:
			q_1();
		break;
		case 2:
			q_1();
		break;
		case 3:
			q_1();
		break;
		case 4:
			q_1();
		break;
		case 5:
			q_1();
		break;
		case 6:
			q_1();
		break;
		case 7:
			q_1();
		break;
	}
}
