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
//    bool isPrime[1000001]={true};//��ʼ��ȫ��Ϊtrue
//    printf("������һ����������");
//    scanf("%d",&n);
//    for(i=2;i<=n;i++){//������з�����Ϊfalse
//        if(isPrime[i]){//���i������
//            for(j=i*2;j<=n;j+=i){//��i�ı������Ϊ������
//                isPrime[j]=false;
//            }
//        }
//    }
//    //�����������
//    for(i=2;i<=n;i++){
//        if (isPrime[i]){//���i������
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
//    for(i=2;i<=n;i++){//���ѭ��ȡ��
//        isPrime=1;//�ٶ�ȫΪ��������ʼ��ȫ��Ϊtrue
//        for(j=2;j<=sqrt(i);j++){//�ڲ�ѭ����ʼ�ж�
//            if(i%j==0){//�������һ����������i����ôֱ���˳�ѭ��������һ����
//                isPrime = 0;//��Ϊ������ʱ������Ϊ0��false
//                break;//�ж���ϣ������ڲ�ѭ��
//            }
//        }
//        if(isPrime){//�˳�������ж�
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
    for(int i=0;i<4;i++){//ѭ��ȡ��
        scanf("%lf%lf",&x[i],&y[i]);
    }
    double s=0.0;
    for(int ii=1; ii<4;ii++){
        s+=(x[ii-1]*y[ii]-x[ii]*y[ii-1]);
    }
    s+=x[3]*y[0]-x[0]*y[3];
    s=fabs(0.5*s);//������N���εĹ�ʽ
    printf("%lf\n",s);
    return 0;
}
//for(int ii=1; ii<4;ii++){
//        s+=(x[ii-1]*y[ii]-x[ii]*y[ii-1]);
//    }
//    s+=x[3]*y[0]-x[0]*y[3];

 //  s=2*(x[0]*y[1]-x[1]*y[0]+x[2]*y[1]-x[1]*y[2]+x[2]*y[3]-x[3]*y[2]);























