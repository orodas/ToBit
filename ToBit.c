/*  Oscar Rodas */

//This program reads in a 32-bit int and float value, then prints the value and its bit representation as output.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	printf("Please enter an integer value: ");
	scanf("%i",&i);
	int mask = (1 << 31);
	for(j = 31; j >= 0; j--)
	{
	    if(j%8 == 7)        //to separate the bits into groups of 8
            printf(" ");

		mask = (i >> j);    //shifting the mask
		if(mask & 1)
			printf("1");    //1 & 1 = 1
		else
			printf("0");    // 0 & 1 or 0 = 0
	}

	float f;
	printf("\n Please enter a floating point number: ");
	scanf("%f",(float*)&i); //treats i as float pointer
	mask = (1 << 31);
	for(j = 31; j >= 0; j--)
	{
	    if(j%8 == 7)        //to separate the bits into groups of 8
            printf(" ");

		mask = (i >> j);
		if(mask & 1)
			printf("1");
		else
			printf("0");
	}
}
