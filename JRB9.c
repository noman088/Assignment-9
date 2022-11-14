// // 1. Write a program which takes the month number as an input and display
// // number of days in that month.
// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int Month;
//     printf("Enter NUmber of Month to check :");
//     scanf("%d", &Month);

//     switch (Month)
//     {
//     case 1:
//         printf("Days in this Month is 31");
//         break;

//     case 2:
//         printf("Days in this Month is 29 or 28");
//         break;

//     case 3:
//         printf("Days in this Month is 31");
//         break;
//     case 4:
//         printf("Days in this Month is 30");
//         break;

//     case 5:
//         printf("Days in this Month is 31");
//         break;

//     case 6:
//         printf("Days in this Month is 30");
//         break;

//     case 7:
//         printf("Days in this Month is 31");
//         break;

//     case 8:
//         printf("Days in this Month is 31");
//         break;
//     case 9:
//         printf("Days in this Month is 30");
//         break;

//     case 10:
//         printf("Days in this Month is 31");
//         break;

//     case 11:
//         printf("Days in this Month is 30");
//         break;

//     case 12:
//         printf("Days in this Month is 31");
//         break;

//     default:
//         printf("You choose wrong Input ");
//         break;
//     }
//     return 0;
// // }

// // 2. Write a menu driven program with the following options:
// // a. Addition
// // b. Subtraction
// // c. Multiplication
// // d. Division
// // e. Exit
// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>

// int main()
// {
//     while (1)
//     {
//         int x, a, b;
//         printf("\nEnter a Number \n 1.Addition \n 2.Substraction \n 3.Multiplication \n 4.Division \n 5. Exit \n ");
//         scanf("%d", &x);

//         switch (x)
//         {
//         case 1:
//             printf("Enter Two Numbers ");
//             scanf("%d%d", &a, &b);
//             printf("The sum is %d ", a + b);
//             break;

//         case 2:
//             printf("Enter Two Numbers ");
//             scanf("%d%d", &a, &b);
//             printf("The substraction  is %d ", a - b);
//             break;

//         case 3:
//             printf("Enter Two Numbers ");
//             scanf("%d%d", &a, &b);
//             printf("The multiplication  is %d ", a * b);
//             break;

//         case 4:
//             printf("Enter Two Numbers ");
//             scanf("%d%d", &a, &b);
//             printf("The Division is %d ", a / b);
//             break;

//         case 5:
//             printf("Thank You");
//             exit(1);
//         }
//     }

//     return 0;
// }

//  // 3. Write a program which takes the day number of a week and displays a
// // unique greeting message for the day.

// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int x;
//     printf("Enter a Number ");
//     scanf("%d", &x);
//     switch (x)
//     {
//     case 1:
//         printf("Today is Monday");
//         break;

//     case 2:
//         printf("Today is Tuesday");
//         break;

//     case 3:
//         printf("Today is Wednesday");
//         break;

//     case 4:
//         printf("Today is Thursday");
//         break;

//     case 5:
//         printf("Today is Friday");
//         break;

//     case 6:
//         printf("Today is Saturday");
//         break;

//     case 7:
//         printf("Today is Sunday");
//         break;

//     default:
//         printf("You are Choose wrong Input \n Have a nice day");
//         break;
//     }
//     return 0;
// }

// 4. Write a menu driven program with the following options:

// a. Check whether a given set of three numbers are lengths of
// an isosceles triangle or not...samdwibahoo tribhuj
// b. Check whether a given set of three numbers are lengths of
// sides of  a right angled triangle or not... samkon Tribhuj
// c. Check whether a given set of three numbers are equilateral triangle
// or not...sambahoo Tribhuj..
// d. Exit


// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int x, a, b, c;
//     char ch;
//     while (1)
//     {

//         printf("Enter a number \n 1. Isosceles Triangle \n 2. Right Angled Triangle \n 3. Equilateral Triangle \n 4. Exit.\n");
//         scanf("%d", &x);
//         switch (x)
//         {
//         case 1:
//             printf("Enter three numbers");

//             scanf("%d%d%d", &a, &b, &c);
//             if ((a == b) ^ (a == c))
//                 printf("Tringle is isosceles");
//             else
//                 printf("Tringle is not  isosceles");
//             printf("\n");

//             break;

//         case 2:
//             printf("Enter three numbers");
//             scanf("%d%d%d", &a, &b, &c);
//             if ((a ^ 2 && b ^ 2 == c ^ 2) || (a ^ 2 && c ^ 2 == b ^ 2) || (b ^ 2 && c ^ 2 == a ^ 2))
//                 printf("Tringle is Right Angled ");
//             else
//                 printf("Tringle is not Right Angled ");
//             printf("\n");
//             break;

