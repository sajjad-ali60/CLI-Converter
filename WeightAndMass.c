#include <stdio.h.>
#include <conio.h>
#include <unistd.h>
float n;   // stores users inputs
int main();
float Input();
int Conv1stValOpt, Conv2ndValOpt;
char Main_Option, *weightandmassconv[] = {/*Weight And Mass Conversions*/ "\n\t\t1. Carats\n\t\t2. Milligrams\n\t\t3. Centigrams\n\t\t4. Decigrams\n\t\t5. Grams\n\t\t6. Dekagrams\n\t\t7. Hectograms\n\t\t8. Kilograms\n\t\t9. Metric Tonnes", /*Remaining Functions*/ "\n\t\t1. Ounces\n\t\t2. Pounds\n\t\t3. Stone\n\t\t4. Short Tons (US)\n\t\t5. Long Tons (UK)", /*Back And Quit*/ "\n\t\tPress 'B' To Go Back.\n\t\tPress 'Q' To Quit.", /*More Options*/ "\n\t\tPress 'M' For More Conversions."};

    //        +------------------------------------------------------------------------------------------------------+
    //        |----------------------------------------WEIGHT & MASS CONVERTER---------------------------------------|
    //        +------------------------------------------------------------------------------------------------------+
int Weight_And_Mass_Converter()
{
First_Quantity_Selection_1:
    printf("\t  ___________________________________________\n\t /                                           \\\n\t | You Have Selected Weight & Mass Converter |\n\t \\___________________________________________/");

    printf("\n\nSelect First Qantity :%s%s%s\n  >> ", weightandmassconv[0], weightandmassconv[3], weightandmassconv[2]);
    Conv1stValOpt = getch();
    switch (Conv1stValOpt)
    {
    case '1':
    Second_Quantity_Selection_1:

        while (1)
        {
            //                        +-------------------------------------+
            //                        |----------CARATS CONVERSION----------|
            //                        +-------------------------------------+          
            printf("                    \n\n\t\t\t\t\t+-------------------------------------+\n\t\t\t\t\t|----------CARATS CONVERSION----------|\n\t\t\t\t\t+-------------------------------------+ ");
            printf("\n\nSelect Second Qantity : \n\t\t1. Milligrams\n\t\t2. Centigrams\n\t\t3. Decigrams\n\t\t4. Grams\n\t\t5. Dekagrams\n\t\t6. Hectograms\n\t\t7. Kilograms\n\t\t8. Metric Tonnes\n\t\t9. Ounces%s%s\n  >> ", weightandmassconv[2], weightandmassconv[3]);
            Conv2ndValOpt = getch();
            switch (Conv2ndValOpt)
            {
            case '1':
                printf("\n\n\t\tCarats To Milligrams Converter");
                Input();
                printf("%f Carats Equal To %f Milligrams\n", n, n * 200);
                break;

            case '2':
                printf("\n\n\t\tCarats To Centigrams Converter");
                Input();
                printf("%f Carats Equal To %f Centigrams\n", n, n * 20);
                break;

            case '3':
                printf("\n\n\t\tCarats To Decigrams Converter");
                Input();
                printf("%f Carats Equal To %f Decigrams\n", n, n * 2);
                break;

            case '4':
                printf("\n\n\t\tCarats To Grams Converter");
                Input();
                printf("%f Carats Equal To %f Grams\n", n, n * 0.2);
                break;

            case '5':
                printf("\n\n\t\tCarats To Dekagrams Converter");
                Input();
                printf("%f Carats Equal To %f Dekagrams\n", n, n * 0.02);
                break;

            case '6':
                printf("\n\n\t\tCarats To Hectograms Converter");
                Input();
                printf("%.f Carats Equal To %.7f Hectograms\n", n, n * 0.002);
                break;

            case '7':
                printf("\n\n\t\tCarats To Kilograms Converter");
                Input();
                printf("%f Carats Equal To %.7f Kilograms\n", n, n * 0.0002);
                break;

            case '8':
                printf("\n\n\t\tCarats To Metric Tonnes Converter");
                Input();
                printf("%f Carats Equal To %.7f Metric Tonnes\n", n, n * 0.0000002);
                break;

            case '9':
                printf("\n\n\t\tCarats To Ounces Converter");
                Input();
                printf("%f Carats Equal To %.8f Ounces\n", n, n * 0.00705479);
                break;
            Second_Quantity_Selection_1_m:
            case 'm':
            case 'M':
                while (1)
                {
                    printf("                    \n\n\t\t\t\t\t+-------------------------------------+\n\t\t\t\t\t|----------CARATS CONVERSION----------|\n\t\t\t\t\t+-------------------------------------+ ");
                    printf("\n\nSelect Second Qantity : \n\t\t1. Pounds\n\t\t2. Stone\n\t\t3. Short Tons (US)\n\t\t4. Long Tons (UK)%s\n  >> ", weightandmassconv[2]);
                    Conv2ndValOpt = getch();
                    switch (Conv2ndValOpt)
                    {
                    case '1':
                        printf("\n\n\t\tCarats To Pounds Converter");
                        Input();
                        printf("%f Carats Equal To %.9f Pounds\n", n, n * 0.000440925);
                        break;

                    case '2':
                        printf("\n\n\t\tCarats To Stones Converter");
                        Input();
                        printf("%f Carats Equal To %.10f Stones\n", n, n * 0.0000314946);
                        break;

                    case '3':
                        printf("\n\n\t\tCarats To Short Tons (US) Converter");
                        Input();
                        printf("%f Carats Equal To %.10f Short Tons (US)\n", n, n * 0.000000220462262);
                        break;

                    case '4':
                        printf("\n\n\t\tCarats To Long Tons (UK) Converter");
                        Input();
                        printf("%f Carats Equal To %.10f Long Tons (UK)\n", n, n * 0.000000196841306);
                        break;

                    case 'b':
                    case 'B':
                        goto Second_Quantity_Selection_1;
                        break;

                    case 'q':
                    case 'Q':
                        Main_Option = 'q';
                        goto Second_Quantity_Selection_1_1;
                        break;

                    default:
                        printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
                        goto Second_Quantity_Selection_1_m;
                        break;
                    }
                    goto Second_Quantity_Selection_1_m;
                }

                break;

            case 'b':
            case 'B':
                goto First_Quantity_Selection_1;
                break;

            case 'q':
            case 'Q':
                // quit();
                Main_Option = 'q';
                goto Second_Quantity_Selection_1_1;
                break;

            default:
                printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
                goto Second_Quantity_Selection_1;
                break;
            }
        }

    Second_Quantity_Selection_1_1:

        break;

    case '2':
    Second_Quantity_Selection_2:
        while (1)
        {
            //                        +----------------------------------------+
            //                        |----------MILLIGRAMS CONVERSION---------|
            //                        +----------------------------------------+         
            printf("                    \n\n\t\t\t\t\t+----------------------------------------+\n\t\t\t\t\t|----------Milligrams CONVERSION----------|\n\t\t\t\t\t+----------------------------------------+ ");
            printf("\n\nSelect Second Qantity : \n\t\t1. Carats\n\t\t2. Centigrams\n\t\t3. Decigrams\n\t\t4. Grams\n\t\t5. Dekagrams\n\t\t6. Hectograms\n\t\t7. Kilograms\n\t\t8. Metric Tonnes\n\t\t9. Ounces%s%s\n  >> ", weightandmassconv[2], weightandmassconv[3]);
            Conv2ndValOpt = getch();
            switch (Conv2ndValOpt)
            {
            case '1':
                printf("\n\n\t\tMilligrams To Carats Converter");
                Input();
                printf("%f Milligrams Equal To %f Carats\n", n, n * 0.005);
                break;

            case '2':
                printf("\n\n\t\tMilligrams To Centigrams Converter");
                Input();
                printf("%f Milligrams Equal To %f Centigrams\n", n, n * 0.1);
                break;

            case '3':
                printf("\n\n\t\tMilligrams To Decigrams Converter");
                Input();
                printf("%f Milligrams Equal To %f Decigrams\n", n, n * 0.01);
                break;

            case '4':
                printf("\n\n\t\tMilligrams To Grams Converter");
                Input();
                printf("%f Milligrams Equal To %f Grams\n", n, n * 0.001);
                break;

            case '5':
                printf("\n\n\t\tMilligrams To Dekagrams Converter");
                Input();
                printf("%f Milligrams Equal To %f Dekagrams\n", n, n * 0.0001);
                break;

            case '6':
                printf("\n\n\t\tMilligrams To Hectograms Converter");
                Input();
                printf("%.f Milligrams Equal To %.7f Hectograms\n", n, n * 0.00001);
                break;

            case '7':
                printf("\n\n\t\tMilligrams To Kilograms Converter");
                Input();
                printf("%f Milligrams Equal To %.8f Kilograms\n", n, n * 0.000001);
                break;

            case '8':
                printf("\n\n\t\tMilligrams To Metric Tonnes Converter");
                Input();
                printf("%f Milligrams Equal To %.9f Metric Tonnes\n", n, n * 0.000000001);
                break;

            case '9':
                printf("\n\n\t\tMilligrams To Ounces Converter");
                Input();
                printf("%f Milligrams Equal To %.10f Ounces\n", n, n * 0.000035274);
                break;
            Second_Quantity_Selection_2_m:
            case 'm':
            case 'M':
                while (1)
                {
                    printf("                    \n\n\t\t\t\t\t+----------------------------------------+\n\t\t\t\t\t|----------Milligrams CONVERSION----------|\n\t\t\t\t\t+----------------------------------------+ ");
                    printf("\n\nSelect Second Qantity : \n\t\t1. Pounds\n\t\t2. Stone\n\t\t3. Short Tons (US)\n\t\t4. Long Tons (UK)%s\n  >> ", weightandmassconv[2]);
                    Conv2ndValOpt = getch();
                    switch (Conv2ndValOpt)
                    {
                    case '1':
                        printf("\n\n\t\tMilligrams To Pounds Converter");
                        Input();
                        printf("%f Milligrams Equal To %.9f Pounds\n", n, n * 0.00000220462);
                        break;

                    case '2':
                        printf("\n\n\t\tMilligrams To Stones Converter");
                        Input();
                        printf("%f Milligrams Equal To %.10f Stones\n", n, n * 0.000000157473044);
                        break;

                    case '3':
                        printf("\n\n\t\tMilligrams To Short Tons (US) Converter");
                        Input();
                        printf("%f Milligrams Equal To %.12f Short Tons (US)\n", n, n * 0.000000001102311);
                        break;

                    case '4':
                        printf("\n\n\t\tMilligrams To Long Tons (UK) Converter");
                        Input();
                        printf("%f Milligrams Equal To %.13f Long Tons (UK)\n", n, n * 0.000000000984207);
                        break;

                    case 'b':
                    case 'B':
                        goto Second_Quantity_Selection_2;
                        break;

                    case 'q':
                    case 'Q':
                        Main_Option = 'q';
                        goto Second_Quantity_Selection_2_1;
                        break;

                    default:
                        printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
                        goto Second_Quantity_Selection_2_m;
                        break;
                    }
                    goto Second_Quantity_Selection_2_m;
                }

                break;

            case 'b':
            case 'B':
                goto First_Quantity_Selection_1;
                break;

            case 'q':
            case 'Q':
                // quit();
                Main_Option = 'q';
                goto Second_Quantity_Selection_2_1;
                break;

            default:
                printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
                goto Second_Quantity_Selection_2;
                break;
            }
        }
    Second_Quantity_Selection_2_1:
        break;

    case '3':
    Second_Quantity_Selection_3:
        while (1)
        {
            //                        +-----------------------------------------+
            //                        |----------CENTIGRAMS CONVERSION----------|
            //                        +-----------------------------------------+           
            printf("                    \n\n\t\t\t\t\t+-----------------------------------------+\n\t\t\t\t\t|----------CENTIGRAMS CONVERSION----------|\n\t\t\t\t\t+-----------------------------------------+ ");
            printf("\n\nSelect Second Qantity : \n\t\t1. Carats\n\t\t2. Milligrams\n\t\t3. Decigrams\n\t\t4. Grams\n\t\t5. Dekagrams\n\t\t6. Hectograms\n\t\t7. Kilograms\n\t\t8. Metric Tonnes\n\t\t9. Ounces%s%s\n  >> ", weightandmassconv[2], weightandmassconv[3]);
            Conv2ndValOpt = getch();
            switch (Conv2ndValOpt)
            {
            case '1':
                printf("\n\n\t\tCentigrams To Carats Converter");
                Input();
                printf("%f Centigrams Equal To %f Carats\n", n, n * 0.05);
                break;

            case '2':
                printf("\n\n\t\tCentigrams To Milligrams Converter");
                Input();
                printf("%f Centigrams Equal To %f Milligrams\n", n, n * 10);
                break;

            case '3':
                printf("\n\n\t\tCentigrams To Decigrams Converter");
                Input();
                printf("%f Centigrams Equal To %f Decigrams\n", n, n * 0.1);
                break;

            case '4':
                printf("\n\n\t\tCentigrams To Grams Converter");
                Input();
                printf("%f Centigrams Equal To %f Grams\n", n, n * 0.01);
                break;

            case '5':
                printf("\n\n\t\tCentigrams To Dekagrams Converter");
                Input();
                printf("%f Centigrams Equal To %f Dekagrams\n", n, n * 0.001);
                break;

            case '6':
                printf("\n\n\t\tCentigrams To Hectograms Converter");
                Input();
                printf("%.f Centigrams Equal To %.6f Hectograms\n", n, n * 0.0001);
                break;

            case '7':
                printf("\n\n\t\tCentigrams To Kilograms Converter");
                Input();
                printf("%f Centigrams Equal To %.7f Kilograms\n", n, n * 0.00001);
                break;

            case '8':
                printf("\n\n\t\tCentigrams To Metric Tonnes Converter");
                Input();
                printf("%f Centigrams Equal To %.8f Metric Tonnes\n", n, n * 0.00000001);
                break;

            case '9':
                printf("\n\n\t\tCentigrams To Ounces Converter");
                Input();
                printf("%f Centigrams Equal To %.9f Ounces\n", n, n * 0.00035274);
                break;
            Second_Quantity_Selection_3_m:
            case 'm':
            case 'M':
                while (1)
                {
                    printf("                    \n\n\t\t\t\t\t+-----------------------------------------+\n\t\t\t\t\t|----------CENTIGRAMS CONVERSION----------|\n\t\t\t\t\t+-----------------------------------------+ ");
                    printf("\n\nSelect Second Qantity : \n\t\t1. Pounds\n\t\t2. Stone\n\t\t3. Short Tons (US)\n\t\t4. Long Tons (UK)%s\n  >> ", weightandmassconv[2]);
                    Conv2ndValOpt = getch();
                    switch (Conv2ndValOpt)
                    {
                    case '1':
                        printf("\n\n\t\tCentigrams To Pounds Converter");
                        Input();
                        printf("%f Centigrams Equal To %.10f Pounds\n", n, n * 0.0000220462);
                        break;

                    case '2':
                        printf("\n\n\t\tCentigrams To Stones Converter");
                        Input();
                        printf("%f Centigrams Equal To %.11f Stones\n", n, n * 0.00000157473044);
                        break;

                    case '3':
                        printf("\n\n\t\tCentigrams To Short Tons (US) Converter");
                        Input();
                        printf("%f Centigrams Equal To %.13f Short Tons (US)\n", n, n * 0.000000011023113);
                        break;

                    case '4':
                        printf("\n\n\t\tCentigrams To Long Tons (UK) Converter");
                        Input();
                        printf("%f Centigrams Equal To %.12f Long Tons (UK)\n", n, n * 0.000000009842065);
                        break;

                    case 'b':
                    case 'B':
                        goto Second_Quantity_Selection_3;
                        break;

                    case 'q':
                    case 'Q':
                        Main_Option = 'q';
                        goto Second_Quantity_Selection_3_1;
                        break;

                    default:
                        printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
                        goto Second_Quantity_Selection_3_m;
                        break;
                    }
                    goto Second_Quantity_Selection_3_m;
                }

                break;

            case 'b':
            case 'B':
                goto First_Quantity_Selection_1;
                break;

            case 'q':
            case 'Q':
                // quit();
                Main_Option = 'q';
                goto Second_Quantity_Selection_3_1;
                break;

            default:
                printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
                goto Second_Quantity_Selection_3;
                break;
            }
        }

    Second_Quantity_Selection_3_1:
        break;

    case '4':
    Second_Quantity_Selection_4:
        while (1)
        {
            //                        +----------------------------------------+
            //                        |----------DECIGRAMS CONVERSION----------|
            //                        +----------------------------------------+          
            printf("                    \n\n\t\t\t\t\t+----------------------------------------+\n\t\t\t\t\t|----------DECIGRAMS CONVERSION----------|\n\t\t\t\t\t+----------------------------------------+ ");
            printf("\n\nSelect Second Qantity : \n\t\t1. Carats\n\t\t2. Milligrams\n\t\t3. Centigrams\n\t\t4. Grams\n\t\t5. Dekagrams\n\t\t6. Hectograms\n\t\t7. Kilograms\n\t\t8. Metric Tonnes\n\t\t9. Ounces%s%s\n  >> ", weightandmassconv[2], weightandmassconv[3]);
            Conv2ndValOpt = getch();
            switch (Conv2ndValOpt)
            {
            case '1':
                printf("\n\n\t\tDecigrams To Carats Converter");
                Input();
                printf("%f Decigrams Equal To %f Carats\n", n, n * 0.5);
                break;

            case '2':
                printf("\n\n\t\tDecigrams To Milligrams Converter");
                Input();
                printf("%f Decigrams Equal To %f Milligrams\n", n, n * 100);
                break;

            case '3':
                printf("\n\n\t\tDecigrams To Centigram Converter");
                Input();
                printf("%f Decigrams Equal To %f Centigrams\n", n, n * 10);
                break;

            case '4':
                printf("\n\n\t\tDecigrams To Grams Converter");
                Input();
                printf("%f Decigrams Equal To %f Grams\n", n, n * 0.1);
                break;

            case '5':
                printf("\n\n\t\tDecigrams To Dekagrams Converter");
                Input();
                printf("%f Decigrams Equal To %f Dekagrams\n", n, n * 0.01);
                break;

            case '6':
                printf("\n\n\t\tDecigrams To Hectograms Converter");
                Input();
                printf("%.f Decigrams Equal To %.6f Hectograms\n", n, n * 0.001);
                break;

            case '7':
                printf("\n\n\t\tDecigrams To Kilograms Converter");
                Input();
                printf("%f Decigrams Equal To %.7f Kilograms\n", n, n * 0.0001);
                break;

            case '8':
                printf("\n\n\t\tDecigrams To Metric Tonnes Converter");
                Input();
                printf("%f Decigrams Equal To %.8f Metric Tonnes\n", n, n * 0.0000001);
                break;

            case '9':
                printf("\n\n\t\tDecigrams To Ounces Converter");
                Input();
                printf("%f Decigrams Equal To %.9f Ounces\n", n, n * 0.0035274);
                break;
            Second_Quantity_Selection_4_m:
            case 'm':
            case 'M':
                while (1)
                {
                    printf("                    \n\n\t\t\t\t\t+-----------------------------------------+\n\t\t\t\t\t|----------CENTIGRAMS CONVERSION----------|\n\t\t\t\t\t+-----------------------------------------+ ");
                    printf("\n\nSelect Second Qantity : \n\t\t1. Pounds\n\t\t2. Stone\n\t\t3. Short Tons (US)\n\t\t4. Long Tons (UK)%s\n  >> ", weightandmassconv[2]);
                    Conv2ndValOpt = getch();
                    switch (Conv2ndValOpt)
                    {
                    case '1':
                        printf("\n\n\t\tDecigrams To Pounds Converter");
                        Input();
                        printf("%f Decigrams Equal To %.10f Pounds\n", n, n * 0.000220462);
                        break;

                    case '2':
                        printf("\n\n\t\tDecigrams To Stones Converter");
                        Input();
                        printf("%f Decigrams Equal To %.11f Stones\n", n, n * 0.0000157473044);
                        break;

                    case '3':
                        printf("\n\n\t\tDecigrams To Short Tons (US) Converter");
                        Input();
                        printf("%f Decigrams Equal To %.13f Short Tons (US)\n", n, n * 0.000000110231131);
                        break;

                    case '4':
                        printf("\n\n\t\tDecigrams To Long Tons (UK) Converter");
                        Input();
                        printf("%f Decigrams Equal To %.12f Long Tons (UK)\n", n, n * 0.000000098420653);
                        break;

                    case 'b':
                    case 'B':
                        goto Second_Quantity_Selection_4;
                        break;

                    case 'q':
                    case 'Q':
                        Main_Option = 'q';
                        goto Second_Quantity_Selection_4_1;
                        break;

                    default:
                        printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
                        goto Second_Quantity_Selection_4_m;
                        break;
                    }
                    goto Second_Quantity_Selection_4_m;
                }

                break;

            case 'b':
            case 'B':
                goto First_Quantity_Selection_1;
                break;

            case 'q':
            case 'Q':
                // quit();
                Main_Option = 'q';
                goto Second_Quantity_Selection_4_1;
                break;

            default:
                printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
                goto Second_Quantity_Selection_4;
                break;
            }
        }

    Second_Quantity_Selection_4_1:
        break;

    case '5':
    Second_Quantity_Selection_5:
        while (1)
        {
            //                        +------------------------------------+
            //                        |----------GRAMS CONVERSION----------|
            //                        +------------------------------------+        
            printf("                    \n\n\t\t\t\t\t+------------------------------------+\n\t\t\t\t\t|----------GRAMS CONVERSION----------|\n\t\t\t\t\t+------------------------------------+ ");
            printf("\n\nSelect Second Qantity : \n\t\t1. Carats\n\t\t2. Milligrams\n\t\t3. Centigrams\n\t\t4. Decigrams\n\t\t5. Dekagrams\n\t\t6. Hectograms\n\t\t7. Kilograms\n\t\t8. Metric Tonnes\n\t\t9. Ounces%s%s\n  >> ", weightandmassconv[2], weightandmassconv[3]);
            Conv2ndValOpt = getch();
            switch (Conv2ndValOpt)
            {
            case '1':
                printf("\n\n\t\tGrams To Carats Converter");
                Input();
                printf("%f Grams Equal To %f Carats\n", n, n * 5);
                break;

            case '2':
                printf("\n\n\t\tGrams To Milligrams Converter");
                Input();
                printf("%f Grams Equal To %f Milligrams\n", n, n * 1000);
                break;

            case '3':
                printf("\n\n\t\tGrams To Centigram Converter");
                Input();
                printf("%f Grams Equal To %f Centigrams\n", n, n * 100);
                break;

            case '4':
                printf("\n\n\t\tGrams To Decigrams Converter");
                Input();
                printf("%f Grams Equal To %f Decigrams\n", n, n * 10);
                break;

            case '5':
                printf("\n\n\t\tGrams To Dekagrams Converter");
                Input();
                printf("%f Grams Equal To %f Dekagrams\n", n, n * 0.1);
                break;

            case '6':
                printf("\n\n\t\tGrams To Hectograms Converter");
                Input();
                printf("%.f Grams Equal To %f Hectograms\n", n, n * 0.01);
                break;

            case '7':
                printf("\n\n\t\tGrams To Kilograms Converter");
                Input();
                printf("%f Grams Equal To %f Kilograms\n", n, n * 0.001);
                break;

            case '8':
                printf("\n\n\t\tGrams To Metric Tonnes Converter");
                Input();
                printf("%f Grams Equal To %f Metric Tonnes\n", n, n * 0.000001);
                break;

            case '9':
                printf("\n\n\t\tGrams To Ounces Converter");
                Input();
                printf("%f Grams Equal To %f Ounces\n", n, n * 0.035274);
                break;
            Second_Quantity_Selection_5_m:
            case 'm':
            case 'M':
                while (1)
                {
                    printf("                    \n\n\t\t\t\t\t+------------------------------------+\n\t\t\t\t\t|----------GRAMS CONVERSION----------|\n\t\t\t\t\t+------------------------------------+ ");
                    printf("\n\nSelect Second Qantity : \n\t\t1. Pounds\n\t\t2. Stone\n\t\t3. Short Tons (US)\n\t\t4. Long Tons (UK)%s\n  >> ", weightandmassconv[2]);
                    Conv2ndValOpt = getch();
                    switch (Conv2ndValOpt)
                    {
                    case '1':
                        printf("\n\n\t\tGrams To Pounds Converter");
                        Input();
                        printf("%f Grams Equal To %.8f Pounds\n", n, n * 0.00220462);
                        break;

                    case '2':
                        printf("\n\n\t\tGrams To Stones Converter");
                        Input();
                        printf("%f Grams Equal To %.9f Stones\n", n, n * 0.000157473044);
                        break;

                    case '3':
                        printf("\n\n\t\tGrams To Short Tons (US) Converter");
                        Input();
                        printf("%f Grams Equal To %.10f Short Tons (US)\n", n, n * 0.00000110231131);
                        break;

                    case '4':
                        printf("\n\n\t\tGrams To Long Tons (UK) Converter");
                        Input();
                        printf("%f Grams Equal To %.12f Long Tons (UK)\n", n, n * 0.000000984206528);
                        break;

                    case 'b':
                    case 'B':
                        goto Second_Quantity_Selection_5;
                        break;

                    case 'q':
                    case 'Q':
                        Main_Option = 'q';
                        goto Second_Quantity_Selection_5_1;
                        break;

                    default:
                        printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
                        goto Second_Quantity_Selection_5_m;
                        break;
                    }
                    goto Second_Quantity_Selection_5_m;
                }

                break;

            case 'b':
            case 'B':
                goto First_Quantity_Selection_1;
                break;

            case 'q':
            case 'Q':
                // quit();
                Main_Option = 'q';
                goto Second_Quantity_Selection_5_1;
                break;

            default:
                printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
                goto Second_Quantity_Selection_5;
                break;
            }
        }

    Second_Quantity_Selection_5_1:
        break;

    case '6':
    Second_Quantity_Selection_6:
        while (1)
        {
            //                        +----------------------------------------+
            //                        |----------DEKAGRAMS CONVERSION----------|
            //                        +----------------------------------------+            
            printf("                    \n\n\t\t\t\t\t+----------------------------------------+\n\t\t\t\t\t|----------DEKAGRAMS CONVERSION----------|\n\t\t\t\t\t+----------------------------------------+ ");
            printf("\n\nSelect Second Qantity : \n\t\t1. Carats\n\t\t2. Milligrams\n\t\t3. Centigrams\n\t\t4. Decigrams\n\t\t5. Grams\n\t\t6. Hectograms\n\t\t7. Kilograms\n\t\t8. Metric Tonnes\n\t\t9. Ounces%s%s\n  >> ", weightandmassconv[2], weightandmassconv[3]);
            Conv2ndValOpt = getch();
            switch (Conv2ndValOpt)
            {
            case '1':
                printf("\n\n\t\tDekagrams To Carats Converter");
                Input();
                printf("%f Dekagrams Equal To %f Carats\n", n, n * 50);
                break;

            case '2':
                printf("\n\n\t\tDekagrams To Milligrams Converter");
                Input();
                printf("%f Dekagrams Equal To %f Milligrams\n", n, n * 10000);
                break;

            case '3':
                printf("\n\n\t\tDekagrams To Centigrams Converter");
                Input();
                printf("%f Dekagrams Equal To %f Centigrams\n", n, n * 1000);
                break;

            case '4':
                printf("\n\n\t\tDekagrams To Decigrams Converter");
                Input();
                printf("%f Dekagrams Equal To %f Decigrams\n", n, n * 100);
                break;

            case '5':
                printf("\n\n\t\tDekagrams To Grams Converter");
                Input();
                printf("%f Dekagrams Equal To %f Grams\n", n, n * 10);
                break;

            case '6':
                printf("\n\n\t\tDekagrams To Hectograms Converter");
                Input();
                printf("%.f Dekagrams Equal To %f Hectograms\n", n, n * 0.1);
                break;

            case '7':
                printf("\n\n\t\tDekagrams To Kilograms Converter");
                Input();
                printf("%f Dekagrams Equal To %f Kilograms\n", n, n * 0.01);
                break;

            case '8':
                printf("\n\n\t\tDekagrams To Metric Tonnes Converter");
                Input();
                printf("%f Dekagrams Equal To %f Metric Tonnes\n", n, n * 0.00001);
                break;

            case '9':
                printf("\n\n\t\tDekagrams To Ounces Converter");
                Input();
                printf("%f Dekagrams Equal To %f Ounces\n", n, n * 0.35274);
                break;
            Second_Quantity_Selection_6_m:
            case 'm':
            case 'M':
                while (1)
                {
                    printf("                    \n\n\t\t\t\t\t+----------------------------------------+\n\t\t\t\t\t|----------DEKAGRAMS CONVERSION----------|\n\t\t\t\t\t+----------------------------------------+ ");
                    printf("\n\nSelect Second Qantity : \n\t\t1. Pounds\n\t\t2. Stone\n\t\t3. Short Tons (US)\n\t\t4. Long Tons (UK)%s\n  >> ", weightandmassconv[2]);
                    Conv2ndValOpt = getch();
                    switch (Conv2ndValOpt)
                    {
                    case '1':
                        printf("\n\n\t\tDekagrams To Pounds Converter");
                        Input();
                        printf("%f Dekagrams Equal To %.8f Pounds\n", n, n * 0.0220462);
                        break;

                    case '2':
                        printf("\n\n\t\tDekagrams To Stones Converter");
                        Input();
                        printf("%f Dekagrams Equal To %.9f Stones\n", n, n * 0.00157473044);
                        break;

                    case '3':
                        printf("\n\n\t\tDekagrams To Short Tons (US) Converter");
                        Input();
                        printf("%f Dekagrams Equal To %.10f Short Tons (US)\n", n, n * 0.0000110231131);
                        break;

                    case '4':
                        printf("\n\n\t\tDekagrams To Long Tons (UK) Converter");
                        Input();
                        printf("%f Dekagrams Equal To %.12f Long Tons (UK)\n", n, n * 0.00000984206528);
                        break;

                    case 'b':
                    case 'B':
                        goto Second_Quantity_Selection_6;
                        break;

                    case 'q':
                    case 'Q':
                        Main_Option = 'q';
                        goto Second_Quantity_Selection_6_1;
                        break;

                    default:
                        printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
                        goto Second_Quantity_Selection_6_m;
                        break;
                    }
                    goto Second_Quantity_Selection_6_m;
                }

                break;

            case 'b':
            case 'B':
                goto First_Quantity_Selection_1;
                break;

            case 'q':
            case 'Q':
                // quit();
                Main_Option = 'q';
                goto Second_Quantity_Selection_6_1;
                break;

            default:
                printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
                goto Second_Quantity_Selection_6;
                break;
            }
        }

    Second_Quantity_Selection_6_1:
        break;

    case '7':
    Second_Quantity_Selection_7:
        while (1)
        {
            //                        +----------------------------------------+
            //                        |----------HECTOGRAMS CONVERSION---------|
            //                        +----------------------------------------+           
            printf("                    \n\n\t\t\t\t\t+----------------------------------------+\n\t\t\t\t\t|----------HECTOGRAMS CONVERSION---------|\n\t\t\t\t\t+----------------------------------------+ ");
            printf("\n\nSelect Second Qantity : \n\t\t1. Carats\n\t\t2. Milligrams\n\t\t3. Centigrams\n\t\t4. Decigrams\n\t\t5. Grams\n\t\t6. Dekagrams\n\t\t7. Kilograms\n\t\t8. Metric Tonnes\n\t\t9. Ounces%s%s\n  >> ", weightandmassconv[2], weightandmassconv[3]);
            Conv2ndValOpt = getch();
            switch (Conv2ndValOpt)
            {
            case '1':
                printf("\n\n\t\tHectograms To Carats Converter");
                Input();
                printf("%f Hectograms Equal To %f Carats\n", n, n * 500);
                break;

            case '2':
                printf("\n\n\t\tHectograms To Milligrams Converter");
                Input();
                printf("%f Hectograms Equal To %f Milligrams\n", n, n * 100000);
                break;

            case '3':
                printf("\n\n\t\tHectograms To Centigrams Converter");
                Input();
                printf("%f Hectograms Equal To %f Centigrams\n", n, n * 10000);
                break;

            case '4':
                printf("\n\n\t\tHectograms To Decigrams Converter");
                Input();
                printf("%f Hectograms Equal To %f Decigrams\n", n, n * 1000);
                break;

            case '5':
                printf("\n\n\t\tHectograms To Grams Converter");
                Input();
                printf("%f Hectograms Equal To %f Grams\n", n, n * 100);
                break;

            case '6':
                printf("\n\n\t\tHectograms To Dekagrams Converter");
                Input();
                printf("%.f Hectograms Equal To %f Dekagrams\n", n, n * 10);
                break;

            case '7':
                printf("\n\n\t\tHectograms To Kilograms Converter");
                Input();
                printf("%f Hectograms Equal To %f Kilograms\n", n, n * 0.1);
                break;

            case '8':
                printf("\n\n\t\tHectograms To Metric Tonnes Converter");
                Input();
                printf("%f Hectograms Equal To %f Metric Tonnes\n", n, n * 0.0001);
                break;

            case '9':
                printf("\n\n\t\tHectograms To Ounces Converter");
                Input();
                printf("%f Hectograms Equal To %f Ounces\n", n, n * 3.527396);
                break;
            Second_Quantity_Selection_7_m:
            case 'm':
            case 'M':
                while (1)
                {
                    printf("                    \n\n\t\t\t\t\t+----------------------------------------+\n\t\t\t\t\t|----------HECTOGRAMS CONVERSION---------|\n\t\t\t\t\t+----------------------------------------+ ");
                    printf("\n\nSelect Second Qantity : \n\t\t1. Pounds\n\t\t2. Stone\n\t\t3. Short Tons (US)\n\t\t4. Long Tons (UK)%s\n  >> ", weightandmassconv[2]);
                    Conv2ndValOpt = getch();
                    switch (Conv2ndValOpt)
                    {
                    case '1':
                        printf("\n\n\t\tHectograms To Pounds Converter");
                        Input();
                        printf("%f Hectograms Equal To %.8f Pounds\n", n, n * 0.220462);
                        break;

                    case '2':
                        printf("\n\n\t\tHectograms To Stones Converter");
                        Input();
                        printf("%f Hectograms Equal To %.9f Stones\n", n, n * 0.0157473044);
                        break;

                    case '3':
                        printf("\n\n\t\tHectograms To Short Tons (US) Converter");
                        Input();
                        printf("%f Hectograms Equal To %.10f Short Tons (US)\n", n, n * 0.000110231131);
                        break;

                    case '4':
                        printf("\n\n\t\tHectograms To Long Tons (UK) Converter");
                        Input();
                        printf("%f Hectograms Equal To %.12f Long Tons (UK)\n", n, n * 0.0000984206528);
                        break;

                    case 'b':
                    case 'B':
                        goto Second_Quantity_Selection_7;
                        break;

                    case 'q':
                    case 'Q':
                        Main_Option = 'q';
                        goto Second_Quantity_Selection_7_1;
                        break;

                    default:
                        printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
                        goto Second_Quantity_Selection_7_m;
                        break;
                    }
                    goto Second_Quantity_Selection_7_m;
                }

                break;

            case 'b':
            case 'B':
                goto First_Quantity_Selection_1;
                break;

            case 'q':
            case 'Q':
                // quit();
                Main_Option = 'q';
                goto Second_Quantity_Selection_7_1;
                break;

            default:
                printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
                goto Second_Quantity_Selection_7;
                break;
            }
        }

    Second_Quantity_Selection_7_1:
        break;

    case '8':
    Second_Quantity_Selection_8:
        while (1)
        {
           //                        +----------------------------------------+
           //                        |----------KILOGRAMS CONVERSION----------|
           //                        +----------------------------------------+           
            printf("                    \n\n\t\t\t\t\t+----------------------------------------+\n\t\t\t\t\t|----------KILOGRAMS CONVERSION----------|\n\t\t\t\t\t+----------------------------------------+ ");
            printf("\n\nSelect Second Qantity : \n\t\t1. Carats\n\t\t2. Milligrams\n\t\t3. Centigrams\n\t\t4. Decigrams\n\t\t5. Grams\n\t\t6. Dekagrams\n\t\t7. Hectograms\n\t\t8. Metric Tonnes\n\t\t9. Ounces%s%s\n  >> ", weightandmassconv[2], weightandmassconv[3]);
            Conv2ndValOpt = getch();
            switch (Conv2ndValOpt)
            {
            case '1':
                printf("\n\n\t\tKilograms To Carats Converter");
                Input();
                printf("%f Kilograms Equal To %f Carats\n", n, n * 5000);
                break;

            case '2':
                printf("\n\n\t\tKilograms To Milligrams Converter");
                Input();
                printf("%f Kilograms Equal To %f Milligrams\n", n, n * 1000000);
                break;

            case '3':
                printf("\n\n\t\tKilograms To Centigrams Converter");
                Input();
                printf("%f Kilograms Equal To %f Centigrams\n", n, n * 100000);
                break;

            case '4':
                printf("\n\n\t\tKilograms To Decigrams Converter");
                Input();
                printf("%f Kilograms Equal To %f Decigrams\n", n, n * 10000);
                break;

            case '5':
                printf("\n\n\t\tKilograms To Grams Converter");
                Input();
                printf("%f Kilograms Equal To %f Grams\n", n, n * 1000);
                break;

            case '6':
                printf("\n\n\t\tKilograms To Dekagrams Converter");
                Input();
                printf("%.f Kilograms Equal To %f Dekagrams\n", n, n * 100);
                break;

            case '7':
                printf("\n\n\t\tKilograms To Hectograms Converter");
                Input();
                printf("%f Kilograms Equal To %f Hectograms\n", n, n * 10);
                break;

            case '8':
                printf("\n\n\t\tKilograms To Metric Tonnes Converter");
                Input();
                printf("%f Kilograms Equal To %f Metric Tonnes\n", n, n * 0.001);
                break;

            case '9':
                printf("\n\n\t\tKilograms To Ounces Converter");
                Input();
                printf("%f Kilograms Equal To %f Ounces\n", n, n * 35.27396);
                break;
            Second_Quantity_Selection_8_m:
            case 'm':
            case 'M':
                while (1)
                {
                    printf("                    \n\n\t\t\t\t\t+----------------------------------------+\n\t\t\t\t\t|----------KILOGRAMS CONVERSION----------|\n\t\t\t\t\t+----------------------------------------+ ");
                    printf("\n\nSelect Second Qantity : \n\t\t1. Pounds\n\t\t2. Stone\n\t\t3. Short Tons (US)\n\t\t4. Long Tons (UK)%s\n  >> ", weightandmassconv[2]);
                    Conv2ndValOpt = getch();
                    switch (Conv2ndValOpt)
                    {
                    case '1':
                        printf("\n\n\t\tKilograms To Pounds Converter");
                        Input();
                        printf("%f Kilograms Equal To %.8f Pounds\n", n, n * 2.204623);
                        break;

                    case '2':
                        printf("\n\n\t\tKilograms To Stones Converter");
                        Input();
                        printf("%f Kilograms Equal To %.9f Stones\n", n, n * 0.157473044);
                        break;

                    case '3':
                        printf("\n\n\t\tKilograms To Short Tons (US) Converter");
                        Input();
                        printf("%f Kilograms Equal To %.10f Short Tons (US)\n", n, n * 0.00110231131);
                        break;

                    case '4':
                        printf("\n\n\t\tKilograms To Long Tons (UK) Converter");
                        Input();
                        printf("%f Kilograms Equal To %.12f Long Tons (UK)\n", n, n * 0.000984206528);
                        break;

                    case 'b':
                    case 'B':
                        goto Second_Quantity_Selection_8;
                        break;

                    case 'q':
                    case 'Q':
                        Main_Option = 'q';
                        goto Second_Quantity_Selection_8_1;
                        break;

                    default:
                        printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
                        goto Second_Quantity_Selection_8_m;
                        break;
                    }
                    goto Second_Quantity_Selection_8_m;
                }

                break;

            case 'b':
            case 'B':
                goto First_Quantity_Selection_1;
                break;

            case 'q':
            case 'Q':
                // quit();
                Main_Option = 'q';
                goto Second_Quantity_Selection_8_1;
                break;

            default:
                printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
                goto Second_Quantity_Selection_8;
                break;
            }
        }

    Second_Quantity_Selection_8_1:
        break;
    case '9':
    Second_Quantity_Selection_9:
        while (1)
        {
            //                        +------------------------------------------+
            //                        |---------METRIC TONNES CONVERSION---------|
            //                        +------------------------------------------+          
            printf("                    \n\n\t\t\t\t\t+------------------------------------------+\n\t\t\t\t\t|---------METRIC TONNES CONVERSION---------|\n\t\t\t\t\t+------------------------------------------+ ");
            printf("\n\nSelect Second Qantity : \n\t\t1. Carats\n\t\t2. Milligrams\n\t\t3. Centigrams\n\t\t4. Decigrams\n\t\t5. Grams\n\t\t6. Dekagrams\n\t\t7. Hectograms\n\t\t8. Kilograms\n\t\t9. Ounces%s%s\n  >> ", weightandmassconv[2], weightandmassconv[3]);
            Conv2ndValOpt = getch();
            switch (Conv2ndValOpt)
            {
            case '1':
                printf("\n\n\t\tMetric Tonnes To Carats Converter");
                Input();
                printf("%f Metric Tonnes Equal To %f Carats\n", n, n * 5000000);
                break;

            case '2':
                printf("\n\n\t\tMetric Tonnes To Milligrams Converter");
                Input();
                printf("%f Metric Tonnes Equal To %f Milligrams\n", n, n * 1000000000);
                break;

            case '3':
                printf("\n\n\t\tMetric Tonnes To Centigrams Converter");
                Input();
                printf("%f Metric Tonnes Equal To %f Centigrams\n", n, n * 100000000);
                break;

            case '4':
                printf("\n\n\t\tMetric Tonnes To Decigrams Converter");
                Input();
                printf("%f Metric Tonnes Equal To %f Decigrams\n", n, n * 10000000);
                break;

            case '5':
                printf("\n\n\t\tMetric Tonnes To Grams Converter");
                Input();
                printf("%f Metric Tonnes Equal To %f Grams\n", n, n * 1000000);
                break;

            case '6':
                printf("\n\n\t\tMetric Tonnes To Dekagrams Converter");
                Input();
                printf("%.f Metric Tonnes Equal To %f Dekagrams\n", n, n * 100000);
                break;

            case '7':
                printf("\n\n\t\tMetric Tonnes To Hectograms Converter");
                Input();
                printf("%f Metric Tonnes Equal To %f Hectograms\n", n, n * 10000);
                break;

            case '8':
                printf("\n\n\t\tMetric Tonnes To Kilograms Converter");
                Input();
                printf("%f Metric Tonnes Equal To %f Kilograms\n", n, n * 1000);
                break;

            case '9':
                printf("\n\n\t\tMetric Tonnes To Ounces Converter");
                Input();
                printf("%f Metric Tonnes Equal To %f Ounces\n", n, n * 35273.96);
                break;
            Second_Quantity_Selection_9_m:
            case 'm':
            case 'M':
                while (1)
                {
                    printf("                    \n\n\t\t\t\t\t+------------------------------------------+\n\t\t\t\t\t|---------METRIC TONNES CONVERSION---------|\n\t\t\t\t\t+------------------------------------------+ ");
                    printf("\n\nSelect Second Qantity : \n\t\t1. Pounds\n\t\t2. Stone\n\t\t3. Short Tons (US)\n\t\t4. Long Tons (UK)%s\n  >> ", weightandmassconv[2]);
                    Conv2ndValOpt = getch();
                    switch (Conv2ndValOpt)
                    {
                    case '1':
                        printf("\n\n\t\tMetric Tonnes To Pounds Converter");
                        Input();
                        printf("%f Metric Tonnes Equal To %.8f Pounds\n", n, n * 2204.623);
                        break;

                    case '2':
                        printf("\n\n\t\tMetric Tonnes To Stones Converter");
                        Input();
                        printf("%f Metric Tonnes Equal To %.9f Stones\n", n, n * 157.473044);
                        break;

                    case '3':
                        printf("\n\n\t\tMetric Tonnes To Short Tons (US) Converter");
                        Input();
                        printf("%f Metric Tonnes Equal To %.10f Short Tons (US)\n", n, n * 1.10231131);
                        break;

                    case '4':
                        printf("\n\n\t\tMetric Tonnes To Long Tons (UK) Converter");
                        Input();
                        printf("%f Metric Tonnes Equal To %.12f Long Tons (UK)\n", n, n * 0.984206528);
                        break;

                    case 'b':
                    case 'B':
                        goto Second_Quantity_Selection_9;
                        break;

                    case 'q':
                    case 'Q':
                        Main_Option = 'q';
                        goto Second_Quantity_Selection_9_1;
                        break;

                    default:
                        printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
                        goto Second_Quantity_Selection_9_m;
                        break;
                    }
                    goto Second_Quantity_Selection_9_m;
                }

                break;

            case 'b':
            case 'B':
                goto First_Quantity_Selection_1;
                break;

            case 'q':
            case 'Q':
                // quit();
                Main_Option = 'q';
                goto Second_Quantity_Selection_9_1;
                break;

            default:
                printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
                goto Second_Quantity_Selection_9;
                break;
            }
        }

    Second_Quantity_Selection_9_1:
        break;

    case 'm':
    case 'M':
    More_First_Quantity_Selection:
        printf("\t  ___________________________________________\n\t /                                           \\\n\t | You Have Selected Weight & Mass Converter |\n\t \\___________________________________________/");

        printf("\n\nSelect First Qantity :%s%s\n  >> ", weightandmassconv[1], weightandmassconv[2]);
        Conv1stValOpt = getch();
        switch (Conv1stValOpt)
        {
        case '1':
        Second_Quantity_Selection_10:
            while (1)
            {
                //                    +---------------------------------------+
                //                    |-----------OUNCES CONVERSION-----------|
                //                    +---------------------------------------+        
                printf("                    \n\n\t\t\t\t\t+---------------------------------------+\n\t\t\t\t\t|-----------OUNCES CONVERSION-----------|\n\t\t\t\t\t+---------------------------------------+ ");
                printf("\n\nSelect Second Qantity : \n\t\t1. Carats\n\t\t2. Milligrams\n\t\t3. Centigrams\n\t\t4. Decigrams\n\t\t5. Grams\n\t\t6. Dekagrams\n\t\t7. Kilograms\n\t\t8. Metric Tonnes\n\t\t9. Hectograms%s%s\n  >> ", weightandmassconv[2], weightandmassconv[3]);
                Conv2ndValOpt = getch();
                switch (Conv2ndValOpt)
                {
                case '1':
                    printf("\n\n\t\tOunces To Carats Converter");
                    Input();
                    printf("%f Ounces Equal To %f Carats\n", n, n * 141.7476);
                    break;

                case '2':
                    printf("\n\n\t\tOunces To Milligrams Converter");
                    Input();
                    printf("%f Ounces Equal To %f Milligrams\n", n, n * 28349.52);
                    break;

                case '3':
                    printf("\n\n\t\tOunces To Centigrams Converter");
                    Input();
                    printf("%f Ounces Equal To %f Centigrams\n", n, n * 2834.952);
                    break;

                case '4':
                    printf("\n\n\t\tOunces To Decigrams Converter");
                    Input();
                    printf("%f Ounces Equal To %f Decigrams\n", n, n * 283.4952);
                    break;

                case '5':
                    printf("\n\n\t\tOunces To Grams Converter");
                    Input();
                    printf("%f Ounces Equal To %f Grams\n", n, n * 28.34952);
                    break;

                case '6':
                    printf("\n\n\t\tOunces To Dekagrams Converter");
                    Input();
                    printf("%.f Ounces Equal To %f Dekagrams\n", n, n * 2.834952);
                    break;

                case '7':
                    printf("\n\n\t\tOunces To Hectograms Converter");
                    Input();
                    printf("%f Ounces Equal To %f Hectograms\n", n, n * 0.2834952);
                    break;

                case '8':
                    printf("\n\n\t\tOunces To Kilograms Converter");
                    Input();
                    printf("%f Ounces Equal To %f Kilograms\n", n, n * 0.02834952);
                    break;

                case '9':
                    printf("\n\n\t\tOunces To Metric Tonnes Converter");
                    Input();
                    printf("%f Ounces Equal To %f Metric Tonnes\n", n, n * 0.00002834952);
                    break;
                Second_Quantity_Selection_10_m:
                case 'm':
                case 'M':
                    while (1)
                    {
                        printf("                    \n\n\t\t\t\t\t+---------------------------------------+\n\t\t\t\t\t|-----------OUNCES CONVERSION-----------|\n\t\t\t\t\t+---------------------------------------+ ");
                        printf("\n\nSelect Second Qantity : \n\t\t1. Pounds\n\t\t2. Stone\n\t\t3. Short Tons (US)\n\t\t4. Long Tons (UK)%s\n  >> ", weightandmassconv[2]);
                        Conv2ndValOpt = getch();
                        switch (Conv2ndValOpt)
                        {
                        case '1':
                            printf("\n\n\t\tOunces To Pounds Converter");
                            Input();
                            printf("%f Ounces Equal To %.8f Pounds\n", n, n * 0.0625);
                            break;

                        case '2':
                            printf("\n\n\t\tOunces To Stones Converter");
                            Input();
                            printf("%f Ounces Equal To %.9f Stones\n", n, n * 0.004464);
                            break;

                        case '3':
                            printf("\n\n\t\tOunces To Short Tons (US) Converter");
                            Input();
                            printf("%f Ounces Equal To %.10f Short Tons (US)\n", n, n * 0.000031);
                            break;

                        case '4':
                            printf("\n\n\t\tOunces To Long Tons (UK) Converter");
                            Input();
                            printf("%f Ounces Equal To %.12f Long Tons (UK)\n", n, n * 0.000028);
                            break;

                        case 'b':
                        case 'B':
                            goto Second_Quantity_Selection_10;
                            break;

                        case 'q':
                        case 'Q':
                            Main_Option = 'q';
                            goto Second_Quantity_Selection_10_1;
                            break;

                        default:
                            printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
                            goto Second_Quantity_Selection_10_m;
                            break;
                        }
                        goto Second_Quantity_Selection_10_m;
                    }

                    break;

                case 'b':
                case 'B':
                    goto More_First_Quantity_Selection;
                    break;

                case 'q':
                case 'Q':
                    // quit();
                    Main_Option = 'q';
                    goto Second_Quantity_Selection_10_1;
                    break;

                default:
                    printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
                    goto Second_Quantity_Selection_10;
                    break;
                }
            }

        Second_Quantity_Selection_10_1:
            break;

        case '2':
        Second_Quantity_Selection_11:
            while (1)
            {
                //                    +---------------------------------------+
                //                    |-----------POUNDS CONVERSION-----------|
                //                    +---------------------------------------+             
                printf("                    \n\n\t\t\t\t\t+---------------------------------------+\n\t\t\t\t\t|-----------POUNDS CONVERSION-----------|\n\t\t\t\t\t+---------------------------------------+ ");
                printf("\n\nSelect Second Qantity : \n\t\t1. Carats\n\t\t2. Milligrams\n\t\t3. Centigrams\n\t\t4. Decigrams\n\t\t5. Grams\n\t\t6. Hectograms\n\t\t7. Kilograms\n\t\t8. Metric Tonnes\n\t\t9. Ounces%s%s\n  >> ", weightandmassconv[2], weightandmassconv[3]);
                Conv2ndValOpt = getch();
                switch (Conv2ndValOpt)
                {
                case '1':
                    printf("\n\n\t\tPounds To Carats Converter");
                    Input();
                    printf("%f Pounds Equal To %f Carats\n", n, n * 2267.962);
                    break;

                case '2':
                    printf("\n\n\t\tPounds To Milligrams Converter");
                    Input();
                    printf("%f Pounds Equal To %f Milligrams\n", n, n * 453592.4);
                    break;

                case '3':
                    printf("\n\n\t\tPounds To Centigrams Converter");
                    Input();
                    printf("%f Pounds Equal To %f Centigrams\n", n, n * 45359.24);
                    break;

                case '4':
                    printf("\n\n\t\tPounds To Decigrams Converter");
                    Input();
                    printf("%f Pounds Equal To %f Decigrams\n", n, n * 4535.924);
                    break;

                case '5':
                    printf("\n\n\t\tPounds To Grams Converter");
                    Input();
                    printf("%f Pounds Equal To %f Grams\n", n, n * 453.5924);
                    break;

                case '6':
                    printf("\n\n\t\tPounds To Dekagrams Converter");
                    Input();
                    printf("%.f Pounds Equal To %f Dekagrams\n", n, n * 45.35924);
                    break;

                case '7':
                    printf("\n\n\t\tPounds To Hectograms Converter");
                    Input();
                    printf("%f Pounds Equal To %f Hectograms\n", n, n * 4.535924);
                    break;

                case '8':
                    printf("\n\n\t\tPounds To Kilograms Converter");
                    Input();
                    printf("%f Pounds Equal To %f Kilograms\n", n, n * 0.4535924);
                    break;

                case '9':
                    printf("\n\n\t\tPounds To Metric Tonnes Converter");
                    Input();
                    printf("%f Pounds Equal To %f Metric Tonnes\n", n, n * 0.000454);
                    break;
                Second_Quantity_Selection_11_m:
                case 'm':
                case 'M':
                    while (1)
                    {
                        printf("                    \n\n\t\t\t\t\t+---------------------------------------+\n\t\t\t\t\t|-----------OUNCES CONVERSION-----------|\n\t\t\t\t\t+---------------------------------------+ ");
                        printf("\n\nSelect Second Qantity : \n\t\t1. Ounces\n\t\t2. Stone\n\t\t3. Short Tons (US)\n\t\t4. Long Tons (UK)%s\n  >> ", weightandmassconv[2]);
                        Conv2ndValOpt = getch();
                        switch (Conv2ndValOpt)
                        {
                        case '1':
                            printf("\n\n\t\tPounds To Ounces Converter");
                            Input();
                            printf("%f Pounds Equal To %.8f Ounces\n", n, n * 16);
                            break;

                        case '2':
                            printf("\n\n\t\tPounds To Stones Converter");
                            Input();
                            printf("%f Pounds Equal To %.9f Stones\n", n, n * 0.071429);
                            break;

                        case '3':
                            printf("\n\n\t\tPounds To Short Tons (US) Converter");
                            Input();
                            printf("%f Pounds Equal To %.10f Short Tons (US)\n", n, n * 0.0005);
                            break;

                        case '4':
                            printf("\n\n\t\tPounds To Long Tons (UK) Converter");
                            Input();
                            printf("%f Pounds Equal To %.12f Long Tons (UK)\n", n, n * 0.000446);
                            break;

                        case 'b':
                        case 'B':
                            goto Second_Quantity_Selection_11;
                            break;

                        case 'q':
                        case 'Q':
                            Main_Option = 'q';
                            goto Second_Quantity_Selection_11_1;
                            break;

                        default:
                            printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
                            goto Second_Quantity_Selection_11_m;
                            break;
                        }
                        goto Second_Quantity_Selection_11_m;
                    }

                    break;

                case 'b':
                case 'B':
                    goto First_Quantity_Selection_1;
                    break;

                case 'q':
                case 'Q':
                    // quit();
                    Main_Option = 'q';
                    goto Second_Quantity_Selection_11_1;
                    break;

                default:
                    printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
                    goto Second_Quantity_Selection_11;
                    break;
                }
            }

        Second_Quantity_Selection_11_1:
            break;

        case '3':
        Second_Quantity_Selection_12:
            while (1)
            {
                //                    +--------------------------------------+
                //                    |-----------STONE CONVERSION-----------|
                //                    +--------------------------------------+             
                printf("                    \n\n\t\t\t\t\t+--------------------------------------+\n\t\t\t\t\t|-----------STONE CONVERSION-----------|\n\t\t\t\t\t+--------------------------------------+ ");
                printf("\n\nSelect Second Qantity : \n\t\t1. Carats\n\t\t2. Milligrams\n\t\t3. Centigrams\n\t\t4. Decigrams\n\t\t5. Grams\n\t\t6. Dekagrams\n\t\t7. Hectograms\n\t\t8. Kilograms\n\t\t9. Metric Tonnes%s%s\n  >> ", weightandmassconv[2], weightandmassconv[3]);
                Conv2ndValOpt = getch();
                switch (Conv2ndValOpt)
                {
                case '1':
                    printf("\n\n\t\tStones To Carats Converter");
                    Input();
                    printf("%f Stones Equal To %f Carats\n", n, n * 31751.47);
                    break;

                case '2':
                    printf("\n\n\t\tStones To Milligrams Converter");
                    Input();
                    printf("%f Stones Equal To %f Milligrams\n", n, n * 6350293);
                    break;

                case '3':
                    printf("\n\n\t\tStones To Centigrams Converter");
                    Input();
                    printf("%f Stones Equal To %f Centigrams\n", n, n * 635029.3);
                    break;

                case '4':
                    printf("\n\n\t\tStones To Decigrams Converter");
                    Input();
                    printf("%f Stones Equal To %f Decigrams\n", n, n * 63502.93);
                    break;

                case '5':
                    printf("\n\n\t\tStones To Grams Converter");
                    Input();
                    printf("%f Stones Equal To %f Grams\n", n, n * 6350.293);
                    break;

                case '6':
                    printf("\n\n\t\tStones To Dekagrams Converter");
                    Input();
                    printf("%.f Stones Equal To %f Dekagrams\n", n, n * 635.0293);
                    break;

                case '7':
                    printf("\n\n\t\tStones To Hectograms Converter");
                    Input();
                    printf("%f Stones Equal To %f Hectograms\n", n, n * 63.50293);
                    break;

                case '8':
                    printf("\n\n\t\tStones To Kilograms Converter");
                    Input();
                    printf("%f Stones Equal To %f Kilograms\n", n, n * 6.350293);
                    break;

                case '9':
                    printf("\n\n\t\tStones To Metric Tonnes Converter");
                    Input();
                    printf("%f Stones Equal To %f Metric Tonnes\n", n, n * 0.006350293);
                    break;
                Second_Quantity_Selection_12_m:
                case 'm':
                case 'M':
                    while (1)
                    {
                        printf("                    \n\n\t\t\t\t\t+--------------------------------------+\n\t\t\t\t\t|-----------STONE CONVERSION-----------|\n\t\t\t\t\t+--------------------------------------+ ");
                        printf("\n\nSelect Second Qantity : \n\t\t1. Ounces\n\t\t2. Pounds\n\t\t3. Short Tons (US)\n\t\t4. Long Tons (UK)%s\n  >> ", weightandmassconv[2]);
                        Conv2ndValOpt = getch();
                        switch (Conv2ndValOpt)
                        {
                        case '1':
                            printf("\n\n\t\tStones To Ounces Converter");
                            Input();
                            printf("%f Stones Equal To %.8f Ounces\n", n, n * 224);
                            break;

                        case '2':
                            printf("\n\n\t\tStones To Pounds Converter");
                            Input();
                            printf("%f Stones Equal To %.9f Pounds\n", n, n * 14);
                            break;

                        case '3':
                            printf("\n\n\t\tStones To Short Tons (US) Converter");
                            Input();
                            printf("%f Stones Equal To %.10f Short Tons (US)\n", n, n * 0.007);
                            break;

                        case '4':
                            printf("\n\n\t\tStones To Long Tons (UK) Converter");
                            Input();
                            printf("%f Stones Equal To %.12f Long Tons (UK)\n", n, n * 0.00625);
                            break;

                        case 'b':
                        case 'B':
                            goto Second_Quantity_Selection_12;
                            break;

                        case 'q':
                        case 'Q':
                            Main_Option = 'q';
                            goto Second_Quantity_Selection_12_1;
                            break;

                        default:
                            printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
                            goto Second_Quantity_Selection_12_m;
                            break;
                        }
                        goto Second_Quantity_Selection_12_m;
                    }

                    break;

                case 'b':
                case 'B':
                    goto First_Quantity_Selection_1;
                    break;

                case 'q':
                case 'Q':
                    // quit();
                    Main_Option = 'q';
                    goto Second_Quantity_Selection_12_1;
                    break;

                default:
                    printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
                    goto Second_Quantity_Selection_12;
                    break;
                }
            }

        Second_Quantity_Selection_12_1:
            break;

        case '4':
        Second_Quantity_Selection_13:
            while (1)
            {
                //                    +--------------------------------------------+
                //                    |--------SHORT TONNES (US) CONVERSION--------|
                //                    +--------------------------------------------+             
                printf("                    \n\n\t\t\t\t\t+--------------------------------------------+\n\t\t\t\t\t|--------SHORT TONNES (US) CONVERSION--------|\n\t\t\t\t\t+--------------------------------------------+ ");
                printf("\n\nSelect Second Qantity : \n\t\t1. Carats\n\t\t2. Milligrams\n\t\t3. Centigrams\n\t\t4. Decigrams\n\t\t5. Grams\n\t\t6. Dekagrams\n\t\t7. Hectograms\n\t\t8. Kilograms\n\t\t9. Metric Tonnes%s%s\n  >> ", weightandmassconv[2], weightandmassconv[3]);
                Conv2ndValOpt = getch();
                switch (Conv2ndValOpt)
                {
                case '1':
                    printf("\n\n\t\tShort Tons (US) To Carats Converter");
                    Input();
                    printf("%f Short Tons (US) Equal To %f Carats\n", n, n * 4535924);
                    break;

                case '2':
                    printf("\n\n\t\tShort Tons (US) To Milligrams Converter");
                    Input();
                    printf("%f Short Tons (US) Equal To %f Milligrams\n", n, n * 907184740);
                    break;

                case '3':
                    printf("\n\n\t\tShort Tons (US) To Centigrams Converter");
                    Input();
                    printf("%f Short Tons (US) Equal To %f Centigrams\n", n, n * 90718474);
                    break;

                case '4':
                    printf("\n\n\t\tShort Tons (US) To Decigrams Converter");
                    Input();
                    printf("%f Short Tons (US) Equal To %f Decigrams\n", n, n * 9071847);
                    break;

                case '5':
                    printf("\n\n\t\tShort Tons (US) To Grams Converter");
                    Input();
                    printf("%f Short Tons (US) Equal To %f Grams\n", n, n * 907184.74);
                    break;

                case '6':
                    printf("\n\n\t\tShort Tons (US) To Dekagrams Converter");
                    Input();
                    printf("%.f Short Tons (US) Equal To %f Dekagrams\n", n, n * 907184.74);
                    break;

                case '7':
                    printf("\n\n\t\tShort Tons (US) To Hectograms Converter");
                    Input();
                    printf("%f Short Tons (US) Equal To %f Hectograms\n", n, n * 9071.8474);
                    break;

                case '8':
                    printf("\n\n\t\tShort Tons (US) To Kilograms Converter");
                    Input();
                    printf("%f Short Tons (US) Equal To %f Kilograms\n", n, n * 907.18474);
                    break;

                case '9':
                    printf("\n\n\t\tShort Tons (US) To Metric Tonnes Converter");
                    Input();
                    printf("%f Short Tons (US) Equal To %f Metric Tonnes\n", n, n * 0.90718474);
                    break;
                Second_Quantity_Selection_13_m:
                case 'm':
                case 'M':
                    while (1)
                    {
                        printf("                    \n\n\t\t\t\t\t+--------------------------------------------+\n\t\t\t\t\t|--------SHORT TONNES (US) CONVERSION--------|\n\t\t\t\t\t+--------------------------------------------+ ");
                        printf("\n\nSelect Second Qantity : \n\t\t1. Ounces\n\t\t2. Pounds\n\t\t3. Stone\n\t\t4. Long Tons (UK)%s\n  >> ", weightandmassconv[2]);
                        Conv2ndValOpt = getch();
                        switch (Conv2ndValOpt)
                        {
                        case '1':
                            printf("\n\n\t\tShort Tons (US) To Ounces Converter");
                            Input();
                            printf("%f Short Tons (US) Equal To %.8f Ounces\n", n, n * 32000);
                            break;

                        case '2':
                            printf("\n\n\t\tShort Tons (US) To Pounds Converter");
                            Input();
                            printf("%f Short Tons (US) Equal To %.9f Pounds\n", n, n * 2000);
                            break;

                        case '3':
                            printf("\n\n\t\tShort Tons (US) To Stone Converter");
                            Input();
                            printf("%f Short Tons (US) Equal To %.10f Stone\n", n, n * 142.8571);
                            break;

                        case '4':
                            printf("\n\n\t\tShort Tons (US) To Long Tons (UK) Converter");
                            Input();
                            printf("%f Short Tons (US) Equal To %.12f Long Tons (UK)\n", n, n * 0.892857);
                            break;

                        case 'b':
                        case 'B':
                            goto Second_Quantity_Selection_13;
                            break;

                        case 'q':
                        case 'Q':
                            Main_Option = 'q';
                            goto Second_Quantity_Selection_13_1;
                            break;

                        default:
                            printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
                            goto Second_Quantity_Selection_13_m;
                            break;
                        }
                        goto Second_Quantity_Selection_13_m;
                    }

                    break;

                case 'b':
                case 'B':
                    goto First_Quantity_Selection_1;
                    break;

                case 'q':
                case 'Q':
                    // quit();
                    Main_Option = 'q';
                    goto Second_Quantity_Selection_13_1;
                    break;

                default:
                    printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
                    goto Second_Quantity_Selection_13;
                    break;
                }
            }

        Second_Quantity_Selection_13_1:
            break;

        case '5':
        Second_Quantity_Selection_14:
            while (1)
            {
                //                    +-------------------------------------------+
                //                    |--------LONG TONNES (UK) CONVERSION--------|
                //                    +-------------------------------------------+             
                printf("                    \n\n\t\t\t\t\t+-------------------------------------------+\n\t\t\t\t\t|--------LONG TONNES (UK) CONVERSION--------|\n\t\t\t\t\t+-------------------------------------------+ ");
                printf("\n\nSelect Second Qantity : \n\t\t1. Carats\n\t\t2. Milligrams\n\t\t3. Centigrams\n\t\t4. Decigrams\n\t\t5. Grams\n\t\t6. Dekagrams\n\t\t7. Hectograms\n\t\t8. Kilograms\n\t\t9. Metric Tonnes%s%s\n  >> ", weightandmassconv[2], weightandmassconv[3]);
                Conv2ndValOpt = getch();
                switch (Conv2ndValOpt)
                {
                case '1':
                    printf("\n\n\t\tLong Tons (UK) To Carats Converter");
                    Input();
                    printf("%f Long Tons (UK) Equal To %f Carats\n", n, n * 5080235);
                    break;

                case '2':
                    printf("\n\n\t\tLong Tons (UK) To Milligrams Converter");
                    Input();
                    printf("%f Long Tons (UK) Equal To %f Milligrams\n", n, n * 1016046909);
                    break;

                case '3':
                    printf("\n\n\t\tLong Tons (UK) To Centigrams Converter");
                    Input();
                    printf("%f Long Tons (UK) Equal To %f Centigrams\n", n, n * 101604691);
                    break;

                case '4':
                    printf("\n\n\t\tLong Tons (UK) To Decigrams Converter");
                    Input();
                    printf("%f Long Tons (UK) Equal To %f Decigrams\n", n, n * 10160469);
                    break;

                case '5':
                    printf("\n\n\t\tLong Tons (UK) To Grams Converter");
                    Input();
                    printf("%f Long Tons (UK) Equal To %f Grams\n", n, n * 1016047);
                    break;

                case '6':
                    printf("\n\n\t\tLong Tons (UK) To Dekagrams Converter");
                    Input();
                    printf("%.f Long Tons (UK) Equal To %f Dekagrams\n", n, n * 101604.7);
                    break;

                case '7':
                    printf("\n\n\t\tLong Tons (UK) To Hectograms Converter");
                    Input();
                    printf("%f Long Tons (UK) Equal To %f Hectograms\n", n, n * 10160.47);
                    break;

                case '8':
                    printf("\n\n\t\tLong Tons (UK) To Kilograms Converter");
                    Input();
                    printf("%f Long Tons (UK) Equal To %f Kilograms\n", n, n * 1016.047);
                    break;

                case '9':
                    printf("\n\n\t\tLong Tons (UK) To Metric Tonnes Converter");
                    Input();
                    printf("%f Long Tons (UK) Equal To %f Metric Tonnes\n", n, n * 1.016047);
                    break;
                Second_Quantity_Selection_14_m:
                case 'm':
                case 'M':
                    while (1)
                    {
                        printf("                    \n\n\t\t\t\t\t+-------------------------------------------+\n\t\t\t\t\t|--------LONG TONNES (UK) CONVERSION--------|\n\t\t\t\t\t+-------------------------------------------+ ");
                        printf("\n\nSelect Second Qantity : \n\t\t1. Ounces\n\t\t2. Pounds\n\t\t3. Stone\n\t\t4. Long Tons (UK)%s\n  >> ", weightandmassconv[2]);
                        Conv2ndValOpt = getch();
                        switch (Conv2ndValOpt)
                        {
                        case '1':
                            printf("\n\n\t\tLong Tons (UK) To Ounces Converter");
                            Input();
                            printf("%f Long Tons (UK) Equal To %.8f Ounces\n", n, n * 35840);
                            break;

                        case '2':
                            printf("\n\n\t\tLong Tons (UK) To Pounds Converter");
                            Input();
                            printf("%f Long Tons (UK) Equal To %.9f Pounds\n", n, n * 2240);
                            break;

                        case '3':
                            printf("\n\n\t\tLong Tons (UK) To Stone Converter");
                            Input();
                            printf("%f Long Tons (UK) Equal To %.10f Stone\n", n, n * 160);
                            break;

                        case '4':
                            printf("\n\n\t\tLong Tons (UK) To Short Tons (US) Converter");
                            Input();
                            printf("%f Long Tons (UK) Equal To %.12f Short Tons (US)\n", n, n * 160);
                            break;

                        case 'b':
                        case 'B':
                            goto Second_Quantity_Selection_14;
                            break;

                        case 'q':
                        case 'Q':
                            Main_Option = 'q';
                            goto Second_Quantity_Selection_14_1;
                            break;

                        default:
                            printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
                            goto Second_Quantity_Selection_14_m;
                            break;
                        }
                        goto Second_Quantity_Selection_14_m;
                    }

                    break;

                case 'b':
                case 'B':
                    goto First_Quantity_Selection_1;
                    break;

                case 'q':
                case 'Q':
                    // quit();
                    Main_Option = 'q';
                    goto Second_Quantity_Selection_14_1;
                    break;

                default:
                    printf("\a\n\n\n\t\t****Please Select Valid Option...****\n");
                    goto Second_Quantity_Selection_14;
                    break;
                }
            }

        Second_Quantity_Selection_14_1:
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
            goto First_Quantity_Selection_1;
            break;
        }
    }
}