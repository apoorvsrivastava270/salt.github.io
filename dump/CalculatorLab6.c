#include<stdio.h>


int main(){

    printf("Enter initial total: ");
    float n;
    scanf(" %f",&n);
    int b = 1;
    while (b==1)
    {
        char c;
        printf("Enter operation (+,-,*,/,^) : ");
        scanf(" %c",&c);
        float m;
        switch (c)
        {
        case '+':
            printf("Enter number: ");
            scanf(" %f",&m);
            n = (n+m);
            printf("Total = %f\n",n);
            break;
        
        case '-':
            printf("Enter number: ");
            scanf(" %f",&m);
            n = (n-m);
            printf("Total = %f\n",n);
            break;

        case '*':
            printf("Enter number: ");
            scanf(" %f",&m);
            n = (n*m);
            printf("Total = %f\n",n);
            break;

        case '/':
            printf("Enter number: ");
            scanf(" %f",&m);
            n = (n/m);
            printf("Total = %f\n",n);
            break;

        case '^':
            printf("Enter a positive non-zero integer: ");
            scanf(" %f",&m);
            float temp_n = n;
            for (int i = 0; i < m-1; i++)
            {
                n = n*temp_n;
            }
            printf("Total = %f\n",n);
            break;

        default:
            b = 0;
            break;
        }
    }
    

    return 0;
}