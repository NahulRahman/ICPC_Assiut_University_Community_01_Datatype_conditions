/*Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read
            input 3 -2 1
           output -2
                   1
                   3

                   3
                   -2
                   1
*/

#include<stdio.h>
int main(){
    long int num1,num2,num3,temp,a,b,c;
    scanf("%ld%ld%ld",&num1,&num2,&num3);
    a=num1;
    b=num2;
    c=num3;
/*
    if(a<b&&a<c) printf("%ld\n",a);
    else if(b<c) printf("%ld\n",b);
    else printf("%ld\n",c);

    if(a>b&&a<c) printf("%ld\n",a);
    else if(b>a&&b<c) printf("%ld\n",b);
    else printf("%ld\n",c);

    if(a>b&&a>c) printf("%ld\n",a);
    else if(b>c) printf("%ld\n",b);
    else printf("%ld\n",c);
*/
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    printf("%ld\n%ld\n%ld\n",num1,num2,num3);
    printf("\n");
    printf("%ld\n%ld\n%ld\n",a,b,c);
    return 0;
}
