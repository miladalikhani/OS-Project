#include <stdio.h>
#include <time.h>

int main()
{
	time_t rawtime;
	struct tm * timeinfo;
	time ( &rawtime );
	timeinfo = localtime ( &rawtime);
	printf ( "current local time and data : %s" , asctime ( timeinfo ) );
	return 0;	
}
