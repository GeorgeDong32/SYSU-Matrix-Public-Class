#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int isPowerOfThree(int n){
    if (n < 1) return 0;
    unsigned int tmp = 1;
    while (tmp < n) tmp = (tmp << 1) + tmp;
    return (tmp == n ? 1 : 0);
}

int main( ) {
    char buf[256];
    int number;
    memset(buf, 0 ,256*sizeof(char));
    gets(buf);
    number = atoi(buf);
    int ret = isPowerOfThree(number);
    printf("%d", ret);
    return 0;
}
