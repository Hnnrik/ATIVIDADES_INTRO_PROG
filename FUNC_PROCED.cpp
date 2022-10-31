#include <stdio.h>
#include <string.h>
#include <locale.h>
float converter(int c){
	return 9/5*c+32;
}
int sinal(int n){
	if(n>0){
		return 1;
	}else if(n<0){
		return -1;
	}else{
		return 0;
	}
}
int avf(int media){
	if(media/3 >= 7){
		return 1;
	}else{
		return 0;
	}
}
int divisores(int n){
	int i,div=0;
	for(i=1;i<=n;i++){
		if(n%i==0){
			div++;
		}
	}
	return div;
}

int fibonacci(int p){
	int a=0,b=1,c,i=1;
	if(p==1){
		return 0;
	}
	if(p==2){
		return 1;
	}
	do{
		c=a+b;
		a=b;
		b=c;
		i++;
	}while(i!=p-1);
	return c;
}
int pot(int n){
	if(n==0){
		return 1;
	}else{
		return 2*pot(n-1);
	}
}
int fibonacci_rec(int n){
	if(n==0){
		return 0;
	}else if(n==1){
		return 1;
	}else{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
int main(){
	setlocale(LC_ALL, "");
//---> QUESTÃO 01 <---
	float c;
	scanf("%f", &c);
	printf("%.2f", converter(c));
//---> QUESTÃO 02 <---
	int n;
	scanf("%d", &n);
	printf("%d",sinal(n));		
//---> QUESTÃO 03 <---
	int i;
	float media, nota;
	for(i=0;i<3;i++){
		scanf("%f", &nota);
		media+=nota;
	}
	printf("%d", avf(media));
//---> QUESTÃO 04 <---
	int n;
	scanf("%d", &n);
	printf("%d", divisores(n));
//---> QUESTÃO 05 <---
	int p;
	scanf("%d", &p);
 	printf("%d", fibonacci(p));
//---> QUESTÃO 06 <---
	int n;
	scanf("%d", &n);
	printf("%d",pot(n));

//---> QUESTÃO 07 <---
	int n;
	scanf("%d", &n);
	printf("%d", fibonacci_rec(n));
}
