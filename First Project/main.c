#include <stdlib.h>

void main()
{
    srand(2);
    for (int i=0; i<10; i++)
    {
        printf("%d ", rand()%10);
    }
}
