#include <stdio.h> /*    code to compile these files is below    */
#include <conio.h> /*   gcc Main.c WeightAndMass.c Temperature.c Data.c Angle.c -oConverter.exe */
#include <unistd.h>
#include <stdlib.h>
int Weight_And_Mass_Converter();
int Temperature_Converter();
int Data_Converter();
int Angle_Converter();
float n;
char *xyz[] = {/*First Menu Converters*/ "\n\t\t1. Volume  (not available)\n\t\t2. Length  (not available)\n\t\t3. Weight & Mass\n\t\t4. Temperature\n\t\t5. Energy  (not available)\n\t\t6. Area  (not available)\n\t\t7. Speed  (not available)\n\t\t8. Time  (not available)\n\t\t9. Power  (not available)", /*More Menu Converters*/ "\n\t\t1. Data  (not available)\n\t\t2. Pressure  (not available)\n\t\t3. Angle"};
// char *xyz[] = {/*First Menu Converters*/ "\n\t\t1. Volume  19 conversions  (not available)\n\t\t2. Length  11 conversions  (not available)\n\t\t3. Weight & Mass\n\t\t4. Temperature\n\t\t5. Energy  7 conversions  (not available)\n\t\t6. Area  10 conversions  (not available)\n\t\t7. Speed  7 conversions  (not available)\n\t\t8. Time  8 conversions  (not available)\n\t\t9. Power  5 conversions  (not available)", /*More Menu Converters*/ "\n\t\t1. Data  34 conversions  (not available)\n\t\t2. Pressure  6 conversions  (not available)\n\t\t3. Angle"};

int quit()
{
    printf("\n\n  Quiting The Program ");
    for (int i = 0; i < 3; i++)
    {
        system("ping localhost -n 1 >nul");
        system("ping localhost -n 1 >nul");
        system("ping localhost -n 1 >nul");
        system("ping localhost -n 1 >nul");
        system("ping localhost -n 1 >nul");
        printf(".");
    }
    sleep(1);
    printf("\n\n\n>>>>> Developed By MenTaL-Tech <<<<<");
    printf("\n\n\n\t\t\t***************** THANK YOU FOR USING OUR APP *****************");
    sleep(1);
}

float Input()
{
    printf("\n\nEnter The Value : ");
    scanf("%f", &n);
}

int main()
{
    while (1)
    {
    Main_Option:
        printf("\t  Welcome To >>..\"MenTaL-Tech\"..<< Converter !!!\n\n");
        printf("Choose Converter :%s\n\t\tPress 'M' For More Option.\n\t\tPress 'Q' To Quit.\n    >> ", xyz[0]);
        int i = 0;
        char Main_Option1 = getch();

        switch (Main_Option1)
        {
        case '3':
            system("cls");
            Weight_And_Mass_Converter();
            break;

        case '4':
            system("cls");
            Temperature_Converter();
            break;

        case 'm':
        case 'M':
            system("cls");
            while (1)
            {
                printf("\t  Welcome To >>..\"MenTaL-Tech\"..<< Converter !!!\n\n");
                printf("Choose Converter :%s\n\t\tPress 'B' To Go Back.\n\t\tPress 'Q' To Quit.\n    >> ", xyz[1]);
                char Main_Option2 = getch();
                switch (Main_Option2)
                {
                case '1':
                    system("cls");
                    Data_Converter();
                    break;
                case '3':
                    system("cls");
                    Angle_Converter();
                    break;

                case 'b':
                case 'B':
                    system("cls");
                    goto Main_Option;

                case 'q':
                case 'Q':
                    quit();
                    goto end;

                default:
                    system("cls");
                    printf("\a\n\n****Please Select Valid Option...****\n\n");
                    break;
                }
            }

        case 'q':
        case 'Q':
            quit();
            goto end;

        default:
            system("cls");
            printf("\a\n\n****Please Select Valid Option...****\n\n");
            break;
        }
    }

end:
    return 0;
}
