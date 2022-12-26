#include<stdio.h>
#include<math.h>
main(){
	int nmbr,i,s;
	do{
	printf("donner un nombre positive");
	scanf("%d",&nmbr);}
	while(nmbr<0);
	s=0;
	for(i=1;i<nmbr;i++){
		if((nmbr % i) == 0){
		  s=s+i;}
	}
	if(s==nmbr){
	   printf(" le nombre %d est parfait", nmbr);}
	else{
	printf(" le nombre %d n'est pas parfait ",nmbr);}
}
