#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void reverseString(char* s, int sSize){
    if(s==NULL||sSize==0)
    {
        return;
    }
    int head = 0;
    char temp = 0;
    int tail = sSize-1;
    for(;head<tail;)
    {
        temp = s[head];
        s[head] = s[tail];
        s[tail] = temp;
        head++;
        tail--;
    }
}

int main( ) {
    char buf[256];
    memset(buf, 0 ,256*sizeof(char));
    gets(buf);
    reverseString(buf, (int)strlen(buf));
    puts(buf);
    return 0;
}