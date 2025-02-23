// get ch()  it reads a single character from keyboard and does not display anything, used for password

// get che() it accepts or reads a single character from keyboard and immediately echoes on the console

// gets()  is stores character in an array

//                                            O U T P U T     FU N C T I O N S

// put char()  it writes a single character to standard output stream

// #include <stdio.h>
// int main() {
//     char str[11];
//     int i;
//     printf("Enter a string : ");
//     for (i = 0; i < 10; i++) {
//         str[i] = getchar();
//     }
//     str[10] = '\0';
//     printf("You entered: %s\n", str);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {   int a;
//     printf("Enter age: ");
//     scanf("%d",&a);
//     if (a>=18)
//     {
//         printf("The person can vote ");
//     }
//     else
//     {
//         printf("Cannot volte ! ");
//     }
//     return 0;
// }

//  #include <stdio.h>
// int main()
// {   int a;
//     printf("Enter age: ");
//     scanf("%d",&a);
//     if (a>=25 && a<=30)
//     {
//         printf("True ");
//     }
//     else
//     {
//         printf("False ");
//     }
//     return 0;
// }

//                                        L A R G E S T    O F    3     N U M B E R S
// #include <stdio.h>
// int main()
// {   int a,b,c;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d",&a, &b, &c);
//     if (a>b )
//     {
//         if (a>c)
//         {
//             printf("%d is largest ",a);
//         }
//         else
//         {
//             printf("%d is largest ",c);
//         }
//     }
//     else
//     {
//         if (b>c)
//         {
//             printf("%d is largest",b);
//         }
//         else
//         {
//             printf("%d is largest ",c);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {   int a,b,c,d,e;
//     scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
//     float avg=((a+b+c+d+e)/ 500.00)*100 ;
//     printf("Percentage : %.2f\n",avg);
//     if (avg>80.00)
//     {
//         printf("A grade ");
//     }
//     else if (avg<80.00 && avg>60.00)
//     {
//         printf("B grade ");
//     }
//     else if (avg<60.00 && avg>40.00)
//     {
//         printf("C grade ");
//     }
//     else if (avg<40.00 && avg>30.00)
//     {
//         printf("D grade ");
//     }
//     else
//     {
//         printf("FAIL ");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);
//     if (ch >= 'A' && ch <= 'Z') {
//         printf("Uppercase\n");
//     } else if (ch >= 'a' && ch <= 'z') {
//         printf("Lowercase\n");
//     } else {
//         printf("Not an alphabet letter\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);
//     switch (ch)
//     {
//     case 'a':
//     case 'e':
//     case 'i':
//     case 'o':
//     case 'u':
//         printf("Vowel\n");
//         break;
//     default:
//         printf("Consonant\n");
//         break;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int year;
//     printf("Enter a year: ");
//     scanf("%d", &year);
//     (year % 400 == 0) ? printf("Leap Year\n") :
//     (year % 100 == 0) ? printf("Not a Leap Year\n") :
//     (year % 4 == 0) ? printf("Leap Year\n") :
//     printf("Not a Leap Year\n");
//     return 0;
// }

// #include <stdio.h>-oh
// int main() {
//     int month, year;
//     printf("Enter month (1-12): ");
//     scanf("%d", &month);
//     printf("Enter year: ");
//     scanf("%d", &year);
//     switch (month) {
//         case 1:
//         case 3:
//         case 5:
//         case 7:
//         case 8:
//         case 10:
//         case 12:
//             printf("Total number of days: 31\n");
//             break;
//         case 4:
//         case 6:
//         case 9:
//         case 11:
//             printf("Total number of days: 30\n");
//             break;
//         case 2:
//             if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//                 printf("Total number of days: 29\n");
//             } else {
//                 printf("Total number of days: 28\n");
//             }
//             break;
//         default:
//             printf("Invalid month!\n");
//             break;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i < 11; ++i)
//     {
//         printf("%d\n", i);
//     }
// }

// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++) {
//         // Printing spaces to align the numbers in pyramid shape
//         for (int j = 1; j <= n - i; j++) {
//             printf(" ");
//         }
//         // Printing numbers with space
//         for (int k = 1; k <= (2 * i - 1); k++) {
//             printf("%d",k);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int n;
//     n=513%10;
//     printf("%d",n);
//     return 0;
// }

