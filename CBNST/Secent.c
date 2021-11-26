#include<stdio.h>
#include<math.h>
double fun(double x){
    return x*x*x*x -3*x*x- x-10;
}
int main(){
    double x0, x1=0, x2;
    int i = 0;
    while(fun(x1)<0){
        x1++;
    }

    x0 = x1 - 1;

    do
    {
        x2 = x1 - ((x1-x0)/(fun(x1)-fun(x0)))*fun(x1);
        i++;
        printf("The value of %d iteration is %0.4lf\n", i, x2);
    } while ((fabs(x1-x2)>0.0001) && (x0 == x1) && (x1 == x2));
    printf("The value of %d iteration is %0.4lf\n", i+1, x2);

    return 0;
}