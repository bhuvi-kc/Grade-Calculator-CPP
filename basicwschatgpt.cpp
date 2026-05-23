
//PART A: BASIC INPUT OUTPUT

//1.Print your name, age, and college name on separate lines.
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout<<"my name is bhuvi"<<endl;
//     cout<<"i'm 18 yrs old."<<endl;
//     cout<<"i'm in tiet."<<endl;
//     return 0;
// }

//2. WAP to input an integer and display it.
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a;
//     cout<<"enter your integer: ";
//     cin>>a;
//     return 0;
// }

//3. WAP to input a decimal number and display it.
// #include <iostream>
// using namespace std;

// int main()
// {
//     float a;
//     cout<<"enter your decimal: ";
//     cin>>a;
//     cout<<""<<a;
//     return 0;
// }

//4. WAP to input a single character and display it.
// #include <iostream>
// using namespace std;

// int main()
// {
//     char c;
//     cout<<"input you char.: ";
//     cin>>c;
//     cout<<""<<c;
//     return 0;
// }

//5. WAP to input a word (no spaces) and display it.
// #include <iostream>
// using namespace std;

// int main()
// {
//     char str[100];
//     cout<<"enter your word: ";
//     cin>>str;
//     cout<<"your string is "<<str;
//     return 0;
// }


// Part B: Integer Input / Output


// 1. WAP to input two integers and display them on separate lines.
// #include <iostream>
// using namespace std;

// int main()
// {
//     int num1, num2;
//     cout<<"enter the value of num1: ";
//     cin>>num1;
//     cout<<"enter the value of num2: ";
//     cin>>num2;

//     cout<<"the value of number 1 is "<<num1<<endl;
//     cout<<"the value of number 2 is "<<num2<<endl;
//     return 0;
// }

// 2. WAP to input an integer and display its square.
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b;
//     cout<<"enter your number: ";
//     cin>>a;
//     b = a*a;
//     cout<<"the square of "<<a<<" is "<<b;
//     return 0;
// }

// 3. WAP to input an integer and display its cube.
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b;
//     cout<<"enter your number: ";
//     cin>>a;
//     b = a*a*a;
//     cout<<"the cube of "<<a<<" is "<<b;
//      return 0;
// }


// Part C: Decimal Numbers


// 1. WAP to input a float and display it.
// #include <iostream>
// using namespace std;

// int main()
// {
//     float a;
//     cout<<"enter your decimal: ";
//     cin>>a;
//     cout<<"the value of entered decimal is "<<a; 
//     return 0;
// }


// 2. WAP to input two floats and display:
// sum
// difference
// product
// division
// #include <iostream>
// using namespace std;

// int main()
// {
//     float a, b;
//     cout<<"enter first decimal: ";
//     cin>>a;
//     cout<<"enter second decimal: ";
//     cin>>b;
//     cout<<"sum is "<<a+b<<endl;
//     cout<<"product is "<<a*b<<endl;
//     cout<<"difference is "<<a-b<<endl;
//     cout<<"quotient is "<<a/b<<endl;
//     cout<<"remainder is "<< (int(a)%int(b))<<endl;

//     return 0;
// }

// 3. WAP to input a float and display it up to 2 decimal places.
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     float a;
//     cout<<"enter your decimal number: ";
//     cin>>a;
//     cout<<fixed<<setprecision(2);   //to fix the no of digits after decimals    
//     cout<<"entered decimal is "<<a;
//     return 0;
// }


// Part D: Characters


// 1. WAP to input a single character and display it.
// #include <iostream>
// using namespace std;

// int main()
// {
//     char c;
//     cout<<"enter your character: ";
//     cin>>c;
//     cout<<"entered character is: "<<c;
//     return 0;
// }

// 2. WAP to input a character and display its ASCII value.
// #include <iostream>
// using namespace std;

// int main()
// {
//     char c;
//     cout<<"enter your character: ";
//     cin>>c;
//     cout<<"ASCII of the entered character is: "<<(int)c;
//     return 0;
// }

