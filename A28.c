#include <stdio.h>
    void main()
    {
 int i, j, temp, m, b[50];
        scanf("%d", &m);
        for (i = 0; i < m; i++)
            scanf("%d", &b[i]);
 for (i = 0; i < m; i++) 
        {
            for (j = i + 1; j < m; j++)
            {
                if (b[i] > b[j]) 
                {
                    temp =  b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }
 for (i = 0; i < m; i++)
            printf("%d ", b[i]);
 }
