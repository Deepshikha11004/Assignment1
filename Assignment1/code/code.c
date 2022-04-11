#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 int root(int input, int n)
{
  return round(pow(input, 1./n));
}


int main ()
{
    // ques: 4th term of gp is 16, 7th term of gp is 128
    //here, am(mth term of GP)=ar^(m-1)
    int m, n;
    int r,a,d,am,an;
    
    printf("value of m and n:");
    scanf("%d %d",&m,&n);
    printf("value of am and an:");
    scanf("%d %d",&am,&an);
    d=am/an;
    //printf("\nThe value of d is %d", d);
    int h= m-n;
   
    r=root(d,h);
    a=(an/pow(r,n-1));
    
    printf("\nThe value of common ratio is %d", r);
    printf("\nThe value of first term is %d", a);



    return 0;
}
