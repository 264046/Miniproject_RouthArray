#include<sign_changes.h>
#include "source_1.h"

/**
 * @brief counts number of sign changes in first column of routh array
 * 
 * @param rth 
 * @return int 
 */

int sign_changes(float* rth)    
{   int changes=0;
    for(int i=0;i<r-1;i++)
    {
        if (*(rth+i*c)>0 && *(rth+(i+1)*c)<0)
        {
        changes++;
        }
        else if (*(rth+i*c)<0 && *(rth+(i+1)*c)>0)
        {
            changes++;
        }
    }
    return changes;
}