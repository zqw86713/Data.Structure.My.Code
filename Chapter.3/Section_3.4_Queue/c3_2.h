/* c3_2.h
 *
 * Gerry Qingwei Zhang <qzhang.canada@gmail.com>
 *
 * 单链队列－队列的链式存储结构。
 * 
 * date: 2013-06-09
 */

typedef struct QNode 
{
        QElemType data;
        QNode *next;
} *QueuePtr;

struct LinkQueue
{
        QueuePtr front, rear;   /* 队头，队尾指针。     */
};
 
