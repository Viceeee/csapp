#include "csapp.h"

void mmapcopy(int fd, int size){
	char *bufp;

	bufp = mmap(NULL,0 , PROT_READ, MAP_PRIVATE, fd, 0);
	write(1,bufp,size);
	return;
}

int main(int argc, char **argv){
	struct stat stat;
	int fd;

	if (argc !=2){
		printf("xxxxx",argv[0]);
		exit(0);
	}
	fd = open(argv[1], O_RDONLY, 0);
	fstat(fd, &stat);
	mmapcopy(fd,stat.st_size);
	exit(0);
}

