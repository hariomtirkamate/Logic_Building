/*
    step 1: Understand the problem statement
    step 2: Write the algorithem
    step 3: Decide the programming language
    step 4: Write the program
    step 5: Test the program 


*/

/*
    START

        Accept first number as No1
        Accept second number as N02
        If the input is negative then convert it into positive
        perform addition of No1 and No2
        Display the addition on screen

    STOP
*/

#include<stdio.h>

float AdditionTowNumbers(float fNo1,float fNo2)
{
    float fSum = 0.0f;

    //Updater
    if(fNo1 < 0)
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0)
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;

    return fSum; 
}
int main()
{
    float fValue1 = 0.0f,fValue2 = 0.0f,fRet = 0.0f; 

    printf("Enter first number:\n");
    scanf("%f",&fValue1);

    printf("Enter second number:\n");
    scanf("%f",&fValue2);

    fRet = AdditionTowNumbers(fValue1,fValue2);

    printf("Addition is:%f",fRet);

    return 0;
}