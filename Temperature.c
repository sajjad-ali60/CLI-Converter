#include <stdio.h.>
#include <conio.h>
#include <unistd.h>
float n;  
int main();
float Input();
char Main_Option, Conv1stValOpt, Conv2ndValOpt, *tempconv[] = {/*Temperature Conversions*/ "\n\t\t1. Celsius\n\t\t2. Fahrenheit\n\t\t3. Kelvin" /*Back And Quit*/, "\n\t\tPress 'B' To Go Back.\n\t\tPress 'Q' To Quit."};

    //        +----------------------------------------------------------------------------------------------------+
    //        |----------------------------------------TEMPERATURE CONVERTER---------------------------------------|  
    //        +----------------------------------------------------------------------------------------------------+
int Temperature_Converter()
{
First_Quantity_Selection:
    printf("\t  _________________________________________\n\t /                                         \\\n\t | You Have Selected Temperature Converter |\n\t \\_________________________________________/");

    printf("\n\nSelect First Qantity :%s%s\n", tempconv[0], tempconv[1]);
    Conv1stValOpt = getch();

    switch (Conv1stValOpt)
    {
        //              +-------------------------------------+
        //              |---------CELSIUS CONVERSION----------|
        //              +-------------------------------------+            
    case '1':
    Second_Quantity_Selection_1:

        printf("\n\nSelect Second Qantity : \n\t\t1. Fahrenheit\n\t\t2. Kelvin%s\n", tempconv[1]);
        Conv2ndValOpt = getch();
        switch (Conv2ndValOpt)
        {
        case '1':
            printf("\n\n\t\tCelsius To Fahrenheit Converter");
            Input();
            printf("%f Celsius Equal To %f Fahrenheit\n", n, 1.8 * n + 32);
            break;

        case '2':
            printf("\n\n\t\tCelsius To Kelvin Converter");
            Input();
            printf("%f Celsius Equal To %f Kelvin\n", n, 273.15 + n);
            break;

        case 'b':
        case 'B':
            goto First_Quantity_Selection;
            break;

        case 'q':
        case 'Q':
            // quit();
            Main_Option = 'q';
            break;

        default:
            printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
            goto Second_Quantity_Selection_1;
            break;
        }
        break;

        //              +----------------------------------------+
        //              |---------FAHRENHEIT CONVERSION----------|
        //              +----------------------------------------+         

    case '2':
    Second_Quantity_Selection_2:
        printf("\n\nSelect Second Qantity : \n\t\t1. Celsius\n\t\t2. Kelvin%s\n", tempconv[1]);
        Conv2ndValOpt = getch();
        switch (Conv2ndValOpt)
        {
        case '1':
            printf("\n\n\t\tFahrenheit To Celsius Converter");
            Input();
            printf("%f Fahrenheit Equal To %f Celsius\n", n, (n - 32) / 1.8);
            break;

        case '2':
            printf("\n\n\t\tFahrenheit To Kelvin Converter");
            Input();
            printf("%f Fahrenheit Equal To %f Kelvin\n", n, ((n - 32) * 5 / 9) + 273.15);
            break;

        case 'b':
        case 'B':
            goto First_Quantity_Selection;
            break;

        case 'q':
        case 'Q':
            // quit();
            Main_Option = 'q';
            break;

        default:
            printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
            goto Second_Quantity_Selection_2;
            break;
        }
        break;

        //              +----------------------------------------+
        //              |-----------KELVIN CONVERSION------------|
        //              +----------------------------------------+       

    case '3':
    Second_Quantity_Selection_3:
        printf("\n\nSelect Second Qantity : \n\t\t1. Celsius\n\t\t2. Fahrenheit%s\n", tempconv[1]);
        Conv2ndValOpt = getch();
        switch (Conv2ndValOpt)
        {
        case '1':
            printf("\n\n\t\tKelvin To Celsius Converter");
            Input();
            printf("%f Kelvin Equal To %f Celsius\n", n, n - 273);
            break;

        case '2':
            printf("\n\n\t\tKelvin To Fahrenheit Converter");
            Input();
            printf("%f Kelvin Equal To %f Fahrenheit\n", n, (n - 273.15) * 1.8 + 32);
            break;

        case 'b':
        case 'B':
            goto First_Quantity_Selection;
            break;

        case 'q':
        case 'Q':
            // quit();
            Main_Option = 'q';
            break;

        default:
            printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
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
        // quit();
        Main_Option = 'q';
        break;

    default:
        printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
        goto First_Quantity_Selection;
        break;
    }
    return 0;
}