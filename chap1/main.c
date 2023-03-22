/*************************************************************************
    > File Name: main.c
    > Author: Vice
    > Mail: Viceeee@qq.com 
    > Created Time: Mon 25 Jan 2021 04:57:28 PM CST
 ************************************************************************/

#include<stdio.h>

void multstore(long, long, long *);

int main(){
	long d;
	multstore(2, 3, &d);
	printf("2 * 3 --> %ld\n", d);
	return 0;
}
long mult2(long a, long b){
	long s = a * b;
	return s;
}
