#include <stdio.h>

#define QTY_1 8
#define QTY_2 12

long int sum(long int x,long int y,long int *z);

int main(void)
{
 int a,b;
 printf("Enter a and b: ");
 scanf("%d %d", &a,&b);
 filling(a,b,QTY_1);
 filling(a,b,QTY_2);
 output(
 fflush(stdin);
 getchar();
 return 0;
}

long int sum(long int x,long int y,long int *z)//��������
{
 int i,t1=1,t2=1,xs=1,ys=1;//����������� ����������
 long int xx[22],yy[22],zz[22],chk;
 long int w,v,xt,yt;
 if (x<0)//���������� ������
  xs=-1;
 if (y<0)
  ys=-1;
 for (i = 0; i <=20 ; i++)//���������� �������� ������
 {
  xx[i]=0;
  yy[i]=0;
  zz[i]=0;
 }
 if ((xs*ys)==1)//����� ������ �����
 {
  chk=0;//�������� ���������� � ��������
  subtract(LIMIT,abs(x),&chk);
  if (chk<abs(y))
  {
   t1=0 ;
  }
  for (i = 1; i <= 20; i++)//�������� ����� �� �������
  {
   xx[i]=abs(x%10);
   x=x/10;
   yy[i]=abs(y%10);
   y=y/10;
  }
  for (i = 1; i <= 20; i++)//���������� ���������� � �������
  {
   zz[i]=xx[i]+yy[i]+zz[i];
   if (zz[i]>=5)//�������� ������ �� ������� ���������
   {
	zz[i]=zz[i]-5;
	zz[i+1]++;
   }
  }
  for (i = 1; i <= 20; i++)//������� �� ������� � �����
   *z=*z+zz[i]*pow(10,i-1);
  if ((xs<0)&&(ys<0))//������������� �����
   *z=*z*(-1);
 }
 else//����� ������ ������
 {
  xt=x;
  yt=y;
  if (abs(x)>=abs(y))//������ ������ �� ������
  {
   x=abs(x);
   y=abs(y);
   for (i = 1; i <= 20; i++)//�������� ����� �� �������
   {
	xx[i]=x%10;
	x=x/10;
	yy[i]=y%10;
	y=y/10;
   }
   for (i = 1; i <= 20; i++)//���������� ���������� � �������
   {
	zz[i]=zz[i]+xx[i]-yy[i];
	if (zz[i]<0)//�������� �������� ����� � ���� �������
	{
	 zz[i]=zz[i]+5;
	 zz[i+1]--;
	}
   }
   for (i = 1; i <= 20; i++)//������� �� ������� � �����
	*z=*z+zz[i]*pow(10,i-1);
  }
  else//������ ������ �� ������
  {
   x=abs(x);
   y=abs(y);
   for (i = 1; i <= 20; i++)//�������� ����� �� �������
   {
	xx[i]=x%10;
	x=x/10;
	yy[i]=y%10;
	y=y/10;
   }
   for (i = 1; i <= 20; i++)//���������� ���������� � �������
   {
	zz[i]=zz[i]+yy[i]-xx[i];
	if (zz[i]<0)//�������� �������� ����� � ���� �������
	{
	 zz[i]=zz[i]+5;
	 zz[i+1]--;
	}
   }
   for (i = 1; i <= 20; i++)//������� �� ������� � �����
	*z=*z+zz[i]*pow(10,i-1);
   *z=*z*(-1);//������������� �����
  }
  if ((xt<0)&&(yt>=0))
   *z=*z*(-1);//������������� �����
 }
 return t1*t2;//������� ������
}