// 3. WAP to input an ASCII value and display the corresponding character.
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a;
//     cout<<"enter your ASCII value: ";
//     cin>>a;
//     cout<<"corresponding character for your enter ASCII value is: "<<(char)a;
//     return 0;
// }


// Part E: Operators


// 1. WAP to input two integers and display:
// addition
// subtraction
// multiplication
// division
// modulus
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b;
//     cout<<"enter first number: ";
//     cin>>a;
//     cout<<"enter second number: ";
//     cin>>b;
//     cout<<"addition is "<<a+b<<endl;
//     cout<<"subtraction is "<<a-b<<endl;
//     cout<<"product is "<<a*b<<endl;
//     cout<<"division is "<<a/b<<endl;
//     cout<<"modulus is "<<a%b<<endl;   
//     return 0;
// }

// 2. WAP to input an integer and check if it is even or odd.
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a;
//     cout<<"enter number: ";
//     cin>>a;
//     if (a%2 == 0){
//         cout<<a<<" is an even even number.";
//     }
//     else{
//         cout<<a<<" is an odd number.";
//     }
//     return 0;
// }


// Part F: Mathematical Formulas


// 1. WAP to calculate the area of a circle.
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     int r;
//     cout<<"enter desired radius of circle: ";
//     cin>>r;
//     float a = (3.15*r*r);
//     cout<<fixed<<setprecision(2);
//     cout<<"area of circle is "<<a;    
//     return 0;
// }

// 2. WAP to calculate simple interest.
// #include <iostream>
// using namespace std;

// int main()
// {
//     float P, R, T;
//     cout<<"enter the principle amount: ";
//     cin>>P;
//     cout<<"enter the rate of interest: ";
//     cin>>R;
//     cout<<"enter the time period: ";
//     cin>>T;
//     float SI=((P*R*T)/100);
//     cout<<"the simple interest is "<<SI;
//     return 0;
// }

// 3. WAP to calculate compound interest.
// #include <iostream>
// #include <iomanip>
// #include <cmath>

// using namespace std;

// int main()
// {
//     float p, r, t;
//     float a, b, c, ci;
//     cout<<"enter principle amount: ";
//     cin>>p;
//     cout<<"enter rate of interest: ";
//     cin>>r;
//     cout<<"entertime period: ";
//     cin>>t;
//     a = r/100;
//     b = 1 + a;
//     c = pow(b,t);
//     float amt = p*c;
//     ci = amt - p;
//     cout<<fixed<<setprecision(2);
//     cout<<"the coumpound interest is: "<<ci;
//     return 0;
// }

// 4. WAP to calculate gross salary:
// gross_salary = basic + da + ta
// da = 10% of basic
// ta = 12% of basic
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     float da, ta, gs, bs;
//     cout<<"enter basic: ";
//     cin>>bs;
//     da = 0.10*bs;
//     ta = 0.12*bs;
//     gs = bs + da + ta;
//     cout<<fixed<<setprecision(2);
//     cout<<"the gross salary is "<<gs;
//     return 0;
// }


// Part G: Light Thinking (Still Beginner)


// 1. WAP to swap two numbers:
// using a third variable
// without using a third variable
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 6;
//     int b = 7;
//     cout<<"a is 6"<<endl;   
//     cout<<"b is 7"<<endl;
//     int temp = a;
//     a = b; 
//     b = temp;
//     cout<<"new a is "<<a<<endl;   
//     cout<<"new b is "<<b<<endl; 
    
//     int x = 6;
//     int y = 7;
//     cout<<"x is 6"<<endl;   
//     cout<<"y is 7"<<endl;
//     x = x + y;
//     y = x - y;
//     x = x - y;
//     cout<<"new x is "<<x<<endl;   
//     cout<<"new y is "<<y<<endl;  
      
//     return 0;
// }   

