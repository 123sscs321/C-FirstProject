#include <stdio.h>

void enum_method()
{
    printf("\n");
    enum day {MON,TUE,WED,THUR,FRI,STA,SUN} first=MON;
    int template =10;
    printf("%d \n",first);
    first=(enum day)template;
    printf("%d \n",first);
    printf("enumerate \n");

}
