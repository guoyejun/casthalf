#include "half/include/half.hpp"
#include <stdio.h>
#include <string.h>
using half_float::half;

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("half cast between internal 16bits interger value and single float value\n");
		printf("usage: %s value\n", argv[0]);
		printf("  if the input value contains '.', it is considered as single float value\n");
		printf("  if the input value does not contain '.', it is considered as internal 16bits value\n");
		printf("For example:\n");
		printf("  %s 100.   #single float 100.0\n", argv[0]);
		printf("  %s 100    #internl 16bits value\n", argv[0]);
		return 0;
	}

	if (strchr(argv[1], '.') != NULL)
	{
		float f = atof(argv[1]);
		printf("input float value: %f\n",f);

		half h(f);
		printf("internal 16bits value: %d (0x%x)\n", h.data_, h.data_);  
	}
	else
	{
		int base = 10;
		if (argv[1][1] == 'x' || argv[1][1] == 'X')
		{
			base = 16;
		}
		unsigned short s = strtol(argv[1], NULL, base);
		printf("input internal 16bits value: %d (0x%x)\n", s, s);

		half h;
		h.data_ = s;
		printf("single float value: %f\n",float(h));
	}
}
