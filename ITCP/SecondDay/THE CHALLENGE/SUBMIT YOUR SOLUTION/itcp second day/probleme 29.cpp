#include<stdio.h>

int addition(int a,int b){
	int s ;
	  s=a+b;
	  return s ;
}
main(){
	int a,b;
	printf(" donner deux nombres ");
	scanf("%d%d",&a,&b);
	printf("la somme est %d", addition(a,b));
}
