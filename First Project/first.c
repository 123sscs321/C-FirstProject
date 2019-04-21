////////#include <stdio.h>
////////int a(){
////////    char str[30] = {0};
////////    char c;
////////    int i;
////////    for(c=65,i=0; c<=90; c++,i++){
////////        str[i] = c;
////////    }
////////    printf("%s\n", str);
////////
////////    return 0;
////////}
////////
////////
////////#include "stdio.h"
////////#include "conio.h"
////////main()
////////{
////////    int i,j,k;
////////    printf("\n");
////////    for(i=1; i<5; i++) /*以下为三重循环*/
////////        for(j=1; j<5; j++)
////////            for (k=1; k<5; k++)
////////            {
////////                if (i!=k&&i!=j&&j!=k) /*确保 i、j、k 三位互不相同*/
////////                    printf("%d,%d,%d\n",i,j,k);
////////            }
////////    getch();
////////}
////////
//////
//////
//////#include <stdio.h>
//////int main()
//////{
//////    int i, a[10];
//////    for(i = 0; i <10; ++i)
//////    {
//////        a[i] = i;
//////        printf("%d\t",a[i]);
//////    }
//////    return 0;
//////}
//////
////
////
////#include <stdio.h>
////int input(int a[])
////{
////    int i, value;
////    i = 0;
////    while(scanf("%d", &value) != EOF && value)
////    {
////        a[i++] = value;
////    }
////    return i;
////}
////void output(int a[], int n)
////{
////    printf("%d", a[0]);
////    int i;
////    for(i = 1; i < n; i++)
////        printf(" %d", a[i]);
////}
////int merge(int m, int a[], int n, int b[], int c[])
////{
////    int i, j, k, t, r, temp[200];
////    for(r = 0; r < m; r++)
////        temp[r] = a[r];
////    for(j = 0; j < n; j++)
////        temp[m + j] = b[j];
////    for(k = 0; k < m + n; k++)
////    {
////        for(t = k + 1; t < m + n; t++)
////        {
////            if(temp[t] < temp[k])
////            {
////                int d = temp[k];
////                temp[k] = temp[t];
////                temp[t] = d;
////            }
////        }
////    }
////    int s = 0;
////    for(i = 0; i < m + n - 1; i++)
////    {
////        if(temp[i] < temp[i + 1])
////            c[s++] = temp[i];
////    }
////    c[s++] = temp[m + n - 1];
////    return s;
////}
////
////int main()
////{
////    int A[100], B[100], C[200];
////    int m, n, k;
////    m = input(A);
////    n = input(B);
////    k = merge(m, A, n, B, C);
////    output(C, k);
////    return 0;
////}
////
//
//#include<stdlib.h>
//#include<stdio.h>
//#include<string.h>
//void sortA1(int a[], int length)
//{
//
//    int i, j, temp;
//
//    for(i = 0; i < length; ++i)
//    {
//
//        for(j = i + 1; j < length; ++j)
//        {
//
//            if(a[j] < a[i])     //如果后一个元素小于前一个元素则交换
//            {
//
//                temp = a[i];
//
//                a[i] = a[j];
//
//                a[j] = temp;
//
//            }
//
//        }
//    }
//
//}
//
//void printA1(int a[], int length)
//{
//
//    int i;
//
//    for(i = 0; i < length; ++i)
//    {
//
//        printf("%d,", a[i]);
//    }
//
//    printf("\n");
//
//}
//
//void sortA2(int a[], int length)
//{
//    int i, j, temp;
//
//    for(i = 0; i < length; ++i)
//    {
//
//        for(j = length - 1; j > i; --j)
//        {
//            if(a[j] > a[j - 1])
//            {
//
//                temp = a[j];
//
//                a[j] = a[j - 1];
//
//                a[j - 1] = temp;
//            }
//        }
//
//    }
//
//}
//
//void main()
//{
//    int length = 0;
//
//    int a[] = {12, 43, 8, 50, 100, 52,0};
//
//    length = sizeof(a) / sizeof(a[0]);
//
//    printf("排序前\n");
//
//    printA1(a, length);
//
//    sortA1(a, length);
//
//    printf("选择排序后\n");
//
//    printA1(a, length);
//
//    sortA2(a, length);
//
//    printf("冒泡排序后\n");
//
//    printA1(a, length);
//
//    system("pause");
//}
//


//#include <stdlib.h>
//
//int main()
//{
//    srand(2);
//    for (int i=0; i<10; i++)
//    {
//        printf("%d ", rand()%10);
//    }
//    return 0;
//}
