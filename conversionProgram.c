#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void)
{
    int options,i,j,k,l;
    float C,F,K;
    for(i=0;i<2;i++)
    {
        system("cls");
        printf("***************//Celsius(°C)-Fahrenheit(°F)-Kelvin(°K)\\***************\n");
        printf("************************//Heat Unit Conversion Program\\************************\n\n");
        printf("Options:\n1-Celsius(°C)-Fahrenheit(°F)\n2-Fahrenheit(°F)-Kelvin(°K)\n3-Celsius(°C)-Kelvin(°K)\n4-Exit\n\n");
        printf("Choose an option> ");
        scanf("%d",&options);
        
        switch(options)
        {
            case 1:
                for(j=0;j<2;j++)
                {
                    system("cls");
                    printf("----Celsius(°C)-Fahrenheit(°F)----\n");
                    printf("Options:\n1-Celsius(°C) To Fahrenheit(°F) Conversion\n2-Fahrenheit(°F) To Celsius(°C) Conversion\n3-Return Main Menu\n");
                    printf("Choose an option> ");
                    scanf("%d",&options);
                    switch(options){
                        case 1:
                            printf("Enter a Celsius(°C) value>");
                            scanf("%f",&C);
                            F=(C*9)/5+ 32;
                            printf("Celsius(°C):%.2f---->Fahrenheit(°F):%.2f\n",C,F);
                            system("pause");
                            break;
                            
                        
                        case 2:
                            printf("Enter a Fahrenheit(°F) value>");
                            scanf("%f",&F);
                            C=((F- 32)*5)/9;
                            printf("Fahrenheit(°F):%.2f---->Celsius(°C):%.2f\n",F,C);
                            system("pause");
                            break;
                        case 3:
                            j=4;
                            i=0;
                            break;
                        default:
                            j=4;
                            printf("---##Please Choose a given options!!!##---\n");
                            sleep(1.5);
                            j=0;
                            break;
                    }
                }
                break;
            case 2:
                for(k=0;k<2;k++)
                {
                    system("cls");
                    printf("----Fahrenheit(°F)-Kelvin(°K)----\n");
                    printf("Options:\n1-Kelvin(°K) To Fahrenheit(°F) Conversion\n2-Fahrenheit(°F) To Kelvin(°K) Conversion\n3-Return Main Menu\n");
                    printf("Choose an option> ");
                    scanf("%d",&options);
                    switch(options){
                        case 1:
                            printf("Enter a Kelvin(°K) value>");
                            scanf("%f",&K);
                            F=(((K- 273)*9)/5)+ 32;
                            printf("Kelvin(°K):%.2f---->Fahrenheit(°F):%.2f\n",K,F);
                            system("pause");
                            break;
                        
                        case 2:
                            printf("Enter a Fahrenheit(°F) value>");
                            scanf("%f",&F);
                            K=(((F- 32)*5)/9) + 273;
                            printf("Fahrenheit(°F):%.2f---->Kelvin(°K):%.2f\n",F,K);
                            system("pause");
                             break;
                        case 3:
                            k=4;
                            i=0;
                            break;
                        default:
                            k=4;
                            printf("---##Please Choose a given options!!!##---\n");
                            sleep(1.5);
                            k=0;
                            break;
                    }
                }
                break;
            case 3:
                for(l=0;l<2;l++)
                {
                    system("cls");
                    printf("----Celsius(°C)-Kelvin(°K)----\n");
                    printf("Options:\n1-Kelvin(°K) To Celsius(°C) Conversion\n2-Celsius(°C) To Kelvin(°K) Conversion\n3-Return Main Menu\n");
                    printf("Choose an option> ");
                    scanf("%d",&options);
                    switch(options){
                        case 1:
                            printf("Enter a Kelvin(°K) value>");
                            scanf("%f",&K);
                            C=K- 273;
                            printf("Kelvin(°K):%.2f---->Celsius(°C):%.2f\n",K,C);
                            system("pause");
                            break;
                        
                        case 2:
                            printf("Enter a Celsius(°C) value>");
                            scanf("%f",&C);
                            F=C+ 273;
                            printf("Celsius(°C):%.2f---->Kelvin(°K):%.2f\n",C,K);
                            system("pause");
                             break;
                        case 3:
                            l=4;
                            i=0;
                            break;
                        default:
                            l=4;
                            printf("---##Please Choose a given options!!!##---\n");
                            sleep(1.5),
                            l=0;
                            break;
                    }
                }
                
                break;
            case 4:
                printf("Exiting...");
                sleep(1.2);
                i=4;
                break;
            default:
                i=4;
                printf("---##Please Choose a given options!!!##---\n");
                sleep(1.5);
                i=0;
                break;
        }
    }
  
    return 0;
}



