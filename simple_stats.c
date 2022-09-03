/* Computes some simple statistics on values entered by the user.
 *
 * Time spent: TODO
 *
 * Author(s): TODO
*/


#include <stdio.h>
#include <math.h>

int main(){

    double num, min, max, arith, geo, count, harm;
    geo = 1;
    harm = 0;
    int isPositive = 0;
    int isNegative = 0;
    printf("Please enter a number: ");
    count = 0;
    while(scanf("%lf", &num) == 1)
    {
        if(count == 0)
        {
            min = num;
            max = num;
        }
        if(num <min)
        {
            min = num;
        }
        if(num > max)
        {
            max = num;
        }
        arith+=num;
        geo*=num;
        harm+=((1/num));
        if(num>0)
        {
            isPositive++;
        }
        if(num<0)
        {
            isNegative++;
        }
        count++;
        printf("Please enter a number: ");
    }
    harm = count/(harm);
    arith/=count;
    geo = pow(geo, 1/count);
    printf("Min: %.2f", min);
    printf(", Max: %.2f", max);
    printf("\nArithmetic Mean: %.2f", arith);
    if(isPositive == count || isNegative == count)
    {
        printf("\nGeometric Mean: %.2f", geo);
    }
    else{
        printf("\nGeometric Mean: undefined");
    }
    printf("\nHarmonic Mean: %.2f", harm);


    
}
