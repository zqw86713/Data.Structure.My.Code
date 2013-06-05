typedef struct QNode {
        QElemType data;
        struct QNode *next;
} QNode, *QueuePtr;

typedef struct {
        QueuePtr front;
        QueuePtr rear;
} LinkQueue;

Status InitQueue(LinkQueue &Q) {
        Q.front = Q.rear = (QueuePtr)malloc(sizeof(QNode));
        if (!Q.front)
                exit(OVERFLOW);
        free(Q.front);
        Q.front = Q.rear;
}

Status DestroyQueue(LinkQueue &Q) {
        while (Q.front) {
                Q.rear = Q.front->next;
                free(Q.front);
                Q.front = Q.rear;
        }
        return OK;
}

Status DeQueue(LinkQueue &Q, QElemtype &e)
{
        if (Q.front == Q.rear)
                return ERROR;
        p = Q.front->next;
        e = p->data;
        Q.front->next = p->next;
        if (Q.rear == p)
                Q.rear = Q.front;
        free(p);
        return OK;
}
typedef struct QNode {
        QElemType data;
        struct QNode *next;
} QNode, *QueuePtr;

typedef struct {
        QueuePtr front;
        QueuePtr rear;
} LinkQueue;

Status InitQueue(LinkQueue &Q) {
        Q.front = Q.rear = (QueuePtr)malloc(sizeof(QNode));
        if (!Q.front)
                exit(OVERFLOW);
        free(Q.front);
        Q.front = Q.rear;
}

Status DestroyQueue(LinkQueue &Q) {
        while (Q.front) {
                Q.rear = Q.front->next;
                free(Q.front);
                Q.front = Q.rear;
        }
        return OK;
}

Status DeQueue(LinkQueue &Q, QElemtype &e)
{
        if (Q.front == Q.rear)
                return ERROR;
        p = Q.front->next;
        e = p->data;
        Q.front->next = p->next;
        if (Q.rear == p)
                Q.rear = Q.front;
        free(p);
        return OK;
}