// 2. WAP to input a number and check if it is positive, negative, or zero.
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a;
//     cout<<"enter your number: ";
//     cin>>a;
//     if (a>0){
//     cout<<a<<" is positive.";
//     }
    
//     else if (a==0){
//     cout<<"zero.";
//     }
    
//     else{
//     cout<<a<<" is negative."; 
//     }
//     return 0;
// }


// PART H: Loops — ABSOLUTE CORE


// 1️. Print numbers from 1 to n (using for)        ( proves you understand loop structure)
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"enter the extreme number: ";
//     cin>>n;
    
//     for (int i = 1; i <= n; i++)
//     {
//         cout<<" "<<i;
//     }
//     return 0;
// }

// 2. Print numbers from n to 1 (using while)      (proves you understand loop conditions)
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"enter the extreme number: ";
//     cin>>n;
    
//     for (int i = n; i >= 1; i--)
//     {
//         cout<<" "<<i;
//     }
//     return 0;
// }

// 3. Find sum of first n natural numbers          (proves accumulation logic)
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"enter the extreme number: ";
//     cin>>n;
    
//     for (int i = 1; i <= n; i++)
//     {
//         cout<<" "<<i;
//     }
//     int s1, s; 
//     s1 = n*(n+1);
//     s = s1/2;
//     cout<<"\nthe required sum is: "<<s;
//     return 0;
// }

// 4. Print multiplication table of a number       (Proves controlled repetition)
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"enter whose table u wanna print: ";
//     cin>>n;
//     int i = 1;
//     do 
//     {
//         cout<<n<<" x "<<i<<" = "<<n*i<<endl;
//         i++;
//     }
//     while (i <= 20);
//     return 0;
// }

// 5. Find factorial of a number                   (proves loop + multiplication thinking)
// #include <iostream>
// using namespace std;

// int factorial (int n)
// {
//     if (n == 0)
//     return 1;

//     return n*factorial(n-1);
// }

// int main()
// {
//     int n;
//     cout<<"enter number whose factorial u want to calculate: ";
//     cin>>n;
//     cout<<"factorial = "<<factorial(n);
//     return 0;
// }



//PART I: break & continue (Quick sanity)


// 1. Print numbers 1–10, but:
// stop when number becomes 5 (break)
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 10;
//     int i;
    
//     for (i = 1; i <= n; i++)
//     {
//         cout<<" "<<i;
        
//     if (i == 5)
//     break;
//     }
//     return 0;
// }

// 2. Print numbers 1–10, but:
// skip 5 (continue)
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 10;
//     int i;
    
//     for (i = 1; i <= n; i++)
//     {
//         if (i == 5)
//     continue;
//         cout<<" "<<i;
        
    
//     }
//     return 0;
// }


// PART J: switch — MINIMUM REQUIRED


// 1. Calculator using switch
// +
// −
// ×
// ÷
// #include <iostream>
// using namespace std;

// int main()
// {
//     char choice;
//     float a, b;
//     cout<<"Enter operator (+, -, *, /): ";
//     cin>>choice;
//     cout<<"Enter two operands: ";
//     cin>>a>>b;
//     switch (choice) {
//         case '+':
//             cout<<a<<" + " <<b<<" = "<<a+b;
//             break;
//         case '-':
//             cout<<a<<" - "<<b<<" = "<<a-b;
//             break;
//         case '*':
//             cout<<a<<" * "<<b<<" = "<<a*b;
//             break;
//         case '/':
//             if (b!= 0)
//                 cout<<a<<" / "<<b<<" = "<<a/b;
//             else
//                 cout << "Error! Division by zero.";
//             break;
//         default:
//             cout << "Error! Operator is not correct";
//             break;
//     }
//     return 0;
// }

// 2. Day of week (1–7)
// #include <iostream>
// using namespace std;

