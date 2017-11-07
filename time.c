#include <stdio.h>
#include <time.h>

int main()
{
	time_t seconds; 
	struct tm * timeStruct; // structure for saving calendar time data
	time ( &seconds ); // seconds is equal to seconds since the Epoch 1970-01-01 00:00:00 +0000 UTC
	timeStruct = localtime ( &seconds ); // break down seconds to calendar time
	printf ( "%s" , asctime ( timeStruct ) ); // transform breakdown time saved int timeStruct into null ended string and print it
	return 0;	
}
