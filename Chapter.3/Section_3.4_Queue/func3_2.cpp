/* func3_2.cpp,
 *      
 * Gerry Qingwei Zhang <qzhang.canada@gmail.com>
 * 
 * main function of link queue, called by main3_2.cpp and main3_3.cpp. 
 *
 * date: 2013-06-10
 */

int main()
{
        int i;
        QElemType d;    /* the element that deleted.    */
        LinkQueue q;    /* the queue q that created.    */
        
        /* a empty queue is created, if fail exits.     */
        InitQueue(q);   
        printf("a empty queue is created.\n");
        printf("am I a empty queue? %d, (1: YES, 2:NO)\n", QueueEmpty(q));
        printf("Length of queue: %d.\n", QueueLength(q));

        /* add three element at queue.  */
        EnQueue(q, -5);
        EnQueue(q, 5);
        EnQueue(q, 10);

        printf("after add three elements, the length is %d.\n", QueueEmpty(q));
        printf("am I a empty queue? %d, (1: YES, 2:NO)\n", QueueEmpty(q));
        printf("The element of queue are:\t");
        QueueTraverse(q, print);        /* call print() to each element in 
                                         * queue q.
                                         */

        /* set the front element to d.  */
        i = GetHead(q, d);       
        if (i == OK) 
                printf("The new front element is %d.\n", d);

        /* delete the front element, and assign its value to d. */
        DeQueue(q, d);
        printf("delete the front element %d.\n", d);

        /* set front element of q to d. */
        i = GetHead(q, d);
        if (i == OK)    /* queue q is not empty.        */
                printf("The new front element is %d.\n", d);

        /* clear queue q, make it as empty.     */
        ClearQueue(q);
        printf("after clear queue, q.front->data  = %d.", q.front->data);
        printf("q.rear = %d, q.front->next = %d\n", q.rear->data, q.front->next);

        /* destroy queue q.     */
        DestroyQueue(q);
        printf("after destroy queue, q.front = %u, q.rear = %u.\n", \
                        q.front, q.rear);

        return 0;
}