// int main()
// {
//     int choice;
//     cout<<"Enter day number (1-7): ";
//     cin>>choice;
//     switch (choice) {
//         case 1:
//             cout << "Monday";
//             break;
//         case 2:
//             cout << "Tuesday";
//             break;
//         case 3:
//             cout << "Wednesday";
//             break;
//         case 4:
//             cout << "Thursday";
//             break;
//         case 5:
//             cout << "Friday";
//             break;
//         case 6:
//             cout << "Saturday";
//             break;
//         case 7:
//             cout << "Sunday";
//             break;
//         default:
//             cout << "Invalid day number!";
//             break;
//     }
//     return 0;
// }



// 1. Arrays



// 1. Find the largest and smallest element in an array.
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int arr[] = {12, 35, 95, 34, 56, 87, 49};
//     sort(arr, arr + 7);
//     cout<<"the largest element in given arr is "<<arr[6]<<"."<<endl;
//     cout<<"the smallest element in given arr is "<<arr[0]<<".";
//     return 0;
// }

// 2. Reverse an array in-place.
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int arr[] = {12, 35, 95, 34, 56, 87, 49};
//     reverse(arr, arr + 7);
//     cout<<"the new reversed arr is ";
//     cout<<"{";
//     for (int i = 0; i <= 5; i++)
//     {
//     cout<<" "<<arr[i]<<",";
//     }
//     cout<<" "<<arr[6];
//     cout<<" }.";
//     return 0;
// }

// 3. Count how many times a given element appears in an array.
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int arr[] = { 1, 2, 4, 3, 8, 3, 6, 3, 2, 4, 2, 9 };
//     int n = 12;
//     int x = 2;
//     int freq = count(arr, arr + n, x);
//     cout<<"the frequency of "<<x<<" is "<<freq<<".";
//     return 0;
// }

// 4. Merge two arrays into a single array and remove duplicates.
// #include <iostream>
// using namespace std;

// void sizecount(int n, int m, int arr1[], int arr2[], int arr[], int &size)
// {
//     size  = 0;
//     for (int i = 0; i < n; i++)
//     {
//         arr[size] = arr1 [i];
//         size++;
//     }

//     for (int i = 0; i < m; i++)
//     {
//         arr[size] = arr2 [i];
//         size++;
//     }
// }

// void eledupes (int arr[], int size, int &newsize, int &count)
// {
//     newsize = 0;
//     count = 0;
//     for (int i = 0; i < size; i++)
//     {
//         int j;
//         for ( j = 0; j < newsize; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 break;
//             }
//         }
//         if (j == newsize)
//         {
//             arr[newsize] = arr[i];
//             newsize++;
//         } 
//         else
//         {
//             int k;
//             int flag = 0;

//             for (k = 0; k < i; k++)
//             {
//                 if (arr[k] == arr[i])
//                     flag++;
//             }

//             if (flag == 1)
//                 count++;
//         }
//     }
// }

// int main()
// {
//     int n, m;
    
//     cout<<"enter size of first array: ";
//     cin>>n;
//     cout<<"enter size of second array: ";
//     cin>>m;

//     int arr1[n], arr2[m];
//     int arr[n + m];
//     int count, size, newsize;

    
    
//     cout<<"enter "<<n<<" elements for first array: "<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr1[i];
//     }

//     cout<<"enter "<<m<<" elements for second array: "<<endl;
//     for (int j = 0; j < m; j++)
//     {
//         cin>>arr2[j];
//     }

//     cout<<"the first array is: ";
//     cout<<"{ ";
//     for(int i = 0; i < n; i++)
//     {
//         cout<<arr1[i]<<" ";
//     }
//     cout<<"}"<<endl;

//     cout<<"the second array is: ";
//     cout<<"{ ";
//     for(int i = 0; i < m; i++)
//     {
//         cout<<arr2[i]<<" ";
//     }
//     cout<<"}"<<endl;

//     sizecount(n, m, arr1, arr2, arr, size);

//     cout << "the merged array is { ";
//     for (int i = 0; i < size; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout << "}";

