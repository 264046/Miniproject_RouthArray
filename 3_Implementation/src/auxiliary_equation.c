#include "auxiliary_equation.h"
#include "source_1.h"

/**
 * @brief Generates auxiliary equation and replaces the last row of 0s of Routh array
 * 
 * @param rth 
 * @param i 
 * @return rth
 */

float* auxiliary_equation(float *rth,int i)
{
    int pwr=len-i;
    int j=0;
    while (pwr>-1)
    {
        *(rth+i*c+j)=*(rth+(i-1)*c+j)*pwr;
        pwr-=2;
         j++;
    }
    return rth;
}