//cout<<"phrase to be printed;
//cout<<"phrase to be printed "<<value of a defined variable to be printed (equivalents to %d type shi-);
//local variable takes precedence over global variable in a function.
//<< is called insertion ope rator.
//>> is called extraction operator.
//cin>>" : scanf  and  cout<<" : printf

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 4;
//     int b= 10;
//     int pi = 3.14;
//     char c = 'a';
//     cout<<"the value of a is "<<a<<" and the value of b is "<<b;
//     cout<<"\nthe value of pi is "<<pi;
//     cout<<"\nthe value of c is "<<a;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num1, num2;
//     cout<<"enter the value of num1: ";
//     cin>>num1;
//     cout<<"enter the value of num2: ";
//     cin>>num2;

//     cout<<"sum is "<<num1+num2;
//     return 0;
// }

/*
header files:
1. system defined header files: #include <iostream>
2. user defined header files: #include "helloworld.h"
*/

/*
operators:
\n can also be written as endl
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 5, b = 6;
//     cout<<"The value of a + b is "<<a+b<<endl;
//     cout<<"The value of a - b is "<<a-b<<endl;
//     cout<<"The value of a * b is "<<a*b<<endl;
//     cout<<"The value of a / b is "<<a/b<<endl;
//     cout<<"The value of a % b is "<<a%b<<endl;  
//     cout<<"The value of a++ is "<<a++<<endl;     //there only exist 2 commands which end up happening due to the double increment (1.derefrence and print index 0 (visible to user) 2.shift the pointer ahead (happens inside the memory)  twice) but the user only physically sees the first one. if my pointer is lowkenuinly incremented after p++ and then in the exact next line after printing *p++ i print *p, it will print index 1 instead of index 0.
//     cout<<"The value of a-- is "<<a--<<endl;
//     cout<<"The value of ++a is "<<++a<<endl;    //this just shifts the pointer first then derefrence and print it.
//     cout<<"The value of --a is "<<--a<<endl;
//     cout<<endl;
//     return 0;
// }

//:: - scope variable when i have local variable c but also a global var c and i want the global to preside over the local.

// #include<iostream> 

// using namespace std;

// int c = 45;

// int main(){
    
//     // *************Build in Data types****************
//     int a, b, c;
//     cout<<"Enter the value of a:"<<endl;
//     cin>>a;
//     cout<<"Enter the value of b:"<<endl;
//     cin>>b;
//     c = a + b;
//     cout<<"The sum is "<<c<<endl;
//     cout<<"The global c is "<<::c;

//     // ************* Float, double and long double Literals****************
//     float d=34.4F;
//     long double e = 34.4L; 
//     cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
//     cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
//     cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
//     cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
//     cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
//     cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;  

//     // *************Reference Variables**************** 
//     // Rohan Das----> Monty -----> Rohu ------> Dangerous Coder
    // float x = 455;
    // float & y = x;   //y ka ghar is x and x is 455.
    // cout<<x<<endl;
    // cout<<y<<endl;

//     // *************Typecasting**************** 
//     int a = 45;   
//     float b = 45.46;
//     cout<<"The value of a is "<<(float)a<<endl;
//     cout<<"The value of a is "<<float(a)<<endl;

//     cout<<"The value of b is "<<(int)b<<endl;
//     cout<<"The value of b is "<<int(b)<<endl;
//     int c = int(b);

//     cout<<"The expression is "<<a + b<<endl;
//     cout<<"The expression is "<<a + int(b)<<endl;
//     cout<<"The expression is "<<a + (int)b<<endl;


//     return 0;
// }

//pointers:
// #include<iostream>
// using namespace std;

// int main()
// {
//     // What is a pointer? ----> Data type which holds the address of other data types
//     int a = 3;
//     int* b;
//     b = &a;

//     // & ---> (Address of) Operator
//     cout<<"The address of a is "<<&a<<endl;
//     cout<<"The address of a is "<<b<<endl;

//     // * ---> (value at) Dereference operator
//     cout<<"The value at address b is "<<*b<<endl;     //ie the value at &b is *d.

//     // Pointer to pointer --> stores the address of the pointer. 
//     int** c = &b;     //here, **c stores the address of *b, ie, address of the address storing data
//     cout<<"The address of b is "<<&b<<endl;
//     cout<<"The address of b is "<<c<<endl; 
//     cout<<"The value at address c is "<<*c<<endl; 
//     cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl; 

//     return 0;
// }


//pointers and arrays:
/*
//pointer arithmatic:
new address (of a member in an array) = current address + i * size of data type
for the address of an element of an array, u do not dereference it, the name of array is the address
for eg-
marks : address of first column of array named marks.
for int marks[] = {32 , 99 , 38 , 51};
p = 32 : address of marks[0]
(p+1) = p + 1*4 = 32 + 1*4 = 36 : address of marks[1]
*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     // Pointers and arrays
//     int marks[] = {23, 45, 56, 89};
//     int* p = marks;   //p stores the address of the array
//     cout<<*(p++)<<endl; //value at p then incremented twice
//     cout<<*(p)<<endl; 
//     cout<<*(++p)<<endl;
//     cout<<*(p)<<endl; 
//     // cout<<"The value of *p is "<<*p<<endl;
//     // cout<<"The value of marks[0] is "<<*p<<endl;   //since p stores the address of the element at marks[0], therefore we use *p (we derefrence p) to print the value at op instead of the address.
//     // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
//     // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
//     // cout<<"The value of *(p+3) is "<<*(p+3)<<endl; 
//     return 0;
// }


//structures, unions, enums:
/*
#include <iostream>
using namespace std;

typedef struct student    //typedef gave the structure student a nickname 'stu'
{
    int id;
    int marks;
    char fav_char;
} stu;    //separate memory allocated for each member. more than one variable can be used simultaneously.

union money   //memory of highest bit used. only one variable used at a time.
{
    int rice; //4
    char car; //1
    float pounds; //4
}m1;

int main()
{
    struct student harry, ravi, shubham;     //could also be written as ep harry, ravi, shubham;
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    
    harry.marks = 98;
    ravi.marks = 86;
    shubham.marks = 90;

    harry.fav_char = 'h';
    ravi.fav_char = 'r';
    shubham.fav_char = 's';

    cout<<"id num "<<harry.id<<" got "<<harry.marks <<" marks."<<endl;
    cout<<"his fav character is "<<harry.fav_char<<"."<<endl;
    cout<<endl;

    cout<<"id num "<<shubham.id<<" got "<<shubham.marks <<" marks."<<endl;
    cout<<"his fav character is "<<shubham.fav_char<<"."<<endl;
    cout<<endl;

    cout<<"id num "<<ravi.id<<" got "<<ravi.marks <<" marks."<<endl;
    cout<<"his fav character is "<<ravi.fav_char<<"."<<endl;
    cout<<endl;

    m1.rice = 34;
    cout<<m1.rice;
    return 0;
}
*/

