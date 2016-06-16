#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int tag[7];
	int i;
	
	for(i=0; i<7; i++)
	{
		printf("Temperature on day %d :", i+1);
		scanf("%d", &tag[i]);
	}
	printf("Temperatue on :");
	scanf("%d", &i);
	if (i<=7) {
		printf ("Day %d: %d grad celsius\n", i, tag[i-1]);
	} else {
		printf("You have put in the wrong number");
	}
	return 0;
}
