#include <stdio.h>
#include <conio.h>
#include <unistd.h>
#include <stdlib.h>
float n; // stores users inputs
int main();
float Input();
int Conv1stValOpt, Conv2ndValOpt;
char Main_Option, *dataconv[] = {/*Data Conversions*/ "\n\t\t1. Bits\n\t\t2. Bytes\n\t\t3. Kilobits\n\t\t4. Kibibits\n\t\t5. Kilobytes\n\t\t6. Kibibytes\n\t\t7. Megabits\n\t\t8. Mebibits\n\t\t9. Megabytes", /*Remaining Functions*/ "\n\t\t1. Mebibytes\n\t\t2. Gigabits\n\t\t3. Gibibits\n\t\t4. Gigabytes\n\t\t5. Gibibytes\n\t\t6. Terabits\n\t\t7. Tebibits\n\t\t8. Terabytes\n\t\t9. Tebibytes", /*More Remaining Functions*/ "\n\t\t1. Petabits\n\t\t2. Pebibits\n\t\t3. Petabytes\n\t\t4. Pebibytes\n\t\t5. Exabits\n\t\t6. Exbibits\n\t\t7. Exabytes\n\t\t8. Exbibytes\n\t\t9. Zetabits", /*Other More Remaining Functions*/ "\n\t\t1. Zebibits\n\t\t2. Zetabytes\n\t\t3. Zebibytes\n\t\t4. Yottabits\n\t\t5. Yobibits\n\t\t6. Yottabytes\n\t\t7. Yobibits", /*Back And Quit*/ "\n\t\tPress 'B' To Go Back.\n\t\tPress 'Q' To Quit.", /*More Options*/ "\n\t\tPress 'M' For More Conversions."};

