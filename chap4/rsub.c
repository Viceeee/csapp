/*************************************************************************
    > File Name: rsum.c
    > Author: Vice
    > Mail: Viceeee@qq.com 
    > Created Time: Thu 18 Feb 2021 06:03:02 PM CST
 ************************************************************************/
#include <stdio.h>
//to be continued....

long rsub(long *start, long count)
{
	if(count <= 0)
		return 0;
	//printf("count = %ld\n",count);
	//printf("count = %ld\n",*start);
	return *start - rsub(start + 1, count - 1);
}
 
int main()
{
	int sub ;
	long count;
	long  int start[] ={20,10,1,2,3,4};
	count = 6;
	sub =rsub ( start,count);
	printf("sub= %d\n",sub);
	return 0;
}
