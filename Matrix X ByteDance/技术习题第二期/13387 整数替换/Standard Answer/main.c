#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int integerReplacement(int n){
   int i=0;
   if(n<=0){
       return i;
   }
   else
    while(n!=1){
       if(n%2==0){
           n=n/2;
       }
       else if(n%4==3&&n!=3){
           n=n/2+1;
           i++;
       }
       else
         n--;
       i++;
   }
   return i;
}

int main( ) {
    char buf[256];
    int number;
    memset(buf, 0 ,256*sizeof(char));
    gets(buf);
    number = atoi(buf);
    int ret = integerReplacement(number);
    printf("%d", ret);
    return 0;
}
