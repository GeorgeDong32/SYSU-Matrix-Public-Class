#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int canJump(int* nums, int numsSize){
    int min = numsSize - 1;
    for(int i = numsSize - 2; i > 0; --i) {
        if(i + nums[i] >= min) {
            min = i;
        }
    }
    return nums[0] >= min;
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

    int ret = canJump(nums, i);
    printf("%d",ret);
    return 0;
}