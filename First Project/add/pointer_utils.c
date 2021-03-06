#include <stdio.h>

const int MAX=3;

void pointer_method()
{
    first_pointer_method();
    second_pointer_method();
    third_pointer_method();
    fourth_pointer_method();
    fifth_pointer_method();
    sixth_pointer_method();
    seventh_pointer_method();
    eighth_pointer_method();
    ninth_pointer_method();
}

void first_pointer_method()
{
    printf("\n");
    int var1;
    char var2[10];
    printf("Variant 1 value is %p\n",&var1);
    printf("Variant 2 value is %p\n",&var2);
}

void second_pointer_method()
{
    printf("\n");
    int var =20;
    int *ip;
    ip =&var;
    printf("Variable address is %p\n",&var);
    printf("Store address is %p\n",ip);
    printf("Variable value is %d\n",*ip);
}

void third_pointer_method()
{
    printf("\n");
    int *ip =NULL;
    printf("NULL address is %p\n",ip);
}

void fourth_pointer_method()
{
    printf("\n");
    int var[]= {1,2,3};
    int *ptr;
    ptr=var;
    for (int i=0; i<3; i++)
    {
        printf("Array[%d] address is %p\n",i,ptr);
        printf("Array[%d] value is %d\n",i,*ptr);
        ptr++;
    }
}

void fifth_pointer_method()
{
    printf("\n");
    int var[]= {1,2,3};
    int *ptr;
    ptr=&var[2];
    for (int i=2; i>=0; i--)
    {
        printf("Array[%d] address is %p\n",i,ptr);
        printf("Array[%d] value is %d\n",i,*ptr);
        ptr--;
    }
}

void sixth_pointer_method()
{
    printf("\n");
    int var[]= {1,2,3};
    int *ptr;
    int i=0;
    ptr=var;
    while(ptr<=&var[2])
    {
        printf("Array[%d] address is %p\n",i,ptr);
        printf("Array[%d] value is %d\n",i,*ptr);
        i++;
        ptr++;
    }
}

void seventh_pointer_method()
{
    printf("\n");
    int var[]= {1,2,3};
    int i;
    for(i=0; i<MAX; i++)
    {
        printf("Array[%d] value is %d\n",i,var[i]);
    }
}

void eighth_pointer_method()
{
    printf("\n");
    int var[]= {1,2,3};
    int i,*ptr[MAX];
    for(i=0; i<MAX; i++)
    {
        ptr[i]=&var[i];
        printf("Array[%d] value is %d\n",i,*ptr[i]);
    }
}


void ninth_pointer_method()
{
    const char *names[]=
    {
        "Jack Ge",
        "Lucky Long",
        "Nick Gen"
    };

    printf("\n");
    int i;
    for(i=0; i<MAX; i++)
    {
        printf("Names[%d] value is %s\n",i,names[i]);
    }
}

