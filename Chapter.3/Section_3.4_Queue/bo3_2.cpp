/* bo3_2.cpp,
 *      
 * Gerry Qingwei Zhang <qzhang.canada@gmail.com>
 * 
 * Nine basic operation of link queue.
 *
 * date: 2013-06-09
 */


/* To create a empty queue Q.   */
void InitQueue(LinkQueue &Q)    /* the front node is generated. */
{
        Q.front = Q.rear = (QueuePtr)malloc(sizeof(QNode));
        if (!Q.front)
                exit(OVERFLOW);
        Q.front->next = 0;      /* the front node's next is empty.      */
}

/*Destroy a Queue.        */
void DestroyQueue(LinkQueue &Q)
{
        while (Q.front) {       /* Q.front 不为空。     */
                Q.rear = Q.front->next; /* Q.rear 指向Q.front的下一个结点。     
                                         */
                free(Q.front);  
                Q.front = Q.rear;       /* Q.fron 指向Q.front的下一个结点。     
                                         */
        }
}

/* put Queue Q as a empty queue.      */
void ClearQueue(LinkQueue &Q)
{
      DestroyQueue(Q);  /* destroy queue Q.     */
      InitQueue(Q);     /* re-initizlied a new queue Q. */
}

/* if queue Q is empty, then return TRUE; otherwise return FALSE.       */
Status QueueEmpty(LinkQueue Q)
{
       if (Q.front->next == NULL) 
               return TRUE;
       else
               return FALSE;
}

/* get queue length.    */
int QueueLength(LinkQueue Q)
{
        int i = 0;      /* i is the counter, set initial value as 0.    */
        QueuePtr p = Q.front;   /* p is point to the front.     */
        while (Q.rear != p) {   /* p is no the tail.            */
                i++;            /* count increased by one.      */
                p = p->next;    /* p point to the next node.    */
        }
        return i;
}


/* if the queue Q is not empty, return the head element of Q at e, and return 
 * OK; otherwise return ERROR.
 */
Status GetHead(LinkQueue Q, QElemType &e)
{
        QueuePtr p;
        if (Q.front == Q.rear)  /* queue is empty.      */
                return ERROR;
        p = Q.front->next;      /* p is point to the head of the queue. */
        e = p->data;            /* put the head element to e.   */
}

/* insert e as the new tail element of queue Q. */
void EnQueue(LinkQueue &Q, QElemType e)
{
        QueuePtr p;
        p = (QueuePtr)malloc(sizeof(QNode));    /* create a new node.    */
        if (!p)
                exit(OVERFLOW);
        p->data = e;    /* assign e to the new node.    */
        p->next = NULL; /* new node's field of next is empty.   */
        Q.rear->next = p;       /* the original rear point to the new node.     
                                 */
        Q.rear = p;     /* the tail pointer points to the new node.     */
}

/* if queue Q is not empty delte the front element, and return its value 
 * with e and return OK; otherwise return ERROR.
 */
Status DeQueue(LinkQueue &Q, QElemType &e)
{
        QueuePtr p;
        if (Q.front == Q.rear)  /* queue Q is empty.    */
                return ERROR;
        p = Q.front->next;      /* p point to the front node.   */
        e = p->data;    /* put the element value to e.  */
        Q.front->next = p->next;        /* the front node point to the next 
                                         * node.
                                         */
        if (Q.rear == p)        /* if delete the tail node.  */
                Q.rear = Q.front;      /* to modify the tail pointer to the 
                                         * front node, i.e., empty queue.
                                         */
        free(p);        /* free the front node. */
        return OK;
}

/* fron the front to the tail, call visit() to each element of Q.       */
void QueueTraverse(LinkQueue Q, void(*visit)(QElemType))
{
       QueuePtr p = Q.front->next;      /* p point to the front node.   */ 
       while (p) {      /* p point to node.     */
                visit(p->data); /* call visit() to the node that p points to.   
                                 */
                p = p->next;    /* p point to next node.        */
       }

       printf("\n");
}
