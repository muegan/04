#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int y;
	
	printf("input the year : ");
	scanf("%d",&y);
	
	printf("is the year %i the leap year? : %i",y,y%4==0 && y%100!=0 || y%400==0);
	
	return 0;
}
