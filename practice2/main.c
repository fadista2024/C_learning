#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//��1000���ڵ�����ȡ����,����ʮ��Ϊһ�д�ӡ���
//int main(){
//    int isPrime,cnt;
//    for(int i=2;i<=1000;i++){
//        isPrime=1;
//        for(int j=2;j<=sqrt(i);j++){
//            if(i%j==0){
//                isPrime=0;
//                break;
//            }
//        }
//        if(isPrime){
//            printf("%d ",i);
//            cnt++;
//            if(cnt%10==0){
//            printf("\n");
//            }
//        }
//    }
//    return 0;
//}
//��1000�����k��d����ȡ����
//int main(){
//    int i=2,times=0,n,d,k;
//    scanf("%d%d",&k,&d);
//    while(i++<1000){
//        n=i;times=0;
//        while(n>0){
//            int low=n%10;
//            n/=10;
//            if(low==d)times++;
//        }
//        if(times==k)printf("%d ",i);
//    }
//    return 0;
//}
//Ŀ�����
//int main()
//{
//    int n,d,k,j;
//    int i=2,times=0,isPrime=1,m=2;
//    scanf("%d %d",&k,&d);
//    while(i<1000){
//        n=i;times=0;
//        while(n>0){
//            int low=n%10;
//            n/=10;
//            if(low==d)times++;
//        }
//        if(times==k){
//            m=i;
//        }
//        else{
//            continue;
//        }
//        for(j=2;j<=sqrt(m);j++){
//            if(m%j==0){
//                isPrime=0;
//                break;
//            }
//        }
//        if(isPrime){
//            printf("%d ",m);
//        }
//        i++;
//    }
//    return 0;
//}




//int main()
//{
//    int k,d;
//    scanf("%d%d",&k,&d);
//    for(int i=2;i<=1000;i++){//��һ���֣��ҵ���������
//        int is_Prime=1;
//        for(int j=2;j<=sqrt(i);j++){
//            if(i%j==0) is_Prime=0;
//               }
//            if(is_Prime==1){
//                int n=i;//�ڶ����֣��ж��ҵ������ǲ�������Ҫ��
//                int flag=0;
//                while (n>0){
//                    if (n%10==d){
//                        flag++;
//                    }
//                n/=10;
//                }
//                if(flag==k)printf("%d ",i);//����ж�
//               }
//    }
//    return 0;
//}
////Ŀ�����
//int main()
//{
//    int d,k;
//    scanf("%d%d",&k,&d);
//    int i=2;
//    int isPrime;
//    for(;i<=1000;i++){
//        isPrime=1;
//        for(int j=2;j<=sqrt(i);j++){
//            if(i%j==0){
//                isPrime=0;
//                break;
//            }
//        }
////        if(isPrime){
////            printf("%d ",i);
////        }
//    }
//    int n;
//    int times=0;
//    i=2;
//    while(i++<1000){
//        n=i;times=0;
//        while(n>0){
//            int low=n%10;
//            n/=10;
//            if(low==d){
//                times ++;
//            }
//        }
//        if(times==k&&isPrime==1){
//            printf("%d ",i);
//        }
//        else{
//            printf("error ");
//        }
//    }
//    return 0;
//}
//�еĴ���
//#define MaxLen 1000
//int main()
//{
//    int isPrime[MaxLen]={1,1};
//    int k,d,i,j,l,c;
//    scanf("%d%d",&k,&d);
//    for(i=2;i<MaxLen;i++)
//        if(!isPrime[i])
//        {
//            for(j=i*i;j<MaxLen;j+=i)
//                isPrime[j]=1;
//                l=i;
//                c=0;
//                while(l)
//                {
//                    if(l%10==d)
//                        c++;
//                    l/=10;
//                }
//                if(c>k)
//                    printf("%d ",i);
//        }
//        return 0;
//}












//int A,B,C;
//double f(double x){//����Ŀ�꺯��
//    return A*x*x*x-B*exp(-C*x);
//}
//double root(double left, double right){
//    double mid = (left + right) / 2;
//    if(fabs(left - right) < 1e-6)
//    {
//        return mid;//�㹻�ƽ���ֱ�����
//    }
//    if(f(left) * f(mid) > 0)
//    {
//        left = mid;//������������
//    }
//    else
//    {
//        right = mid;
//    }
//    return root(left, right);//�ݹ飬�ڸ�С������������
//}
//
//int main()
//{
//    scanf("%d %d %d",&A,&B,&C);//���ﲻ���ظ�����ABC,�������벻��
//    double r = root(0,1000);//�ݹ麯������
//    printf("root = %0.3f\n",r);
//    return 0;
//}













