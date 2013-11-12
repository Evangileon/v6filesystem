#ifndef __FILES__FILESYSTEM_JUN__
#define __FILES__FILESYSTEM_JUN__

##include "common.h"

struct V6_file {
	ushort inumber;
	ushort filename[7];
};

typedef struct V6_file FileEntry;


#endif