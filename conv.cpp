#include <stdio.h>
#include <string.h>
#include <locale.h>

float converte(float c){
	return (9*c/5)+32;
}
int ver(int n){
	int v=0;
	if(n>0){
		v=1;
	}else if(n<0){
		v=-1;
	}
	return v;
}
int pass(int media){
	int val;
	if(media/3>=7){
		val=1;
	}else{
		val=0;
	}
	return val;
}
int div(int n){
	int q=0,i;
	for(i=1;i<=n;i++){
		if(n%i==0){
			q++;
		}
	}
	return q;
}
int  fibonacci(int n){
	int a=0,b=1,c=0,i;
	if(n==1){
		return 0;
	}
	else if(n==2){
		return 1;
	}else{
	for(i=3;i<n;i++){
			c=a+b;
			a=b;
			b=c;
		}
	}
	return c;
	}
int main(){
//	float c,f;
//	scanf("%f", &c);
//	f=converte(c);
//	printf("%.2f", f);
//	int n,v;
//	scanf("%d",&n);
//	v=ver(n);
//	printf("%d", v);
//	float nota, media=0;
//	int i, val;
//	for(i=0;i<3;i++){
//		scanf("%f", &nota);
//		media+=nota;
//	}
//	val=pass(media);
//	printf("%d", val);
//	int n, q;
//	scanf("%d", &n);
//	q=div(n);
//	printf("%d",q);
	int n,nesimo;
	scanf("%d", &n);
	nesimo= fibonacci(n);
	printf("%d", nesimo);
}

