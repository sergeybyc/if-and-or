#include <stdio.h>

main()
{
	int pin1,pin2;
	printf("pin1=");
	scanf("%i",&pin1);
	printf("pin2=");
	scanf("%i",&pin2);
	
	if(((pin1==123)&&(pin2==321))||((pin1==234)&&(pin2==432))||((pin1==345)&&(pin2==543)))
	{
		printf("OK");
	}
	else
	{
		printf("ERR");
	}
}


