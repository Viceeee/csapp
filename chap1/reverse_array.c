/*************************************************************************
    > File Name: reverse_array.c
    > Author: Vice
    > Mail: Viceeee@qq.com 
    > Created Time: Fri 29 Jan 2021 11:39:40 AM CST
 ************************************************************************/

#include<stdio.h>

void inplace_swap(int *x, int *y) {
	*y = *x ^ *y;
	*x = *x ^ *y;
    *y = *x ^ *y;

}

void reverse_array(int a[], int cnt) {
	int first, last;
	for(first = 0, last = cnt - 1; first <= last; first++, last--)
	{
		inplace_swap(&a[first], &a[last]);
		printf("%ls\n",&a);
	}
}


int main(){
	int a[5] = {0,1,2,3,4};
	int cnt = 5;
	reverse_array(a[5], cnt);
}
