#include<stdio.h>
#include<string.h>
main(){
	 char T[20];
     int n,i;
     char x;
	 do{
      printf("donner votre chaine de caractere");
      scanf("%s",T );
	   n=strlen(T); }
	 while(n<0 || n>=20);
	 for(i=0;i<(n/2);i++){
	 	x=T[i];
	 	T[i]=T[n-i-1];
	 	T[n-i-1]=x;
	 }
      for(i=0;i<n;i++){
      	printf("%c",T[i]);
	  }
}
