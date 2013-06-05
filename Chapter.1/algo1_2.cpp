#include "c1.h"
#include <sys/timeb.h>

int main()
{
        timeb t1, t2;
        long t; 
        double x, sum = 1, sum1;
        int i, j, n;
        printf("Please input x and n:\n");
        scanf("%fl%d", &x, &n);
        
        /*      acquire current time    */
        ftime(&t1);
        for (i = 1; i <= n; i++) {
                sum1 = 1;
                for (j = 1; j <= i; j++) {
                        sum1 = sum1 * (-1.0 / x);
                }
                sum += sum1;
        }
        ftime(&t2);
        t = (t2.time - t1.time) * 1000 + (t2.millitm - t1.millitm);
        printf("sum = %lf, it takes %ld milliseconds.\n", sum ,t);
        
}
