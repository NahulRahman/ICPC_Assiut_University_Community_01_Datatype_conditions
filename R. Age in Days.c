#include<stdio.h>
int main(){
    long int n;
    scanf("%ld",&n);
    int years=n/365;
    int months=(n-(years*365))/30;
    printf("%d years\n",n/365);
    printf("%d months\n",(n-(years*365))/30);
    printf("%d days\n",(n-(years*365)-(months*30)));
    return 0;
}