//                                                            Electricity Bill
// #include <stdio.h>
// int main() {
//     int units;
//     float bill = 0;
//     // Taking user input for units consumed
//     printf("Enter the number of units consumed: ");
//     scanf("%d", &units);
//     // Calculate bill based on given conditions
//     if (units <= 100) {
//         bill = units * 2.0;
//     } else if (units <= 300) {
//         2
//     } else if (units <= 500) {
//         bill = (100 * 2.0) + (200 * 3.0) + ((units - 300) * 4.0);
//     } else {
//         bill = (100 * 2.0) + (200 * 3.0) + (200 * 4.0) + ((units - 500) * 5.0);
//     }
//     // Apply surcharge if bill exceeds Rs. 2500
//     if (bill > 2500) {
//         bill += bill * 0.10;
//     }
//     // Ensure minimum bill amount is Rs. 100
//     if (bill < 100) {
//         bill = 100;
//     }
//     // Display the final bill amount with two decimal places
//     printf("%.2f\n", bill);
//     return 0;
// }

//                                                          Exam Result Analysis
// #include <stdio.h>
// int main(){
//     float mob,tm;
//     scanf("%f %f",&mob,&tm);
//     float pass= (tm*0.4);
//     float mobp=(mob/tm)*100;
//     if (mob<pass){
//         printf("Fail\n");
//     }
//     else if (mob>=pass){
//         if (mobp>=90)
//         {
//             printf("Ecxellent\n");
//         }
//         else if (mobp>=75 && mobp<=90)
//         {
//             printf("Good");
//         }
//         else if (mobp>=50 && mobp<=74)
//         {
//             printf("Average\n");
//         }
//         else if (mobp<=50)
//         {
//             printf("Below Average\n");
//         }
//     }
//     return 0;
// }

//                                                        Mobile bill Calculation
// #include <stdio.h>
// int main() {
//     int calls, sms;
//     float bill = 100.0; // Fixed rent
//     scanf("%d %d", &calls, &sms);
//     if (calls > 50) {
//         if (calls <= 100) {
//             bill += (calls - 50) * 0.80;
//         } else if (calls <= 200) {
//             bill += (50 * 0.80) + ((calls - 100) * 0.50);
//         } else {
//             bill += (50 * 0.80) + (100 * 0.50) + ((calls - 200) * 0.10);
//         }
//     }
//     // Calculate SMS charges
//     if (sms > 100) {
//         bill += (sms - 100) * 0.50;
//     }
//     // Apply 10% surcharge
//     bill += bill * 0.10;
//     printf("%.2f\n", bill);
//     return 0;
// }

//                                             S W I T C H    C A S E    S T A T M E N T S
// switch expression can  be   int    or   char  only
// break is not must

// Write a C Program to input three integer values and the output of the program must display the sum of two largest values out of the three numbers entered.
// #include <stdio.h>
// int main() {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);
//     int sum;
//     if (a <= b && a <= c) {
//         sum = b + c;  // 'a' is the smallest, sum the other two
//     } else if (b <= a && b <= c) {
//         sum = a + c;  // 'b' is the smallest, sum the other two
//     } else {
//         sum = a + b;  // 'c' is the smallest, sum the other two
//     }
//     printf("%d\n", sum);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int classes_held, classes_attended;
//     char medical_cause;
//     float percentage;
//     scanf("%d %d", &classes_attended, &classes_held);
//     percentage = (float)classes_attended / classes_held * 100;
//     if (percentage >= 75)
//         printf("Allowed");
//     else
//     {
//         scanf(" %c", &medical_cause);
//         if (medical_cause == 'Y' || medical_cause == 'y')
//             printf("Allowed");
//         else
//             printf("Not allowed");
//     }
//     return 0;
// }

// Given two integers l and b that denotes the length and breadth of a rectangle respectively. Find the area of a rectangle and check if the area is even or odd, it is even print EVEN else print ODD
// #include<stdio.h>
// int main(){
//     int l,b;
//     scanf("%d %d",&l,&b);
//     int area=l*b;
//     if(area%2==0){
//         printf("EVEN\n");
//     }
//     else{
//         printf("ODD\n");
//     }
//     return 0;
// }
        
