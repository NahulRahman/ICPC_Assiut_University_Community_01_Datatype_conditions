//Given two numbers N and M. Print the summation of their last digits.
#include<stdio.h>
int main(){
    long long int a,b;
    scanf("%lld%lld",&a,&b);
    printf("%d\n",((a%10)+(b%10)));
    return 0;
}
