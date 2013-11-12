#ifndef __INODE__FILESYSTEM_JUN__
#define __INODE__FILESYSTEM_JUN__

##include "common.h"

struct Inode {
	ushort flags;
	char nlinks;
	char uid;
	char gid;
	char size0;
	ushort size1;
	ushort addr[8];
	ulong actime[2];
	ulong modtime[2];
};


#endif