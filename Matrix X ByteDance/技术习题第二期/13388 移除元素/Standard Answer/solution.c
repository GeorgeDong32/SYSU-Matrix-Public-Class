#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int comp(const void *a,const void *b){
    return (*(int*)a > *(int*)b);
}

int containsDuplicate(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), comp);
    for(int i=0;i<numsSize-1;i++)
    {
    
        if(nums[i]==nums[i+1])
        return 1;
    }
    return 0;
}

int main( ) {
    char buf[256];
    int nums[256];
    memset(buf, 0 ,256*sizeof(char));
    gets(buf);
    int len = (int)strlen(buf);
    int i = 0;
    for(;i<len;i++){
        nums[i] = buf[i]-'0';
    }
    int ret = containsDuplicate(nums, len);
    printf("%d",ret);
    return 0;
}