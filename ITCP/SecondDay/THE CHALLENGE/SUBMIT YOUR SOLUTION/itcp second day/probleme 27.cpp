#include<stdio.h>
#include<math.h>
int sumless100(int a ,int b){
	int x;
     x=a+b;
     printf("x= %d \n",x);
     if (x<100)
	    return 1 ;	
     else
        return 0;
}
   main(){ 
   int a,b,res;
      printf("donner deux nombres   ");
      scanf("%d %d",&a,&b);
        res=sumless100(a,b);
        if (res==1) 
           printf("la somme est inférieur à 100 ");
        else
           printf("la somme est superieur à 100");
   }
