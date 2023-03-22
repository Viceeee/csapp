#include<stdio.h>

void main(){
	int pid;

	pid = fork();

	if(pid<0){
		printf("fork failed");
			exit(-1);
	}
	else if (pid == 0){
		printf("child\n");
		execlp("/bin/ls","ls\n",NULL);
	}
	else{
		wait(NULL);
		printf("parent process\n");
		exit(0);
	}
}
