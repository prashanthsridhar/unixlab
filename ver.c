//#define _POSIX_SOURCE
#include<stdio.h>
#include<unistd.h>
int main()
{
    #ifdef _POSIX_VERSION
        printf("%ld",_POSIX_VERSION);
    #else
        printf("undefined");
       #endif
}

