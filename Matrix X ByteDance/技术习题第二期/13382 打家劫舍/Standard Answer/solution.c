#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int rob(int* nums, int numsSize)
{
    if(!numsSize)
        return 0;
    int dp[numsSize][2];
    dp[0][0] = 0;
    dp[0][1] = nums[0];
    for(int i=1;i<numsSize;i++)
    {
        dp[i][1] = nums[i] + dp[i-1][0];
        dp[i][0] = dp[i-1][0]>dp[i-1][1]?dp[i-1][0]:dp[i-1][1];
    }
    return dp[numsSize-1][0]>dp[numsSize-1][1]?dp[numsSize-1][0]:dp[numsSize-1][1];
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

    int ret = rob(nums, i);
    printf("%d",ret);
    return 0;
}