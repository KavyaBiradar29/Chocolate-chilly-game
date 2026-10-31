#include<stdio.h>
int main()
{
    int p1,p2,chocolates=13;
    printf("\n\n\t\t\t\tChocolate Chilly Game\t\t\t\t");
    printf("\n\nThe total number of chocolates are 13\n");
  

    while(chocolates>0)
    {
        Player1:
        printf("\nPlayer 1 turn\n");
        printf("Pick chocolates from (0-3): ");
        scanf("%d",&p1);
        if(p1<1 || p1>3 || p1>chocolates)
        {
            printf("Invalid,Try again!!\n\n");
            goto Player1;
            
            
        }

        chocolates = chocolates - p1;

        printf("\n\nChocolates remaining : %d\n",chocolates);

        if(chocolates == 1 || chocolates == 0)
        {
            printf("Remaining chocolates=%d\n\n",chocolates);
            printf("Only Chilly remains!\n");
            printf("Player 1 gets Chilly\n");
            printf("Player 2 WON\n");
            printf("Player 1 LOST\n");
            break;
        }
        
        Player2:
        printf("\nPlayer 2 turn\n");
        printf("Pick chocolates from (0-3): ");
        scanf("%d",&p2);
        if(p2<1 || p2>3 || p2>chocolates)
        {
            printf("Invalid,Try again!!\n\n");
            goto Player2;
            
            
        }

           chocolates = chocolates - p2;


        if(chocolates == 1 || chocolates == 0)
        {
            printf("Remaining chocolates : %d\n\n",chocolates);
            printf("Only Chilly remains!\n");
            printf("Player 2 gets Chilly\n");
            printf("Player 1 WON\n");
            printf("Player 2 LOST\n");
            break;
        }
       

        

    }

    return 0;
    
}