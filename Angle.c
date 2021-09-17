#include <stdio.h>
#include <conio.h>
#include <unistd.h>
#include <stdlib.h>
float n;
int main();
float Input();
char Main_Option, Conv1stValOpt, Conv2ndValOpt, *angleconv[] = {/*Back And Quit*/ "\n\t\tPress 'B' To Go Back.\n\t\tPress 'Q' To Quit.", "\n\t\t1. Degree\n\t\t2. Radian\n\t\t3. Gradian"};
//        +---------------------------------------------------------------------------------------------------+
//        |------------------------------------------ANGLE CONVERTER------------------------------------------|
//        +---------------------------------------------------------------------------------------------------+
int Angle_Converter()
{
First_Quantity_Selection:
    printf("\t  ___________________________________\n\t /                                   \\\n\t | You Have Selected Angle Converter |\n\t \\___________________________________/");
    printf("\n\nSelect First Qantity :%s%s\n", angleconv[1], angleconv[0]);
    Conv1stValOpt = getch();
    system("cls");
    switch (Conv1stValOpt)
    {

        //                    +-------------------------------------+
        //                    |----------DEGREE CONVERSION----------|
        //                    +-------------------------------------+
    case '1':
    Second_Quantity_Selection_1:

        printf("\n\nSelect Second Qantity : \n\t\t1. Radians\n\t\t2. Gradians%s\n", angleconv[0]);
        Conv2ndValOpt = getch();
        system("cls");
        switch (Conv2ndValOpt)
        {
        case '1':
            printf("\n\n\tDegrees To Radians Converter");
            Input();
            printf("%f Degrees Equal To %f Radians\n", n, n / 57.29578);
            break;

        case '2':
            printf("\n\n\t\tDegrees To Gradians Converter");
            Input();
            printf("%f Degrees Equal To %f Gradians\n", n, n * 1.111111);
            break;

        case 'b':
        case 'B':
            goto First_Quantity_Selection;
            break;

        case 'q':
        case 'Q':
            Main_Option = 'q';
            // quit();
            break;

        default:
            printf("\a\n\n****Please Select Valid Option...****\n\n");
            goto Second_Quantity_Selection_1;
            break;
        }
        break;

        //                +----------------------------------------+
        //                |-----------RADIANS CONVERSION-----------|
        //                +----------------------------------------+
    case '2':
    Second_Quantity_Selection_2:
        printf("\n\nSelect Second Qantity : \n\t\t1. Degrees\n\t\t2. Gradians%s\n", angleconv[0]);
        Conv2ndValOpt = getch();
        switch (Conv2ndValOpt)
        {
        case '1':
            printf("\n\n\t\tRadians To Degrees Converter");
            Input();
            printf("%f Degrees Equal To %f Radians\n", n, n * 57.29578);
            break;

        case '2':
            printf("\n\n\t\tRadians To Gradians Converter");
            Input();
            printf("%f Radians Equal To %f Gradians\n", n, n * 63.66198);
            break;

        case 'b':
        case 'B':
            goto First_Quantity_Selection;
            break;

        case 'q':
        case 'Q':
            Main_Option = 'q';
            // quit();
            break;

        default:
            printf("\a\n\n****Please Select Valid Option...****\n\n");
            goto Second_Quantity_Selection_2;
            break;
        }
        break;

        //                +----------------------------------------+
        //                |----------GRADIANS CONVERSION-----------|
        //                +----------------------------------------+
    case '3':
    Second_Quantity_Selection_3:
        printf("\n\nSelect Second Qantity : \n\t\t1. Degrees\n\t\t2. Radians%s\n", angleconv[0]);
        Conv2ndValOpt = getch();
        switch (Conv2ndValOpt)
        {
        case '1':
            printf("\n\n\t\tGradians To Degrees Converter");
            Input();
            printf("%f Gradians Equal To %f Degrees\n", n, n / 1.111111);
            break;

        case '2':
            printf("\n\n\t\tGradians To Radians Converter");
            Input();
            printf("%f Gradians Equal To %f Radians\n", n, n / 63.66198);
            break;

        case 'b':
        case 'B':
            goto First_Quantity_Selection;
            break;

        case 'q':
        case 'Q':
            Main_Option = 'q';
            // quit();
            break;

        default:
            printf("\a\n\n****Please Select Valid Option...****\n\n");
            goto Second_Quantity_Selection_3;
            break;
        }
        break;

    case 'b':
    case 'B':
        main();
        break;

    case 'q':
    case 'Q':
        Main_Option = 'q';
        // quit();
        break;

    default:
        printf("\a\n\n****Please Select Valid Option...****\n\n");
        goto First_Quantity_Selection;
        break;
    }
    return 0;
}