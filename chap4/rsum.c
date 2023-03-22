/*************************************************************************
    > File Name: rsum.c
    > Author: Vice
    > Mail: Viceeee@qq.com 
    > Created Time: Thu 18 Feb 2021 06:03:02 PM CST
 ************************************************************************/
#include <stdio.h>

long rsum(long *start, long count)
{
	if(count <= 0)
		return 0;
	//printf("count = %ld\n",count);
	//printf("count = %ld\n",*start);
	return *start + rsum(start + 1, count - 1);
}
 
int main()
{
	int sum ;
	long count;
	long  int start[] ={1,2,3,4,5,6};
	count = 6;
	sum =rsum ( start,count);
	printf("sum= %d\n",sum);
	return 0;
}
