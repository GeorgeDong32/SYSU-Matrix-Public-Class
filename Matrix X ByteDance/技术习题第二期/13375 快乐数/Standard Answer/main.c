#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int reverse(int n) {
    int num = 0;
    while(n != 0) {
        num = num + (n % 10) * (n % 10);
        n = n/10;
    }
    return num;
}

int isHappy(int n) {
    int num = 0;
    num = reverse(n);
    int* hash = (int*)calloc(sizeof(int),820);
    while(num != 1) {
        if(hash[num] == 1) {
            return 0;
        } else {
            hash[num] ++;
        }
        num = reverse(num);
    }
    return 1;
}

int main( ) {
    char buf[256];
    memset(buf, 0 ,256*sizeof(char));
    gets(buf);
    int ret = isHappy(atoi(buf));
    printf("%d",ret);
    return 0;
}