#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  
int main()
{
	clock_t baslangic,bitis,toplam;
	baslangic = clock()/CLOCKS_PER_SEC;
   	int i;
   	
   	printf("Baslangic = %ld\n",baslangic);
   	for(i=0; i< 2000000000; i++) {
   	}
   	bitis = clock()/CLOCKS_PER_SEC;
   	printf("Bitis = %ld\n",bitis);
   	toplam = bitis - baslangic;
   	
   	printf("Toplam calisma suresi = %ld sn\n",toplam);
   
  	return 0;
}
