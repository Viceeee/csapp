/*************************************************************************
    > File Name: mstore.c
    > Author: Vice
    > Mail: Viceeee@qq.com 
    > Created Time: Mon 25 Jan 2021 04:46:08 PM CST
 ************************************************************************/

#include<stdio.h>

long mult2(long, long);

void multstore(long x, long y, long *dest){
	long t = mult2(x, y);
	*dest = t;
}
