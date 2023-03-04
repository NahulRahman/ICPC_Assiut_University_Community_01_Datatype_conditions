#include<stdio.h>
int main(){
    long int a,b;
    char s;
    scanf("%ld%c%ld",&a,&s,&b);
    if(s=='+') printf("%ld\n",a+b);
    else if(s=='-') printf("%ld\n",a-b);
    else if(s=='*') printf("%ld\n",a*b);
    else printf("%ld",a/b);
    return 0;
}
