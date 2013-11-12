#include "common.h"
#include "blocks.h"

int main(int argc, int** argv) {
  if(argc < 4) {
    printf("Incorrect input\n");
  }

  char* v6_filename = argv[1];
  char* num_block_s = argv[2];
  char* num_inode_s = argv[3];
  struct Superblock superblock;
  printf("%ld\n", sizeof(superblock));
  printf("%ld\n", sizeof(struct Head_freelist));
  
}
