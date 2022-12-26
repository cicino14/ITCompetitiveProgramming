#include<stdio.h>
#include<math.h>
main(){
	int an ;
	printf("donner une année");
	scanf("%d",&an);
	 if( an / 4 == 0 ){
	 	if((an / 100 != 0 )|| (an / 400 == 0))
	 	  printf("This year is a leap year");}
	 else
	    printf("This year is not a leap year ");
     
	 
}
