#include<stdlib.h>

#include "start_routh_array.h"
#include "source_1.h"

/**
 * @brief initialises routh array using input coefficients and dynamically allocates matrix of required size
 * 
 * @param coeff
 * @return rth
 */

int  r,c;

float* start_routh_array(float *coeff)
{
    int i,j,k;
    r=len;
    c=(len-1)/2+1;
    float *rth= (float *)malloc(r*c*sizeof(float));
    i=0,j=0;
    for(k=0;k<len;k+=2,j++)
    {
        *(rth+i*c+j) = *(coeff+k);
    }
    i=1,j=0;
    for(k=1;k<len;k+=2,j++)
    {
        *(rth+i*c+j) = *(coeff+k);
    }
    if (len%2!=0)
    {
        *(rth+2*c-1)=0;
    }
    for(i=2;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            *(rth+i*c+j)=0;
        }
    }
    return rth;
}