////�������Ϊ1���ο�����
//int main()
//{
//    int n=0,a=1,b=1,c=1;
//    scanf("%d",&n);
//    for(a=1;a<=n-1;a++){//��һ��������ο����εĵ�1�У�������ո������*
//        printf(" ");
//    }
//    printf("*\n");//ע�⻻��
//    int i=1;
//    for(i=1;i<n;i++){//�ڶ���������ο����εĵ�2�е���n�У�ȷ��ѭ��n-1��
//        for(b=1;b<=n-(i+1);b++){//ȷ��ÿһ�еĿո�����
//            printf(" ");
//        }
//        printf("*");
//        for(c=1;c<=2*i-1;c++){//ȷ��ÿһ�е�*
//            printf(" ");
//        }
//        printf("*\n");
//    }
//    for(i=1;i<n-1;i++){//������������ο����εĵ�n+1�е���2n-2�У�ȷ��ѭ��n-2��
//        for(b=1;b<=i;b++){
//            printf(" ");
//        }
//        printf("*");
//        for(int c=1;c<=2*(n-i-1)-1;c++){
//            printf(" ");
//        }
//        printf("*\n");
//    }
//    for(a=1;a<=n-1;a++){//���Ĳ�������ո��*
//        printf(" ");
//    }
//    printf("*");
//    return 0;
//}

//���n��k����ο�����
int main()
{
    int n=0,k=0,i=1,a=1,b=1,c=1;
    //i���б꣬a�Ǵ洢ѭ���ո�����ı�����b,c�ֱ��Ǵ洢ѭ���ո��*�����ı���
    scanf("%d%d",&n,&k);
    for(a=1;a<=k;a++){//��һ��������ο����εĵ�1��k��
        for(b=1;b<=n-a;b++){//ȷ��ÿһ�еĿո�����
            printf(" ");
        }
        for(c=1;c<=2*a-1;c++){//ȷ��ÿһ�е�*
            printf("*");
        }
        printf("\n");//
    }
    for(i=1;i<=n-k;i++){//�ڶ���������ο����εĵ�n-k�е���n�У�ȷ��ѭ��n-k��
        for(b=1;b<=n-k-i;b++){
            printf(" ");
        }
        for(c=1;c<=k;c++){
            printf("*");
        }
        for(b=1;b<=2*i-1;b++){
            printf(" ");
        }
        for(c=1;c<=k;c++){
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=n-k-1;i++){//������������ο����εĵ�n+1�е���2n-k-1�У�ȷ��ѭ��n-k-1��
        for(b=1;b<=i;b++){
            printf(" ");
        }
        for(c=1;c<=k;c++){
            printf("*");
        }
        for(b=1;b<=2*(n-k-i)-1;b++){
            printf(" ");
        }
        for(c=1;c<=k;c++){
            printf("*");
        }
        printf("\n");
    }
    for(a=1;a<=k;a++){//���Ĳ�������ο����εĵ�2n-k�е���2n-1�У�ѭ��k��
        for(b=1;b<=n-k+a-1;b++){
            printf(" ");
        }
        for(c=1;c<=2*(k-a+1)-1;c++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}



































//��ӡʵ������
//void main(){
//int i, j, k, n;
//printf("������������n�� ");
//scanf("%d", &n);
//while(n!=0) //����ѭ����ʹ������Է������롣��n=0ʱ���������롣��
//{
//for(i=1; i<=n; i++)
//{
//for(j=1; j<=n-i; j++) //���ÿո���������ΪҪ�����Σ�����Ҫ����ո�
//{
//printf(" ");
//}
//for(k=1; k<=2*i-1; k++) //*�ŵ����
//{
//printf("*");
//}
//printf("\n"); //iÿ��1����ʾ��һ�У�����ÿ�н�����Ҫ����
//}
//for(i=1; i<=n; i++) //��γ����������ǵ����
//{
//for(j=1; j<=i; j++) //��i=1ʱ���������ǵĵ�1�У����1���ո�i=2��ʱ���2����
//{
//printf(" ");
//}
//for(k=2*(n-i)-1; k>0; k--) //��Ϊ�������ǣ�ÿ�е�*����һ�е��٣����ԣ�k�ǵݼ���
//{
//printf("*");
//}
//printf("\n");
//}
//printf("������������n�� "); //���һ��������������ٴ�Ҫ������n�������Ϳ���ʵ��ѭ���ˡ�
//scanf("%d",&n);
//}
//}

























