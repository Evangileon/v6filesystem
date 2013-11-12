#ifndef __BLOCKS_FILESYSTEM_JUN__
#define __BLOCKS_FILESYSTEM_JUN__

#include "common.h"

#define BLOCKSIZE 2048

#define MAX_NFREE 251
#define MAX_NINODE 251

struct Superblock
{
	uint isize;
	uint fsize;
	uint nfree;
	uint ninode;

	uint free[MAX_NFREE];
	uint inode[MAX_NINODE];

	char flock;
	char ilock;
	char fmod;
	char padding;

	ulong time[2];
};

struct Head_freelist {
	uint nfree;
	uint free[MAX_NINODE];
	uint padding[512 - MAX_NINODE - 1];
};


#endif