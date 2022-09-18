#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
//---QUESTÃO-01---
/*	int n,i=1;
	scanf("%d",&n);
	while(i<=n){
		if(n%i == 0){
			printf("%d \n", i);
		}
	i++;
	}*/


//---QUESTÃO-02---
/*	int n;
	float i=1 ,s=0;
	scanf("%d", &n);
		
	while(i<=n){
		s=s+ 1/i;
		i++;
		if(i<=n){
			s=s- 1/i;
			i++;
		}
	}
	
	printf("%.2f", s);*/


//---QUESTÃO-03---	
/*	int i,n1,n2,s=0;
	scanf("%d", &n1);
	scanf("%d", &n2);
	for(i=1;i<=n1;i++){
		s=s+n2;
	}
	printf("%d",s);*/


//---QUESTÃO-04---
/*	int n,i,s=0;
	scanf("%d", &n);
	for(i=1;s != n;i++){
		s=i*(i+1)*(i+2);
		if(s== n){
			printf("%d, %d, %d",i,i+1,i+2);
		}else if((i+2) == n){
			printf("O numero nao e triangular");
		}
	}*/
	

//---QUESTÃO-05---	
/*	int n,i,k=1;
	scanf("%d", &n);
	for(i=2;k != 0;i++){
		k=n%i;
		if(i==n){
			printf("O número é primo");
			break;
		}
		if(k==0){
			printf("o número não é primo");
			break;
		}
	}*/
	
	
//---QUESTÃO-06---
/*	int i;
	float n,s=0;
	for(i=1;i<=3;i++){
		scanf("%f", &n);
		while(n<0.1 || n>10){
			printf("A nota não é vlálida, informe um valor válido \n");
			scanf("%f", &n);	
		}
		s=s+n;
	}
	printf("%.2f", s/3);*/
	
	
//---QUESTÃO-07---
/*	int n,i,m=0;
	for(i=1;i<=10; i++){
		scanf("%d", &n);
		if(n>m){
			m=n;
		}else if(n<m){
			m=m;
		}
	}
	printf("%d é o maior", m);
	*/


//---QUESTÃO-08---	
/*	int n, i, k=0, l=1, m ;
	scanf("%d", &n);
	for(i=1;l<=n;i++){
		m=k+l;
		k=l;
		l=m;
		printf("%d \n", m);
	}*/
}
