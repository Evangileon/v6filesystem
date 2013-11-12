#ifndef __COMMON_FILESYSTEM_JUN__
#define __COMMON_FILESYSTEM_JUN__

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <strings.h>


typedef unsigned char byte;
typedef unsigned short ushort;
typedef unsigned long ulong;
typedef unsigned int uint;

#ifdef __DEBUG__
	#define DEBUG(format, ...) do { fprintf(stderr, format, ##__VA_ARGS__); }while(0)
#else
	#define DEBUG(format, ...) do { }while(0)
#endif

#endif