//     eledupes (arr, size, newsize, count);

//     cout<<"\nthe array with no duplicates is { ";
//     for (int i = 0; i < newsize; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"}";

//     cout<<"\nthe number of duplicates removed are "<<(size-newsize);
//     return 0;     
// }



// 2. Pointers



// 1. Print the address and value of a variable using a pointer.
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 4;
//     int* b;
//     b = &a;
//     cout<<"the address of a is "<< b<<endl;
//     cout<<"the value of a is "<<*b;
//     return 0;
// }

// 2. Swap two numbers using pointers.
// #include <iostream> 
// using namespace std;

// void swap(int *a, int *b)
// {
//     *a = *a+*b;
//     *b = *a-*b;
//     *a = *a-*b;
// }

// int main()
// {
//     int a, b;
//     cout<<"enter value of a ";
//     cin>>a;
//     cout<<"enter value of b ";
//     cin>>b;
//     swap (&a, &b);
//     cout<<"new a is "<<a<<endl;
//     cou t<<"new b is "<<b;
// }

// 3. Find the sum of array elements using a pointer.
// #include <iostream>
// using namespace std;
// void sum (int n, int *a, int *b, int *arr)    //arr inside a func isn't size specific, it's the same as *arr
// {
//     for (int i = 0; i < n; i++){
//     arr[i] = a[i]+b[i];
//     }
// }
// int main()
// {
//     int n;
//     cout<<"enter the max limit of arrays to be added: "<<endl;
//     cin>>n; 
    
//     int arr[n], arr1[n], arr2[n];
//     cout<<"enter "<<n<<" elements for first arr: "<<endl;
//     for (int i = 0; i < n; i++){
//         cin>>arr1[i];
//     }
//     cout<<"enter "<<n<<" elements for second arr: "<<endl;
//     for (int j = 0; j < n; j++){
//         cin>>arr2[j];
//     }

//     cout<<"the first array is { ";
//     for (int i = 0; i < n; i++){
//         cout<<arr1[i]<<" ";
//     }
//     cout<<"}"<<endl;
//     cout<<"the second array is { ";
//     for (int i = 0; i < n; i++){
//         cout<<arr2[i]<<" ";
//     }
//     cout<<"}"<<endl;
//     sum (n, arr1, arr2, arr);
    
//     cout<<"the sum is { ";
//     for (int i = 0; i < n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"}";
//     return 0;
// }


// 4. Write a function that takes a pointer to an array and its size, and rotates the array by 1 to the right.
#include <iostream>
using namespace std;

void rotate (int last, int n, int *arr)
{
    last = arr[n-1];

    for (int i = n-1; i > 0; i--)
    {
        arr[i] = arr[i-1];
    }
}

int main()
{
    int n, last;
    cout<<"enter the max limit of array: "<<endl;
    cin>>n; 
    
    int arr[n];
    cout<<"enter "<<n<<" elements for first arr: "<<endl;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"the array is { ";
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"}"<<endl;

    rotate (last, n, arr);
    arr[0] = last;
    cout<<"rotated array is { ";
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"}";

    return 0;
}


// 3. Structures



// 1. Create a struct Student with name, roll number, and marks; print the details.
// 2. Array of structs: store details of 3 students, then print the student with the highest marks.
// 3. Create a struct for complex numbers and write a function to multiply two complex numbers.



// 4. Unions



// 1. Create a union with int, float, and char. Assign a value to each and print after each assignment (observe memory sharing).
// 2. Union for a temperature: store Celsius, then convert and print Fahrenheit using the same union.
// 3. Use a union inside a struct for a student result (marks can be int or float) and print.



// 5. Enums



// 1. Enum for traffic lights (RED, YELLOW, GREEN) and print instructions based on the light.
// 2. Enum for weekdays: input a number 1–7 and print the day.
// 3. Enum for grades (A, B, C, D, F) and write a switch-case function that prints “Excellent/Good/Average/Poor/Fail” based on grade.
