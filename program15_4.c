#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkDivisible(int iNo1, int iNo2)
{
    if((iNo1 ==  iNo2)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Enter  two numbers");
    scanf("%d%d",&iValue1,&iValue2);

    bRet = ChkDivisible(iValue1,iValue2);
    if(bRet == TRUE)
    {
        printf("Divisible");
    }
    else
    {
        printf("Not Divisible");

    
    }

    return 0;
}


