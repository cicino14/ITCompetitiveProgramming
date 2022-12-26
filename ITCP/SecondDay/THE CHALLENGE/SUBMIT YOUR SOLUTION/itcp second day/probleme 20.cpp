#include<stdio.h>
#include<math.h>
main(){
	int nmbr,i,cpt;
	do{
	printf("donner un nombre positive   ");
	scanf("%d",&nmbr);}
	while(nmbr<0);
	if (nmbr==1)
	   printf("le nombre 1 est premier");
	else{	
	 cpt=0;
      for(i=1;i<=nmbr;i++){
		if((nmbr % i) == 0){
		 cpt++;}
	  }
	   if(cpt==2){
	     printf(" le nombre %d est premier", nmbr);}
	   else{
	    printf(" le nombre %d n'est pas premier ",nmbr);}
	}
}
