#include <stdio.h>

#define QTY_1 8
#define QTY_2 12

int filling(int a, int b, int qty, int *array);
int output(int qty, int *array);

int main(void)
{
 int a,b,array_1[QTY_1],array_2[QTY_2];
 printf("Enter a and b: ");
 scanf("%d %d", &a,&b);
 filling(a,b,QTY_1,array_1);
 filling(a,b,QTY_2,array_2);
 output(QTY_1,array_1);
 output(QTY_2,array_2);
 fflush(stdin);
 getchar();
 return 0;
}

int filling(int a, int b, int qty, int *array)
{
 int i;
 for (i = 1; i <=qty; i++)
 {
  array[i-1]=a*i+b;
 }
}

int output(int qty, int *array)
{
 int i;
 for (i = 1; i <=qty; i++)
 {
  array[i-1]=i;
 }
}

