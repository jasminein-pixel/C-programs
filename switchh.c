#include<stdio.h>
int main()
{
    float fah,cel,kel;
    int x;

         printf("What do yo want to perform?\n1.cel to fah\n 2.cal to kel\n 3.fah to cel\n");
         scanf("%d",&x);
     switch(x)
    {
        case 1:
        	printf("Enter the temperature in cel:\n");
        scanf("%f",&cel);	
        fah=(9.0/5.0)*cel+32;
        printf("Temp in fah is %f",fah);
        break;
        	
         case 2:
        printf("Enter the temperature in cel:\n");
        scanf("%f",&cel);	
        kel=cel+273.15;
        printf("Temp in kel is %f",kel);
        break;
        
        case 3:
        printf("Enter the temperature in fah:\n");
        scanf("%f",&fah);
        cel = (5.0/9.0) * (fah - 32);
        printf("Temp in cel=%f",cel);
        break;
        
        default:
        printf("Enter te valid temp");
    }
        return 0;
}


