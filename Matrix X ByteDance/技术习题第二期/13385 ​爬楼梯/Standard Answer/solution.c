#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int _climb(int n, int *arr)
{
    if (arr[n] != 0 ) return arr[n];
    arr[n] = _climb(n-1, arr) + _climb(n-2, arr);
    return arr[n];
}

int climbStairs(int n){
    if ( n <  0 ) return 0;
    if ( n <= 2) return n;
    int *arr = (int*)calloc(n+1, sizeof(int));
    arr[1] = 1;
    arr[2] = 2;
    return _climb(n , arr);
}

int main( ) {
    char buf[256];
    int number;
    memset(buf, 0 ,256*sizeof(char));
    gets(buf);
    number = atoi(buf);
    int ret = climbStairs(number);
    printf("%d", ret);
    return 0;
}