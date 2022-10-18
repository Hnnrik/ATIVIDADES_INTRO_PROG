#include <stdio.h>
#include <locale.h>
#include <string.h>
int main(){
	setlocale(LC_ALL, "");
//
	int n,i,cont1=0,cont2=0,cont3=0;
	scanf("%d", &n);
	int v[n];
	
	for(i=0;i<n;i++){
		scanf("%d", &v[i]);
		if(i!=0){
			if(v[i-1]<=v[i]){
				cont1++;
			}
			if(v[i-1]>=v[i]){
				cont2++;
			}
		}
	}
	if(cont1==cont2){
		printf("nda");
	}else if(cont1==n-1){
		printf("cresce");
	}else if(cont2==n-1){
		printf("decresce");
	}else{
		printf("Nda");
	}
//
	int n,i;
	scanf("%d", &n);
	int v[n];
	
	for(i=0;i<n;i++){
		scanf("%d", &v[i]);
	}

	do{
		printf("%d \n", v[i-1]);
		i--;
	}while(i!=0);
//
	int i;
	char frase[100],c1,c2;
	gets(frase);
	scanf("%c %c", &c1, &c2);
	for(i=0;frase[i]!='\0';i++){
		if(frase[i]==c1){
			frase[i]=c2;
		}
	}
	printf("%s",frase);
//
	char frase1[50],frase2[50],frase3[100];
	gets(frase1);
	gets(frase2);
	int i, f1,f2;
	f1=strlen(frase1);
	f2=strlen(frase2);
	for(i=0;i<f1;i++){
		frase3[i]=frase1[i];
	}
	for(i=0;i<f2;i++){
		frase3[f1+i]=frase2[i];
	}
	printf("%s",frase3);
//
	int i,ver=0;
	char frase1[50],frase2[50];
	gets(frase1);
	gets(frase2);
	
	for(i=1;frase1[i]!='\0';i++){
		if(frase1[i]!=frase2[i]){
			ver=1;
			break;
		}
	}
	if(ver==1){
		printf("São diferentes");
	}else{
		printf("São iguais");
	}
	//HNRIK
}
