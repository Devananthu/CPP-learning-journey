#include<stdio.h>
int add(int a,int b); 
int mul(int a,int b);  //Function Declaration 
int  add(int a, int b)   // Function definition 
{
    return a+b;

}
int mul(int a,int b)
{
    return a*b;
}
int main()
{
    int m=20,n=10,sum,m1;
    sum=add(m,n);
    m1=mul(m,n);
    printf("The Sum is %d",sum);
    printf("\nThe answer is %d",m1);
    return 0;
}