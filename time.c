// Clocktan detayli zaman bilgisi elde etme
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  
int main()
{
		clock_t zaman;
		zaman = time(NULL);
		printf("%ld\n",zaman);
		
		struct tm* zamanYapi;
		char* zamanString;
		zamanYapi = localtime(&zaman); 
	  zamanString = asctime(zamanYapi);
		printf("%s",zamanString);
		
  	return 0;
}
