#include "complete_routh_array.h"
#include "source_1.h"


int complete_routh__array(float* rth,int i)
{
    float a1,a2,b1,b2,z;
    //int changes=0;
    int j;
    completerouth:
    b1=*(rth+(i+1)*c);
    while(b1!=0)
    {   for(j=1;j<c;j++)
        {
            a1=*(rth+i*c);
            a2=*(rth+i*c+j);
            b2=*(rth+(i+1)*c+j);
            z=(b1*a2-a1*b2)/b1;
            z=(z<0.000001 && z>-0.000001)?0:z;
            *(rth+(i+2)*c+j-1)=z;
        }
        i++;
        b1=*(rth+(i+1)*c);
    }
    return i;
}
