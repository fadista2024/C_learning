#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//把1000以内的素数取出来,并以十个为一行打印输出
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
//把1000里包括k个d的数取出来
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
//目标程序
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
//    for(int i=2;i<=1000;i++){//第一部分，找到所有质数
//        int is_Prime=1;
//        for(int j=2;j<=sqrt(i);j++){
//            if(i%j==0) is_Prime=0;
//               }
//            if(is_Prime==1){
//                int n=i;//第二部分，判断找到的数是不是所需要的
//                int flag=0;
//                while (n>0){
//                    if (n%10==d){
//                        flag++;
//                    }
//                n/=10;
//                }
//                if(flag==k)printf("%d ",i);//最后判断
//               }
//    }
//    return 0;
//}
////目标代码
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
//佬的代码
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
//double f(double x){//构造目标函数
//    return A*x*x*x-B*exp(-C*x);
//}
//double root(double left, double right){
//    double mid = (left + right) / 2;
//    if(fabs(left - right) < 1e-6)
//    {
//        return mid;//足够逼近，直接输出
//    }
//    if(f(left) * f(mid) > 0)
//    {
//        left = mid;//缩减搜索区间
//    }
//    else
//    {
//        right = mid;
//    }
//    return root(left, right);//递归，在更小的区间上搜索
//}
//
//int main()
//{
//    scanf("%d %d %d",&A,&B,&C);//这里不能重复定义ABC,否则输入不了
//    double r = root(0,1000);//递归函数调用
//    printf("root = %0.3f\n",r);
//    return 0;
//}













////输出层数为1的镂空菱形
//int main()
//{
//    int n=0,a=1,b=1,c=1;
//    scanf("%d",&n);
//    for(a=1;a<=n-1;a++){//第一步，输出镂空菱形的第1行，先输出空格再输出*
//        printf(" ");
//    }
//    printf("*\n");//注意换行
//    int i=1;
//    for(i=1;i<n;i++){//第二步，输出镂空菱形的第2行到第n行，确定循环n-1次
//        for(b=1;b<=n-(i+1);b++){//确定每一行的空格数量
//            printf(" ");
//        }
//        printf("*");
//        for(c=1;c<=2*i-1;c++){//确定每一行的*
//            printf(" ");
//        }
//        printf("*\n");
//    }
//    for(i=1;i<n-1;i++){//第三步，输出镂空菱形的第n+1行到第2n-2行，确定循环n-2次
//        for(b=1;b<=i;b++){
//            printf(" ");
//        }
//        printf("*");
//        for(int c=1;c<=2*(n-i-1)-1;c++){
//            printf(" ");
//        }
//        printf("*\n");
//    }
//    for(a=1;a<=n-1;a++){//第四步，输出空格和*
//        printf(" ");
//    }
//    printf("*");
//    return 0;
//}

//输出n行k层的镂空菱形
int main()
{
    int n=0,k=0,i=1,a=1,b=1,c=1;
    //i是行标，a是存储循环空格次数的变量，b,c分别是存储循环空格和*次数的变量
    scanf("%d%d",&n,&k);
    for(a=1;a<=k;a++){//第一步，输出镂空菱形的第1到k行
        for(b=1;b<=n-a;b++){//确定每一行的空格数量
            printf(" ");
        }
        for(c=1;c<=2*a-1;c++){//确定每一行的*
            printf("*");
        }
        printf("\n");//
    }
    for(i=1;i<=n-k;i++){//第二步，输出镂空菱形的第n-k行到第n行，确定循环n-k次
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
    for(i=1;i<=n-k-1;i++){//第三步，输出镂空菱形的第n+1行到第2n-k-1行，确定循环n-k-1次
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
    for(a=1;a<=k;a++){//第四步，输出镂空菱形的第2n-k行到第2n-1行，循环k次
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



































//打印实心菱形
//void main(){
//int i, j, k, n;
//printf("请输入正整数n： ");
//scanf("%d", &n);
//while(n!=0) //设置循环，使程序可以反复输入。当n=0时，结束输入。。
//{
//for(i=1; i<=n; i++)
//{
//for(j=1; j<=n-i; j++) //设置空格的输出，因为要是棱形，所以要输出空格
//{
//printf(" ");
//}
//for(k=1; k<=2*i-1; k++) //*号的输出
//{
//printf("*");
//}
//printf("\n"); //i每加1，表示加一行，所以每行结束后要换行
//}
//for(i=1; i<=n; i++) //这段程序是下三角的输出
//{
//for(j=1; j<=i; j++) //当i=1时，即下三角的第1行，输出1个空格，i=2，时输出2个。
//{
//printf(" ");
//}
//for(k=2*(n-i)-1; k>0; k--) //因为是下三角，每行的*比上一行的少，所以，k是递减的
//{
//printf("*");
//}
//printf("\n");
//}
//printf("请输入正整数n： "); //完成一次完整的输出后，再次要求输入n，这样就可以实现循环了。
//scanf("%d",&n);
//}
//}

























