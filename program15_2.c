#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkGreter(int iNo)
{
    if(iNo > 100)
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
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Enter number");
    scanf("%d",&iValue);

    bRet = ChkGreter(iValue);
    if(bRet == TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");

    
    }

    return 0;
}


