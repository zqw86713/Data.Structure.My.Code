#include"c1.h"
typedef int ElemType;
#include"c1_1.h"
#include"bo1_1.cpp"
#include"func1_1.cpp"

int main()
{
        Triplet T;
        ElemType m;
        Status i;
        i = InitTriplet(T, 5, 7, 9);
        printf("After initialization, i = %d(1: Sucess).\n", i);
        printf("The value of T:\t");
        PrintT(T);

        i = Get(T, 2, m);

        if (i == OK) {
                printf("The second element of T:\t");
                PrintE(m);
        }

        i = Put(T, 2, 6);
        if (i == OK) {
                printf("After change the second element of T to 6, T is:\t");
                PrintT(T);
        }

        i = IsAscending(T);
        printf("After test of increasement, i = %d (0: No 1:Yes)\n", i);
        i = IsDescending(T);
        printf("After test of decresement, i = %d (0: No 1:Yes)\n", i);

        if ((i = Max(T,m)) == OK) {
                printf("the Maximum is: \n");
                PrintE(m);
        } else {
                printf("maximum not found!\n");
        }

        if ((i = Min(T,m)) == OK) {
                printf("the Minumun is: \n");
                PrintE(m);
        } else {
                printf("minimum not found!\n");
        }

        DestroyTriplet(T);
        printf("destroy T, T = %u\n", T);
                
        return 0;
}
