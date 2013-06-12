#define MAXQSIZE 100
typedef struct {
        QElemType *base;
        int front;
        int rear;
} SqQueue;

Status InitQueue(SqQueue &Q) 
{
        Q.base = (QElemType *)malloc(MAXQSIZE * sizeof(QElemType));
        if (!Q.base)
                exit(OVERFLOW);
        Q.front = Q.rear = 0;
        return OK;
}

int QueueLength(SqQueue Q) 
{
        return (Q.rear - Q.front + MAXQSIZE) % MAXQSIZE;
}

Status EnQueue(Sq)
