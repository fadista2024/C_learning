#include <stdio.h>
#include "util.h"

//int str_len_recursive(char s[],int start){//���캯��
//    if(s[start]=='\0'){
//        return 0;
//    }
//    return str_len_recursive(s,start+1)+1;//�ݹ鷵��
//}
//
//int main()
//{
//    char chs[20];
//    gets(chs);//�����ַ���
//    printf("%d",str_len_recursive(chs,0));//�ݹ����
//    return 0;
//}

//1.8��18�⣬д����
//#include <stdio.h>
//#include <stdlib.h>
//int temp[1001][1001];
//int main(int argc, char *argv[])
//{
//  int n,x,y,beginx,beginy,endx,endy;
//  int i,j;
//
//  scanf("%d",&n);
//  for(i=0 ; i<n ; i++)
//  {
//      for(j=0;j<n;j++)
//      {
//        scanf("%d",&temp[i][j]);
//      }
//  }
//  for(i=0;i<n;i++)
//  {
//    for(j=0;j<n;j++)
//    {
//      if(temp[i][j]==0)
//      {
//          beginx = j;
//          beginy = i;
//          goto l;
//      }
//    }
//  }
//
//  l:for(i=n-1;i>=0;i--)
//  {
//    for(j=n-1;j>=0;j--)
//    {
//      if(temp[i][j]==0)
//      {
//          endx = j;
//          endy = i;
//          goto m;
//      }
//    }
//  }
//  m:x = endx-beginx+1;
//  y = endy-beginy+1;
//  printf("%d\n",x*y-(2*x+2*y-4));
//  system("PAUSE");
//  return 0;
//}


int main()
{
	int line,x,y,m=1,n,i,j;
	//��������Ϊline,��2n-1�У���x,y��Ϊ�±꣬m����������Ԫ�ظ�ֵ,i,j����Ϊѭ������
	int a[10][10]={0};
	scanf("%d",&n);
	for(line=1;line<=n;line++)
	{
		for(x=0,y=line-1;y>=0;x++,y--)//��֪line=x+y+1��x,y�䵱ѭ����������y������ѭ������
		{
			if(line%2==0)//����ͨ������x��y��λ��������lineΪ��������ż��������������˳��
			{
				a[x][y]=m;
				m++;
			}
			else
			{
				a[y][x]=m;
				m++;
			}
		}
	}
	for(line=n+1;line<2*n;line++)//ԭ��ͬ�ϣ�ֻ��Ҫע��nҲ����ѭ��
	{
		for(x=n-1,y=line-1-x;y<=n-1;x--,y++)
		{
			if(line%2==0)
			{
				a[y][x]=m;
				m++;
			}
			else
			{
				a[x][y]=m;
				m++;
			}
		}
	}
	for(i=0;i<n;i++)//�涨�����ά���������ʽ
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
