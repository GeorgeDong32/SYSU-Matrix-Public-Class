#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int firstMissingPositive(int* nums, int numsSize){
  for (int i = 0; i < numsSize; i++) {
    while ((nums[i] >= 1 && nums[i] <= numsSize) && (nums[i] != nums[nums[i]-1])) {
      int tmp = nums[i];
      nums[i] = nums[tmp-1];
      nums[tmp-1] = tmp;
    }
  }


  int is = numsSize + 1;
  for (int i = 0; i < numsSize; i++) {
    if (nums[i] != (i + 1)) {
      is = i + 1;
      break;
    }
  }

  return is;
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

    int ret = firstMissingPositive(nums, i);
    printf("%d",ret);
    return 0;
}
