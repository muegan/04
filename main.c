#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sec,a,b;
	
	printf("input the second");
	scanf("%d",&sec);
	
	a=sec/60;
	b=sec%60;
	
	printf("the time is %d:%d",a,b);
	
	return 0;
}
