#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define MAX(A,B) A>B?A:B
#define MIN(A,B) A<B?A:B

int maxProduct(int* nums, int numsSize){
    int imax = 1, imin = 1, res = nums[0];
    int tmp,i;

    for(i = 0; i < numsSize; i++)
    {
        if(nums[i] < 0)
        {
            tmp = imax;
            imax = imin;
            imin = tmp;
        }

        imax = MAX(imax * nums[i], nums[i]);
        imin = MIN(imin * nums[i], nums[i]);

        res = MAX(imax, res);
    }
    return res;
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

    int ret = maxProduct(nums, i);
    printf("%d",ret);
    return 0;
}