//                                                             LEAP YEAR
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     if(n%4==0 && (n%100!=0 || n%400==0)){
//         printf("Leap Year\n");
//     }
//     else{
//         printf("Not a Leap Year\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a,b,result;
//     scanf("%d %d",&a,&b);
//     result = (a+2)*b;
//     printf("%d\n",result);
// }

// #include <stdio.h>
// int main()
// {
//     int amount;
//     int note500= 0, note100= 0, note50= 0, note20= 0, note10= 0, note5= 0, note2= 0, note1= 0;
//     scanf("%d", &amount);
//     if (amount >= 500)
//     {
//         note500 = amount / 500;
//         amount -= note500 * 500;
//     }
//     if (amount >= 100)
//     {
//         note100 = amount / 100;
//         amount -= note100 * 100;
//     }
//     if (amount >= 50)
//     {
//         note50 = amount / 50;
//         amount -= note50 * 50;
//     }
//     if (amount >= 20)
//     {
//         note20 = amount / 20;
//         amount -= note20 * 20;
//     }
//     if (amount >= 10)
//     {
//         note10 = amount / 10;
//         amount -= note10 * 10;
//     }
//     if (amount >= 5)
//     {
//         note5 = amount / 5;
//         amount -= note5 * 5;
//     }
//     if (amount >= 2)
//     {
//         note2 = amount / 2;
//         amount -= note2 * 2;
//     }
//     if (amount >= 1)
//     {
//         note1 = amount;
//     }
//     printf("500 = %d\n", note500);
//     printf("100 = %d\n", note100);
//     printf("50 = %d\n", note50);
//     printf("20 = %d\n", note20);
//     printf("10 = %d\n", note10);
//     printf("5 = %d\n", note5);
//     printf("2 = %d\n", note2);
//     printf("1 = %d\n", note1);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char ch;
//     scanf("%c", &ch);
//     if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//     {
//         printf("Character is an Alphabet");
//     }
//     else
//     {
//         printf("Character is not an Alphabet");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     if (a<b && b<c){
//         printf("Largest is %d\n",c);
//     }
//     else if (a<c && c<b){
//         printf("Largest is %d\n",b);
//     }
//     else {
//         printf("Largest is %d\n",a);
//     }
//     return 0;
// }

//  #include <stdio.h>
//  int main(){
//     int n;
//     scanf("%d",&n);
//     int result = (((n+8)/3)%5)*5;
//     printf("result = %d\n",result);
//     return 0;
//  }

// #include<stdio.h>
// int main()
// 	{
// 		int sec, h, m;
// 		scanf("%d",&sec);
// 		h=(sec/3600);
// 		m=(sec-(3600 *h))/60;
// 		sec=(sec-(3600*h)-m-(m*60));
// 		printf("%d %d %d\n", h,m,sec);
// }

// #include <stdio.h>
// int main(){
//     int level;
//     float basicpay;
//     scanf("%d %f",&level,&basicpay);
//     float hra=basicpay*0.25;
//     if (level==1){
//         basicpay+=hra+1000+500;
//         printf("%f\n",basicpay);
//     }
//     else if (level==2){
//         basicpay+=hra+750+200;
//         printf("%f\n",basicpay);
//     }
//     else if (level==3){
//         basicpay+=hra+500+100;
//         printf("%f\n",basicpay);
//     }
//     else if (level==4){
//         basicpay+=hra+250;
//         printf("%f\n",basicpay);
//     }
//     return 0;
// }

// #include <stdio.h>
// void main()
// {
//     char val = 1;
//     if (val-- == 0)
//         printf("TRUE");
//     else
//         printf("FALSE");
// }

// #include <stdio.h>
// void main()
// {
//     float x;
//     int y;
//     printf("enter two numbers \n");
//     scanf("%f %f", &x, &y);
//     printf("%f, %d", x, y);
// }

//                                                            P A L I N D R O M E
// #include <stdio.h>
// int main() {
//     int num, original, r = 0;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     original = num; // Store the original number
//     // Reverse the number
//     while (num > 0) {
//         r = r * 10 + (num % 10);  // Extract last digit and add to reversed number
//         num = num / 10;            // Remove last digit
//     }
//     if (original == r) {
//         printf("Number is Palindrome\n");
//     } else {
//         printf("Number is not Palindrome\n");
//     }
//     return 0;
// }


//                                                         Sum of ODD & EVEN DIGITS 
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int sum_odd=0, sum_even=0;
//     while(n!=0){
//         int digit = n%10;
//         if(digit%2!=0){
//             sum_odd+=digit;
//         }
//         else{
//             sum_even+=digit;
//         }
//         n=n/10;
//     }
//     printf("Sum of odd digits %d\n",sum_odd);
//     printf("Sum of odd digits %d ",sum_even);
// }