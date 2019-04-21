#include <stdio.h>
#include <string.h>

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
    char str1[]="http://www.caidu.com";
    char str2[]="http://www.baidu.com";
    //int result=strcmp(str1,str2);
    int result=strcmp_demo(str1,str2);
    printf("str1 - str2=%d\n",result);
    return 0;
}
