#include "csapp.h"

//#define INPUTTIME 5


unsigned int snooze(unsigned int secs);
void sigint_handler(int sig);

void sigint_handler(int sig){

	printf("\nCTRL+C INPUT\n");
}

unsigned int snooze(unsigned int secs){
	unsigned int time;
	
	time = sleep(secs);
	return time;
	//printf("Slept for %d of %d secs.\n",time, secs);
}

int main(int arg, char  *argv[] ){
//	int inputtime = INPUTTIME;	
	int ret ;
	int time;
	if (!argv[1]){
//	int time = atoi(argv[1]);
		printf("no args.please insert a args\n");
		return 0;
	}
	else{	
		 time = atoi(argv[1]);
	}

	if(signal(SIGINT, sigint_handler) == SIG_ERR)
	  error("signal error");
	
	
//	pause();
		ret = snooze(time);
//		printf("ret = %d\n",ret);
		if(ret == 0)
			printf("Slept for %d done.\n",time );
		else
			printf("Slept for %d of %d secs.\n", time -ret , time );
//			printf("Slept for %d of %d secs.\n",time - ret , time );

//	pause();
	return 0;
}

