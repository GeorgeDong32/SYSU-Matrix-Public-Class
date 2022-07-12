#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

typedef struct queue
{
    int front;
    int rear;
    int len;
    int *k;
}queue;

void Initqueue(queue *q,int size)
{
    q->k=(int*)malloc(sizeof(int)*size);
    q->front=0;
    q->rear=0;
    q->len=0;
}

void Inithash(int *hash,int n)
{
    for(int i=0;i<n;i++)
    {
        hash[i]=0;
    }
}


void enqueue(queue *q,int a)
{
    q->k[q->rear]=a;
    q->rear++;
    q->len++;
}


void outqueue(queue *q,int *a)
{
    *a=q->k[q->front];
    q->front++;
    q->len--;
}

void enhash(int *hash,int num)
{
    hash[num]=1;
}

int Ishash(int *hash,int num)
{
    return hash[num]==1?1:0;
}

int BFS(queue *q,int *hash,int target,int start)
{
    int pop,temp,deep=0;
    if(target==start) return deep;
    enqueue(q,start);
    enhash(hash,start);
    while(q->len>0)
    {
        deep++;
        int len=q->len;
        for(int i=0;i<len;i++)//每一层需要遍历的元素个数
        {
            outqueue(q,&pop);
            for(int j=1;j*j<=target;j++)
            {
                temp=pop+j*j;
                if(temp==target) return deep;
                else if(temp>target) break;
                else if(Ishash(hash,temp)) continue;
                enqueue(q,temp);
                enhash(hash,temp);
            }
        }
    }
    free(hash);
    free(q->k);
    free(q);
    return deep;
}

int numSquares(int n)
{
    int *hash=(int*)malloc(sizeof(int)*(n+1));
    queue *q=(queue*)malloc(sizeof(queue));
    Initqueue(q,n+1);
    Inithash(hash,n+1);
    return BFS(q,hash,n,0);
}

int main( ) {
    char buf[256];
    memset(buf, 0 ,256*sizeof(char));
    gets(buf);
    int ret = numSquares(atoi(buf));
    printf("%d",ret);
    return 0;
}
