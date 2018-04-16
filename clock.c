// Clocktan alinan zaman bilgisinin parcalanip saat dakika saniye bilgisi elde edilmesi
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  
int main()
{
		clock_t zaman;
		zaman = time(NULL);
		printf("%ld\n",zaman);
		
		struct tm* zamanParcali;
	  zamanParcali = localtime(&zaman);
		printf("%d:",zamanParcali->tm_hour);
		printf("%d:",zamanParcali->tm_min);
		printf("%d\n",zamanParcali->tm_sec);
		
  	return 0;
}
