#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int rangeBitwiseAnd(int m, int n) {
    int  count=0;
    while(m!=n){
        m>>=1;
        n>>=1;
        count++;
    }
    return m<<count;
}

int main( ) {
    char buf[256];
    int nums[256];
    char *token = NULL;
    int i = 0;
    memset(buf, 0 ,256*sizeof(char));
    memset(nums, 0 ,256*sizeof(int));
    gets(buf);
    token = strtok(buf, ",");
    while (token != NULL) {
        nums[i] = atoi(token);
        ++i;
        token = strtok(NULL, ",");
    }

    if (i < 2) {
        printf("invalid params");
        return 0;
    }
    int ret = rangeBitwiseAnd(nums[0], nums[1]);
    printf("%d",ret);
    return 0;
}