/*
Definition: Enum (enumeration) is a user-defined type of named integer constants, used for readability and safety.

Syntax:
enum EnumName { Constant1, Constant2, Constant3 };
enum class EnumClassName { Constant1, Constant2, Constant3 }; // safer, C++11

Example (Traffic Light):

#include <iostream>
using namespace std;

// Using enum to represent traffic lights
enum Light { RED, YELLOW, GREEN };

int main() {
    Light light = RED;  // valid assignment

    // Simulate traffic light behavior
    if (light == RED) {
        cout << "Stop" << endl;
    } else if (light == YELLOW) {
        cout << "Caution" << endl;
    } else if (light == GREEN) {
        cout << "Go" << endl;
    }

    // Uncommenting the next line would compile, but using magic numbers is unsafe:
    // light = 5; //  could silently break logic

    return 0;
}
*/

//function process: copy, call, execute, return.
//inline function process: copy, execute, return.

/*
function prototypes:
type function - name (arguments)

int sum(int a, int b); //--> Acceptable
int sum(int a, b); //--> Not Acceptable 
int sum(int, int); //--> Acceptable 
void g(void); //--> Acceptable 
void g(); //--> Acceptable 

parameters: formal and actual. 
formal- arguments
actual- used inside int main()

error: calling g()
not error: calling void g() or void g(void)
*/


/*
The rule is:

🧠 Functions are only given VALUES, never variables.

So when you say:

swap(x, y);


C++ hears:

“Here are two NUMBERS: 5 and 10.”

NOT:

“Here are my variables x and y.”*/










// &: it gives the address of a variable. (& yani ghar kaha hai)
// *: it gives the value at the address stored in a pointer. (* yani ghar ke andar kya hai)