//         case 3:
//             printf("Enter three numbers");
//             scanf("%d%d%d", &a, &b, &c);
//             if (a == b && b == c)
//                 printf("Tringle is Equilateral");
//             else
//                 printf("Tringle is not Equilateral");
//             printf("\n");
//             break;
//         case 4:
//             printf("Thank You");
//             exit(1);
//         }
//     }
//     return 0;
// }

// 5. Convert the following if-else-if construct into switch case:
// if(var == 1)
// System.out.println("good");
// else if(var == 2)
// System.out.println("better");
// else if(var == 3)
// System.out.println("best");
// else
// System.out.println("invalid");

// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int x;
//     printf("Enter a Variable ");
//     scanf("%d", &x);

//     switch (x)

//     {
//     case 1:
//         printf("Good");
//         break;

//     case 2:
//         printf("Bettar");
//         break;

//     case 3:
//         printf("Best");
//         break;

//     default:
//         printf("Invalid");
//         break;
//     }
//     return 0;
// }

// // 6. Program to check whether a year is a leap year or not. Using switch
// // statement
// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int x, year;
//     printf("Ente a Year to check ");
//     scanf("%d", &year);
//     if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
//         x = 1;
//     else
//         x = 0;

//     switch (x)
//     {
//     case 1:
//         printf("%d is Leap Year ", year);
//         break;
//     case 0:
//         printf("%d is Not Leap Year ", year);
//     }

//     return 0;
// }

// // 7. Program to take the value from the user as input electricity unit charges
// // and calculate total electricity bill according to the given condition . Using
// // the switch statement.
// // For the first 50 units Rs. 0.50/unit
// // For the next 100 units Rs. 0.75/unit
// // For the next 100 units Rs. 1.20/unit
// // For units above 250 Rs. 1.50/unit
// // An additional surcharge of 20% is added to the bill.
// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int unit;
//     printf("Enter Your Unit ");
//     scanf("%d", &unit);
//     switch (unit)
//     {
//     case 0 ... 50:
//         unit = unit * 0.5;
//         printf("%d is your bill ", unit);
//         break;

//     case 51 ... 100:
//         unit = unit * 0.75;
//         printf("%d is your bill ", unit);
//         break;

//     case 101 ... 250:
//         unit = unit * 1.2;
//         printf("%d is your bill ", unit);
//         break;

//     default:
//         unit = unit * 1.5;
//         unit = (unit * 20) / 100;
//         printf("%d is Your electricity bill", unit);
//         break;
//     }
//     return 0;
// }

// // 8. Program to convert a positive number into a negative number and negative
// // number into a positive number using a switch statement.
// #include<stdio.h>
// int main()
// {
//     int num, flag;
//     printf("Enter a Number");
//     scanf("%d", &num);
//     flag = num;
//     if (num < 0)
//         num = 1;
//     if (num > 0)
//         num = 0;
//     switch (num)
//     {
//     case 1:
//         printf("%d", (flag * -1));
//         break;
//     case 0:
//         printf("%d", (flag * -1));
//         break;

//     default:
//         printf("Number is Zero");
//         break;
//     }

//     return 0;
// }

// // 9. Program to Convert even number into its upper nearest odd number
//  // Switch Statement.
// #include <stdio.h>
// int main()
// {
//     int num, flag;
//     printf("Enter a number");
//     scanf("%d", &num);
//     flag = num;

//     switch (num %= 2)
//     {
//     case 0:
//         printf("%d", (flag + 1));
//         break;

//     case 1:
//         printf("Number is alreday odd");
//         break;
//     }

//     return 0;
// }

//     // // 10. C program to find all roots of a quadratic equation using switch case
// #include <stdio.h>
// #include <conio.h>
// #include <math.h>
// int main()
// {
//     int a, b, c, D;
//     float x, y;
//     printf("Enter Coefficient  ");
//     scanf("%d%d%d", &a, &b, &c);
//     D = b * b - 4 * a * c;

//     if (D < 0)
//         D = 1;
//     else if (D == 0)
//         D = 2;
//     else if (D > 0)
//         D = 3;

//     switch (D)
//     {
//     case 1:
//         //   if(D<0)
//         {
//             printf(" roots are imaginary ");
//             break;
//         }
//     case 2:
//         // if(D==0)
//         {
//             printf("both roots are same ");
//             x = y = -b / (2.0 * a);
//             printf("Both Roots are %2f", x);
//             break;
//         }

//     case 3:
//         // if(D>0)
//         {
//             printf("roots are distinct ");
//             x = -b - sqrt(D) / (2 * a);
//             y = -b + sqrt(D) / (2 * a);
//             printf("The roots are %.2f and %.2f ", x, y);
//             break;
//         }
//     default:
//         break;
//     }
//     return 0;
// }