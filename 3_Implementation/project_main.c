#include <stdio.h>
#include <stdlib.h>

#include "routh_array.h"
/**
 * @brief takes input and calls all other functions necessary for working of the program.
 * 
 */

#define VALID   (1)
#define INVALID (0)

float* coeff = NULL;
float *rth = NULL;
int len=1,r,c;
enum option{ INPUT=1, EXIT};

void take_input(void);
float* start_routh_array(float *);
int complete_routh__array(float*,int);
float* auxiliary_equation(float*,int);
int sign_changes(float*);

int valid_operation(int option);


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
{   int o;
    printf("****MENU****\n1.Calculator\n2.Exit\nEnter your option: ");
    scanf("%d",&o);
    if (EXIT==o)
    {
        printf("\nQuitting apllication....\n\n");
        exit(0);
    }
    if (VALID!=valid_operation(o))
    {
        printf("\nWrong option.\n\n");
        return;
    }
    printf("\n\nEnter coeffiecients of characteristic equation in decreasing order of power: ");
    int index = 0,j;
    float in;
    char e=' '; 
    while(e!='\n')                                              //taking coeffiecients as input
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
    rth=start_routh_array(coeff);                               //initialising routh array
    index=complete_routh__array(rth,0);
    while (index<r-2)
    {
        index++;
        for(j=1;j<c;j++)
        {
            if (*(rth+index*c+j)!=0)
            {
            printf("\n\nThe system is unstable\n\n");           //first element of a row is 0, making system unstable
            goto showarray;
            }
        }
        rth=auxiliary_equation(rth,index);
        index--;
        index=complete_routh__array(rth,index);
    }

    int x=sign_changes(rth);                                    //checking for sign changes in first column of routh array
    if (x!=0)
    {
        printf("\n\nThe system is unstable\n\n");
    }
    else{
         printf("\n\nThe system is stable\n\n");
    }
    showarray:
    printf("\nROUTH ARRAY:\n\n");
    for(int i = 0;i<r;i++)
    {   
        for(j=0;j<c;j++)
        {
            printf("%f  ",*(rth+i*c+j));
        }
        printf("\n");
    }
}

int valid_operation(int option)
{
    /* Check if the operation is a valid operation */
    return ((INPUT == option) || (EXIT == option)) ? VALID: INVALID;
}