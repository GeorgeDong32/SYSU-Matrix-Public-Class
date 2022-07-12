#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int GetDigit(int n)
{
    int digit = 0;
    while(n > 0) {
        n = n/10;
        digit++;
    }
    return digit;
}

int GetOneNums(int n, int units)
{
    if (n == 0) {
        return 0;
    }

    if (units == 1) {
        return 1;
    }

    int first = n/(int)pow(10, units - 1);
    int n1 = n - first * pow(10, units - 1);
    int n2 = pow(10, units - 1) - 1;
    int n3 = (first == 1) ? (n1 + 1) : pow(10, units - 1);

    return n3 +  GetOneNums(n1 , GetDigit(n1)) + GetOneNums(n2 , units - 1) * first;
}


int countDigitOne(int n){
    if (n <= 0) {
        return 0;
    }

    char a[32] = {0};
    sprintf(a, "%d", n);
    int len = strlen(a);
    return GetOneNums(n, len);
}


int main( ) {
    char buf[256];
    memset(buf, 0 ,256*sizeof(char));
    gets(buf);
    int ret = countDigitOne(atoi(buf));
    printf("%d",ret);
    return 0;
}
