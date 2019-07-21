#include <stdio.h>
#include <string.h>
#include "enum_utils.h"

int strcmp_demo(char str0[],char str1[])
{
    int i,result;
    for (i=0; (result=str0[i]-str1[i])==0; i++)
    {
        if (str0[i]=='\0'||str1[i]=='\0')
        {
            break;
        }
    }
    printf("i=%d\n",i);
    return result;
}

int main()
{
    enum_method();
    return 0;
}
