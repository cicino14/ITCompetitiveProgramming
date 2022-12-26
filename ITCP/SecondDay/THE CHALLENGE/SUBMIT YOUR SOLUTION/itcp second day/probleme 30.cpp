#include<stdio.h>
int factorielle(int a){
    int i,fact;
    if (a==0)
       return 1 ;
    else{
    	fact=a;
       for(i=a-1;i>=1;i--){
    	 fact=fact*i;
	    }
	    return fact;
	}
}
main(){
	int a;
	printf("donner un nombre");
	scanf("%d",&a);
	printf("le factorielle de %d est %d ",a,factorielle(a));
}
