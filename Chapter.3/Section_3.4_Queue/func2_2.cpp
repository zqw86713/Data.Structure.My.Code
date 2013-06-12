Status equal(ElemType c1, ElemType c2)
{
        if (c1 == c2)
                return TRUE;
        else
                return FALSE; 
}

int comp(ElemType a, ElemType b)
{
        if (a < b)
                return -1;
        else if (a == b)
                return 0;
        else 
                return 1;
}

void print(ElemType c)
{
        printf("%d", c);
}

void print1(ElemType &c)
{
        printf("%d", c);
}

void print2(ElemType &c)
{
        printf("%c", c);
}
