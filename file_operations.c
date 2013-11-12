#include "files.h"
#include "inode.h"

extern struct V6File curr_file;

ssize_t read_file(const char *filename, void *buf, size_t count) {
	struct Inode inode;
	get_inode(curr_file.inumber, &inode);
	// if(inode.flags | 040000 != 0 )
	// 	read_directory(&inode, )
}

int current_directory(const char *filename) {

}

ssize_t read_directory(struct Inode) {
	
}

ssize_t read_inode(ushort inode, struct Inode *inode_buf) {

}

ssize_t write_inode(ushort inode, struct Inode *inode_buf) {

}

