#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
//int main
//{
//    int a=1000;
//    int b=-1000;
//    return 0;
//}
//int main()
//{
//union A
//{
//    short b;
//    char c[2];
//};
//    union A a;
//    a.b=0x1234;
//    printf("a.b=%x\n",a.b);
//    printf("a.c[0]=%x\n",a.c[0]);
//    printf("a.c[1]=%x\n",a.c[1]);
//    return 0;
//}
//int main()
//{
//    int n, i, j;
//    bool isPrime[1000001]={true};//初始化全部为true
//    printf("请输入一个正整数：");
//    scanf("%d",&n);
//    for(i=2;i<=n;i++){//标记所有非素数为false
//        if(isPrime[i]){//如果i是素数
//            for(j=i*2;j<=n;j+=i){//将i的倍数标记为非素数
//                isPrime[j]=false;
//            }
//        }
//    }
//    //输出所有素数
//    for(i=2;i<=n;i++){
//        if (isPrime[i]){//如果i是素数
//            printf("%d",i);
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int i,j,n;
//    int isPrime;
//    scanf("%d",&n);
//    for(i=2;i<=n;i++){//外层循环取数
//        isPrime=1;//假定全为素数，初始化全部为true
//        for(j=2;j<=sqrt(i);j++){//内层循环开始判断
//            if(i%j==0){//如果存在一个数能整除i，那么直接退出循环，看下一个数
//                isPrime = 0;//当为非素数时，变量为0，false
//                break;//判断完毕，跳出内层循环
//            }
//        }
//        if(isPrime){//退出后进行判断
//        printf("%d ",i);
//        }
//    }
//    return 0;
//}
#include "stdio.h"
#include "math.h"
int main()
{
    double x[4],y[4];
    for(int i=0;i<4;i++){//循环取数
        scanf("%lf%lf",&x[i],&y[i]);
    }
    double s=0.0;
    for(int ii=1; ii<4;ii++){
        s+=(x[ii-1]*y[ii]-x[ii]*y[ii-1]);
    }
    s+=x[3]*y[0]-x[0]*y[3];
    s=fabs(0.5*s);//套用求N边形的公式
    printf("%lf\n",s);
    return 0;
}
//for(int ii=1; ii<4;ii++){
//        s+=(x[ii-1]*y[ii]-x[ii]*y[ii-1]);
//    }
//    s+=x[3]*y[0]-x[0]*y[3];

 //  s=2*(x[0]*y[1]-x[1]*y[0]+x[2]*y[1]-x[1]*y[2]+x[2]*y[3]-x[3]*y[2]);























