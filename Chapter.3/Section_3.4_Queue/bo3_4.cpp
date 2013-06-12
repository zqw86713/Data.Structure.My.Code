/* bo3_4.h,
 *      
 * Gerry Qingwei Zhang <qzhang.canada@gmail.com>
 * 
 * Nine basic operation of Sequantial Queue. 
 *
 * date: 2013-06-11
 */

/* initialized a empty queue Q. */
void InitQueue(SqQueue &Q)
{
        Q.base = (QElemType *)malloc(MAX_QSIZE * sizeof(QElemType));
        if (!Q.base)    /* if initialized fail.    */
                exit(OVERFLOW);
        Q.front = Q.rear = 0;
}

/* destroy queue Q, Q no longer exist.  */
void DestroyQueue(SqQueue &Q)
{
        if (Q.base)     /* if Q exist.  */
                free(Q.base);   /* free Q.base addresses space. */
        Q.base = NULL;  /* Q.base doesn't point to any address. */
        Q.front = Q.rear = 0;
}

/* let queue Q empty.   */
void ClearQueue(SqQueue &Q)
{
        Q.front = Q.rear = 0;
}

/* if queue Q is empty, return TRUE; otherwise return FALSE.    */
Status QueueEmpty(SqQueue Q)
{
       if (Q.front == Q.rear)   /* the Q is empty.      */
               return TRUE;
       else
               return FALSE;
}

/* if queue is not empty, return front element at e, and return OK;
 * otherwise return ERROR.
 */
Status GetHead(SqQueue Q, QElemType &e)
{
        if (Q.front == Q.rear)
                return ERROR;
        e = Q.base[Q.front];    /* assign the front element to e;*/              
        return OK;
}

/* the inserted e is the new tail element of queue q.   */
Status EnQueue(SqQueue &Q, QElemType &e)
{
       if ((Q.rear + 1) % MAX_QSIZE == Q.front) /* queue is full.       */
               return ERROR;
       Q.base[Q.rear] = e;      /* put e as the tail element.   */
       Q.rear = (Q.rear + 1) % MAX_QSIZE;       /* the rear element plus one 
                                                 * then mod MAX_QSIZE.
                                                 */
       return OK;
}

/* return the length of queue Q.        */
int QueueLength(SqQueue Q)
{
         return (Q.rear - Q.front + MAX_QSIZE) % MAX_QSIZE;
}

/* if the queue Q is not empty, delete the front element of Q.
 * return at e and return OK; otherwise return ERROR.
 */
Status DeQueue(SqQueue &Q, QElemType &e)
{
        if (Q.front == Q.rear)  /* Q is empty.  */
                return ERROR;
        e = Q.base[Q.front];    /* assign e the front element.        */
        Q.front = (Q.front + 1) % MAX_QSIZE;    /* modify the front pointer. */
        return OK;
}

/* start from the front to the rear, call visit() to visit each element.     */
void QueueTraverse(SqQueue Q, void(* visit)(QElemType))
{
       int i = Q.front;         /* i is set to point to the front element 
                                 * initially.
                                 */
       while (i != Q.rear) {    /* while i point to the element of Q.   */
                visit(Q.base[i]);       /* call visit() to the element that
                                         * point by i.
                                         */
                i = (i + 1) % MAX_QSIZE;        /* i point to the next element.
                                                 */
       }
       
       printf("\n");
}
