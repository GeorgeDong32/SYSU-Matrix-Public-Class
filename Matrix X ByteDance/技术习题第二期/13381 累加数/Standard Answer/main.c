#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
long long StrToInt(char *num, int len)
{
    long long ret = 0;
    for (int i = 0; i < len; ++i) {
        ret = ret * 10 + num[i] - '0';
    }
    return ret;
}

long long Dfs(long long a, long long b, char *num, int len)
{
    if (len <= 0) {
        return 1;
    }

    for (int i = 0; i < len; ++i) {
        //如果一个数大于1位，且最高位为0，则不满足当前循环
        if (i > 0 && num[0] == '0') {
            break;
        }
        long long c = StrToInt(num, i + 1);
        if (a + b == c) {
            return Dfs(b, c, num + i + 1, len - i - 1);
        } else if (a + b < c) {
            return 0;
        } else {
            continue;
        }
    }

    return 0;
}

int isAdditiveNumber(char * num)
{
    int len = strlen(num);
    for (int i = 0; i < len - 2; ++i) {
        //如果一个数大于1位，且最高位为0，则不满足当前循环
        if (i > 0 && num[0] == '0') {
            break;
        }
        long long num1 = StrToInt(num, i + 1);
        for (int j = i + 1; j < len - 1; j++) {
            //如果一个数大于1位，且最高位为0，则不满足当前循环
            if (j > i + 1 && num[i + 1] == '0') {
                break;
            }

            long long num2 = StrToInt(num + i + 1, j - i);
            int ret = Dfs(num1, num2, num + j + 1, len - j - 1);
            if (ret) {
                return 1;
            }
        }
    }
    return 0;
}

int main( ){
   char buf[16];
   gets(buf);
   int ret = isAdditiveNumber(buf);
   printf("%d",ret);
   return 0;
}
