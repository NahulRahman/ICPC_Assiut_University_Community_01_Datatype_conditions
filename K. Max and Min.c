#include<stdio.h>
int main(){
    long int a,b,c;
    scanf("%ld%ld%ld",&a,&b,&c);
    if(a<b&&a<c) printf("%ld ",a);
    else if(b<c) printf("%ld ",b);
    else printf("%ld ",c);
    if(a>b&&a>c) printf("%ld\n",a);
    else if(b>c) printf("%ld\n",b);
    else printf("%ld\n",c);
    return 0;
}
