/* c3_3.h,
 *      
 * Gerry Qingwei Zhang <qzhang.canada@gmail.com>
 * 
 * Sequantial Queue storage structure. 
 *
 * date: 2013-06-11
 */

#define MAX_QSIZE 5     /* The max queue length + 1.    */

struct SqQueue {
        QElemType *base;/* the initialized dynamic allocated 
                         * storage space.  
                         */
        int front;      /* front pointer, if queue not empty, it points 
                         * to the head elements.
                         */
        int rear;       /* read pointer, if quque not empty, it points
                         * to the position where one after the rear
                         * elements.
                         */
};


