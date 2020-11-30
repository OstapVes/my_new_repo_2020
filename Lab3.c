#include <stdio.h>
#define A 9

int main()
{
    int Q[A][A];
    int i, j, k, d, m = A * A;
    for (k = 0; k < A / 2;k++) 
    {
        d = A - 1 - k;
        for (j = k;j < d;j++, m--)
            Q[k][j] = m;
        for (i = k;i < d;i++, m--)
            Q[i][d] = m;
        for (j = d;j > k;j--, m--)
            Q[d][j] = m;
        for (i = d;i > k;i--, m--)
            Q[i][k] = m;
    }

    if (A % 2)
        Q[A / 2][A / 2] = m;


    for (i = 0;i < A;i++)
    {
        for (j = 0;j < A;j++) printf("%6d", Q[i][j]);
        printf("\n");
    }


    return 0;
}

