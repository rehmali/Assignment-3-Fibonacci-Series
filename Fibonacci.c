#include<stdio.h>
int main()
    {
        int num1=0,num2=1,totalElements=0,nextTerm=num1;   //Declaring and initializing th Variables
        printf("How many terms of the fibanocci Series you want to print on the screen : ");  //Asking user about number of terms
        scanf("%d",&totalElements);
        for (int i=0;i<totalElements;++i)
            {
                num1=num2;  //saving the value of num2 in num1
                num2=nextTerm;   // copying Next Term in num2
                printf(" %d ",nextTerm);  //Printing term on the screen
                nextTerm=num1+num2;   //Adding the two terms to get the next term
            }
            return 0;
    }
