#include<stdio.h>
#include<math.h>

int main (void)

{
    double y=1.0,x,h=0.05,a=0.5,b=0.7,d=0.001,sum;
    int k;
    printf("a:");
    scanf("%le",&a);
    printf("b:");
    scanf("%le",&b);
    printf("h:");
    scanf("%le",&h);
    printf("d:");
    scanf("%le",&d);
    for (x=a;x<=b;x+=h)
        {
              k=1;
              y=1.0;
              sum=0;
              while (fabs(y>d))   
              {
                    y=(x+2)/(k*(k+2));
                    sum+=y;
                    k++;
              } 
              printf("%.2f->%.5f \n",x,sum);
        }
}l
