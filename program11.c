/*
    START

        Accept first number as No1
        Accept second number as No2
        If the input is negative then convert it into positive
        perform addition of No1 and No2
        Display the addition on screen

    STOP
*/

///////////////////////////////////////////////////////////////////////////////////
// 
// Required header files
//
///////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  AdditionTowNumbers 
//  Discription:    It is use to perform addition
//  Input:          float,float
//  Output:         float
//  Author:         Hariom Dhanraj Tirkamte
//  Date:           09/10/2025
//
///////////////////////////////////////////////////////////////////////////////////
float AdditionTowNumbers(
                            float fNo1,             // First Input
                            float fNo2              // Second Input
                        )
{
    float fSum = 0.0f;                              // To store the result

    if(fNo1 < 0)                                    // Updeter
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0)                                    //Updater
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;                             // Business logic

    return fSum; 
}   // End of AdditionTowNumbers

///////////////////////////////////////////////////////////////////////////////////
//
//
//  Entry point function for application
//
//
///////////////////////////////////////////////////////////////////////////////////
int main()
{
    float fValue1 = 0.0f,fValue2 = 0.0f;            // To accept user input
    float fRet = 0.0f;                              // To store the result

    printf("Enter first number:\n");
    scanf("%f",&fValue1);

    printf("Enter second number:\n");
    scanf("%f",&fValue2);

    fRet = AdditionTowNumbers(fValue1,fValue2);     // Function call

    printf("Addition is:%f",fRet);

    return 0;
}   // End of main

///////////////////////////////////////////////////////////////////////////////////
//
//  Test cases successfully handaled by the application
//  Input1 : 10.5   Input2 : 3.2    Output : 13.7
//  Input1 : 10.5   Input2 :-3.2    Output : 13.7
//  Input1 :-10.5   Input2 : 3.2    Output : 13.7
//  Input1 :-10.5   Input2 :-3.2    Output : 13.7
//  Input1 : 10.5   Input2 : 0      Output : 10.5
//
///////////////////////////////////////////////////////////////////////////////////