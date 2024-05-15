#include"FD.h"

#ifdef USE_C
#include<stdio.h>
#else
#include<iostream>
#endif

int main()
{
	FD fd;
#ifdef USE_C
	printf("%d", fd.get());
#else
	std::cout << fd.get() << std::endl;
#endif
	return 0;
};
