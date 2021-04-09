#include "routh_array.h"

#include<stdio.h>
#include<stdlib.h>

float* coeff = NULL;
float *rth = NULL;
int len=1,r,c;

void take_input(void);
float* start_routh_array(float *);
int complete_routh__array(float*,int);
float* auxiliary_equation(float*,int);
int sign_changes(float*);


int main()
{   
    printf("*****ROUTH ARRAY CALCULATOR*****\n");
    while(1)
    {   rth=NULL;
        coeff=NULL;
        take_input();
    }
    free(rth);
    rth=NULL;
    free(coeff);
    coeff=NULL;
    return 0;
}

void take_input(void)
{
    printf("Enter coeffiecients of characteristic equation in decreasing order of power: ");
    int index = 0,j;
    float in;
    //float* coeff = NULL;
    char e=' '; 
    //READING COEFFICIENTS
    while(e!='\n')
    {   scanf("%f%c",&in,&e);
        if(coeff == NULL)
        {
        coeff = malloc(sizeof(float));
        *coeff = in;
        }
        else
        {
        len++;
        coeff = realloc(coeff,sizeof(float)*len);
        index = len - 1;
        *(coeff+index) = in;
        } 
    }
    //END READING COEFFICIENTS
    rth=start_routh_array(coeff);
    index=complete_routh__array(rth,0);
    while (index<r-2)
    {
        
        //if (index<r-2)
        //{
            index++;
            for(j=1;j<c;j++)
            {
                if (*(rth+index*c+j)!=0)
                {
                printf("\n\nUnstable");
                exit(0);
                }
            }
        index--;
        rth=auxiliary_equation(rth,index);
        index=complete_routh__array(rth,index);
        //}
    }
    int x=sign_changes(rth);
    printf("\n\n%d\n\n",x);
    for(int i = 0;i<r;i++)
    {   
        for(j=0;j<c;j++)
        {
            printf("%f  ",*(rth+i*c+j));
        }
        printf("\n");
    }
}


    /*if (i<r-2)
    {   i++;
        for(j=1;j<c;j++)
        {
            if (*(rth+i*c+j)!=0)
            {
                *(rth+i*c)=0.000001;        //unstable?go directly to printf("Unstable")
                i--;
                goto completerouth;
            }
        }
        //aux equation
        */

    //else


/*

    for(i = 0;i<r;i++)
    {   
        for(j=0;j<c;j++)
        {
            printf("%f  ",*(rth+i*c+j));
        }
        printf("\n");
    }
    //printf("\n\nChanges:%d",changes);
    if (changes==0)
    {
        printf("Stable");
    }
    else
    {
        printf("Unstable");
    }
    free(rth);
    rth=NULL;
    free(coeff);
    coeff=NULL;

    return 0;
}*/