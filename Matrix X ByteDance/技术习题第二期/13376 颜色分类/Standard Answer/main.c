#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void swap(int * a, int * b){
    int temp =*a;
    *a = *b;
    *b= temp;
}

void sortColors(int* nums, int numsSize){
    if(numsSize<2) return ;
    int zero = 0;
    while(zero<numsSize&&nums[zero]==0){
            zero++;
    }
    int one = zero;
    while(one<numsSize&&nums[one]==1){
            one++;
    }
    for(int i=one;i<numsSize;i++){
        if(nums[i]==0){
            swap(&nums[zero],&nums[i]);
            if(zero==one) one++;
            zero++;
        }
        if(nums[i]==1){
            swap(&nums[one],&nums[i]);
            one++;
        }
    }
}

int main( ) {
    char buf[256];
    int nums[256];
    char *token = NULL;
    int i = 0;
    int j = 0;
    memset(buf, 0 ,256*sizeof(char));
    memset(nums, 0 ,256*sizeof(int));
    gets(buf);
    token = strtok(buf, ",");
    while (token != NULL) {
        nums[i] = atoi(token);
        ++i;
        token = strtok(NULL, ",");
    }
    sortColors(nums, i);
    for (j = 0; j < i; ++j) {
        if (j != i - 1) {
            printf("%d,", nums[j]);
        } else {
            printf("%d", nums[j]);
        }
    }
    return 0;
}