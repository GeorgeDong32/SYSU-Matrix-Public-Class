#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define MAX(A,B) A>B?A:B
#define MIN(A,B) A<B?A:B

int cmp(int *a,int *b){
   char s[100],s1[100];
   sprintf(s,"%d%d",*a,*b);
   sprintf(s1,"%d%d",*b,*a);
   return strcmp(s1,s);
}
char * largestNumber(int* nums, int numsSize){
    qsort(nums,numsSize,sizeof(int),cmp);
    if(nums[0]==0) return "0";
    char *s,*p;
    s=(char*)malloc(sizeof(char)*1000);
    p=s;
    for(int i=0;i<numsSize;i++){
        sprintf(p,"%d",nums[i]);
        p+=strlen(p);
    }
    return s;
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

    char *result = largestNumber(nums, i);
    printf("%s", result);
    return 0;
}
