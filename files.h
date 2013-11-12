#ifndef __FILES__FILESYSTEM_JUN__
#define __FILES__FILESYSTEM_JUN__

##include "common.h"

struct V6File {
	ushort inumber;
	ushort filename[7];
};

typedef struct V6File FileEntry;


#endif