//        +------------------------------------------------------------------------------------------------------+
//        |--------------------------------------------DATA CONVERTER--------------------------------------------|
//        +------------------------------------------------------------------------------------------------------+
int Data_Converter()
{
First_Quantity_Selection_1:
    printf("\t  ___________________________________________\n\t /                                           \\\n\t | You Have Selected Weight & Mass Converter |\n\t \\___________________________________________/");

    printf("\n\nSelect First Qantity :%s%s%s\n  >> ", dataconv[0], dataconv[5], dataconv[4]);
    Conv1stValOpt = getch();
    switch (Conv1stValOpt)
    {
    case '1':
    Second_Quantity_Selection_1:

        while (1)
        {
            //                        +-------------------------------------+
            //                        |-----------BITS CONVERSION-----------|
            //                        +-------------------------------------+
            printf("                    \n\n\t\t\t\t\t+-------------------------------------+\n\t\t\t\t\t|-----------BITS CONVERSION-----------|\n\t\t\t\t\t+-------------------------------------+ ");
            printf("\n\nSelect Second Qantity : \n\t\t1. Bytes\n\t\t2. Kilobits\n\t\t3. Kibibits\n\t\t4. Kilobytes\n\t\t5. Kibibytes\n\t\t6. Megabits\n\t\t7. Mebibits\n\t\t8. Megabytes\n\t\t9. Mebibytes%s%s\n  >> ", dataconv[5], dataconv[4]);
            Conv2ndValOpt = getch();
            switch (Conv2ndValOpt)
            {
            case '1':
                printf("\n\n\t\tBits To Bytes Converter");
                Input();
                printf("%f Bits Equal To %f Bytes\n", n, n / 8);
                break;

            case '2':
                printf("\n\n\t\tBits To Kilobits Converter");
                Input();
                printf("%f Bits Equal To %f Kilobits\n", n, n / 1000);
                break;

            case '3':
                printf("\n\n\t\tBits To Kibibits Converter");
                Input();
                printf("%f Bits Equal To %f Kibibits\n", n, n / 1024);
                break;

            case '4':
                printf("\n\n\t\tBits To Kilobytes Converter");
                Input();
                printf("%f Bits Equal To %f Kilobytes\n", n, n * 0.2);
                break;

            case '5':
                printf("\n\n\t\tBits To Kibibytes Converter");
                Input();
                printf("%f Bits Equal To %f Kibibytes\n", n, n * 0.02);
                break;

            case '6':
                printf("\n\n\t\tBits To Megabits Converter");
                Input();
                printf("%.f Bits Equal To %.7f Megabits\n", n, n * 0.002);
                break;

            case '7':
                printf("\n\n\t\tBits To Mebibits Converter");
                Input();
                printf("%f Bits Equal To %.7f Mebibits\n", n, n * 0.0002);
                break;

            case '8':
                printf("\n\n\t\tBits To Megabytes Converter");
                Input();
                printf("%f Bits Equal To %.7f Megabytes\n", n, n * 0.0000002);
                break;

            case '9':
                printf("\n\n\t\tBits To Mebibytes Converter");
                Input();
                printf("%f Bits Equal To %.8f Mebibytes\n", n, n * 0.00705479);
                break;
            Second_Quantity_Selection_1_m:
            case 'm':
            case 'M':
                while (1)
                {
                    printf("                    \n\n\t\t\t\t\t+-------------------------------------+\n\t\t\t\t\t|-----------BITS CONVERSION-----------|\n\t\t\t\t\t+-------------------------------------+ ");
                    printf("\n\nSelect Second Qantity : 1. Gigabits\n\t\t2. Gibibits\n\t\t3. Gigabytes\n\t\t4. Gibibytes\n\t\t5. Terabits\n\t\t6. Tebibits\n\t\t7. Terabytes\n\t\t8. Tebibytes\n\t\t9. Petabytes%s%s\n  >> ", dataconv[5], dataconv[4]);
                    Conv2ndValOpt = getch();
                    switch (Conv2ndValOpt)
                    {
                    case '1':
                        printf("\n\n\t\tBits To Gigabits Converter");
                        Input();
                        printf("%f Bits Equal To %f Gigabits\n", n, n / 8);
                        break;

                    case '2':
                        printf("\n\n\t\tBits To Gibibits Converter");
                        Input();
                        printf("%f Bits Equal To %f Gibibits\n", n, n / 1000);
                        break;

                    case '3':
                        printf("\n\n\t\tBits To Gigabytes Converter");
                        Input();
                        printf("%f Bits Equal To %f Gigabytes\n", n, n / 1024);
                        break;

                    case '4':
                        printf("\n\n\t\tBits To Gibibytes Converter");
                        Input();
                        printf("%f Bits Equal To %f Gibibytes\n", n, n * 0.2);
                        break;

                    case '5':
                        printf("\n\n\t\tBits To Terabits Converter");
                        Input();
                        printf("%f Bits Equal To %f Terabits\n", n, n * 0.02);
                        break;

                    case '6':
                        printf("\n\n\t\tBits To Tebibits Converter");
                        Input();
                        printf("%.f Bits Equal To %.7f Tebibits\n", n, n * 0.002);
                        break;

                    case '7':
                        printf("\n\n\t\tBits To Terabytes Converter");
                        Input();
                        printf("%f Bits Equal To %.7f Mebibits\n", n, n * 0.0002);
                        break;

                    case '8':
                        printf("\n\n\t\tBits To Tebibytes Converter");
                        Input();
                        printf("%f Bits Equal To %.7f Tebibytes\n", n, n * 0.0000002);
                        break;

                    case '9':
                        printf("\n\n\t\tBits To Petabits Converter");
                        Input();
                        printf("%f Bits Equal To %.8f Petabits\n", n, n * 0.00705479);
                        break;

                    Second_Quantity_Selection_1_m:
                    case 'm':
                    case 'M':
                        while (1)
                        {
                            printf("                    \n\n\t\t\t\t\t+-------------------------------------+\n\t\t\t\t\t|-----------BITS CONVERSION-----------|\n\t\t\t\t\t+-------------------------------------+ ");
                            printf("\n\nSelect Second Qantity : 1. Gigabits\n\t\t2. Gibibits\n\t\t3. Gigabytes\n\t\t4. Gibibytes\n\t\t5. Terabits\n\t\t6. Tebibits\n\t\t7. Terabytes\n\t\t8. Tebibytes\n\t\t9. Petabytes%s%s\n  >> ", dataconv[5], dataconv[4]);
                            Conv2ndValOpt = getch();
                            switch (Conv2ndValOpt)
                            {
                            case '1':
                                printf("\n\n\t\tBits To Gigabits Converter");
                                Input();
                                printf("%f Bits Equal To %f Gigabits\n", n, n / 8);
                                break;

                            case '2':
                                printf("\n\n\t\tBits To Gibibits Converter");
                                Input();
                                printf("%f Bits Equal To %f Gibibits\n", n, n / 1000);
                                break;

                            case '3':
                                printf("\n\n\t\tBits To Gigabytes Converter");
                                Input();
                                printf("%f Bits Equal To %f Gigabytes\n", n, n / 1024);
                                break;

                            case '4':
                                printf("\n\n\t\tBits To Gibibytes Converter");
                                Input();
                                printf("%f Bits Equal To %f Gibibytes\n", n, n * 0.2);
                                break;

                            case '5':
                                printf("\n\n\t\tBits To Terabits Converter");
                                Input();
                                printf("%f Bits Equal To %f Terabits\n", n, n * 0.02);
                                break;

                            case '6':
                                printf("\n\n\t\tBits To Tebibits Converter");
                                Input();
                                printf("%.f Bits Equal To %.7f Tebibits\n", n, n * 0.002);
                                break;

                            case '7':
                                printf("\n\n\t\tBits To Terabytes Converter");
                                Input();
                                printf("%f Bits Equal To %.7f Mebibits\n", n, n * 0.0002);
                                break;

                            case '8':
                                printf("\n\n\t\tBits To Tebibytes Converter");
                                Input();
                                printf("%f Bits Equal To %.7f Tebibytes\n", n, n * 0.0000002);
                                break;

                            case '9':
                                printf("\n\n\t\tBits To Petabits Converter");
                                Input();
                                printf("%f Bits Equal To %.8f Petabits\n", n, n * 0.00705479);
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
}