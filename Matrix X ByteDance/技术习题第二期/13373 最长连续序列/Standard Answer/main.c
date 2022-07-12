#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int compare(const void *a, const void *b) {
    if (*(int*)a < *(int*)b) {
        return -1;
    } else if(*(int*)a == *(int*)b) {
        return 0;
    } else {
        return 1;
    }
}

int longestConsecutive(int* nums, int numsSize){
    if (nums == NULL || numsSize == 0) {
        return 0;
    }
    int cnt = 1;
    int max = 1;
    qsort(nums, numsSize, sizeof(int), compare);
    int temp = nums[0];
    for (int i=1; i<numsSize; i++) {
        if (temp == nums[i]) {
            continue;
        } else if (temp+1 == nums[i]) {
            cnt++;
            temp = nums[i];
            max=max>cnt?max:cnt;
        } else {
            temp = nums[i];
            cnt = 1;
        }
    }
    return max+1;
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

    int ret = longestConsecutive(nums, i);
    printf("%d",ret);
    return 0;
}