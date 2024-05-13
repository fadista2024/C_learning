#include <stdio.h>
#include "util.h"

//int str_len_recursive(char s[],int start){//构造函数
//    if(s[start]=='\0'){
//        return 0;
//    }
//    return str_len_recursive(s,start+1)+1;//递归返回
//}
//
//int main()
//{
//    char chs[20];
//    gets(chs);//输入字符串
//    printf("%d",str_len_recursive(chs,0));//递归调用
//    return 0;
//}

//1.8第18题，写错了
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
	//将行数记为line,共2n-1行，用x,y作为下标，m用来给方阵元素赋值,i,j仅作为循环变量
	int a[10][10]={0};
	scanf("%d",&n);
	for(line=1;line<=n;line++)
	{
		for(x=0,y=line-1;y>=0;x++,y--)//易知line=x+y+1，x,y充当循环变量，用y来控制循环次数
		{
			if(line%2==0)//这里通过交换x和y的位置来根据line为奇数还是偶数控制数字增大顺序
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
	for(line=n+1;line<2*n;line++)//原理同上，只是要注意n也参与循环
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
	for(i=0;i<n;i++)//规定输出二维数组输出格式
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
