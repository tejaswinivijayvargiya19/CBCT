#include <iostream>
#include <stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
void add();
void sub();
void multi();
void division();
void sqr();
void srt();
void exit();
int main()
{
    int opr;
    do
    {
        cout << "select any operation from calculator : "

        "\n1 = addition"
        "\n2 = subtraction"
        "\n3 = multiplication"
        "\n4 = division"
        "\n5 = square"
        "\n6 = square root"
        "\n7 = exit"
        "\n\n make a choice : ";
        cin >> opr;

switch(opr){
    case 1 :
    add();
    break;
    case 2 :
    sub();
    break;
    case 3 : 
    multi();
    break;
    case 4 :
    division();
    break;
    case 5 :
    sqr();
    break;
    case 6 :
    srt();
    break;
    case 7 :
    exit(0);
    break;
    default : 
    cout << "something is wrong !!..";
    break;
}
cout << "\n ---------------------------------\n";
}
while (opr != 7);
getch();
}

void add()
{
    int n, sum = 0,i,number;
    cout<< "how many number you want to add : ";
    cin >> n;
    cout << "plese enter the number one by one : \n ";
    for(i = 1; i<=n; i++)
    {
        cin>> number;
        sum = sum + number;
    }
    cout << "\nsum of the numbers are : "<< sum;
} 
void sub()
{
    int num1, num2 , z;
     cout << "\n enter the first number : ";
     cin >> num1;
     cout << "\n enter the second number : ";
     cin >> num2;
     z = num1 - num2;
     cout << "\n the subtraction of the number :" << z;
}
void multi()
{
    int num1, num2, mul;
    cout << "\n enter the first number : ";
     cin >> num1;
     cout << "\n enter the second number : ";
     cin >> num2;
     mul = num1 * num2;
     cout << "\n the multiplication of the number :" << mul;
}
void division()
{
    int num1,num2,div =0;
    cout << "\n enter the first number : ";
     cin >> num1;
     cout << "\n enter the second number : ";
     cin >> num2;
     while (num2 == 0)
     {
        cout << "\n divisor cannot be zero"
        "\n please enter the divisor once again ";
        cin >> num2;
     }
     div = num1/num2;
     cout << "\n the division of number : " << div;
}
void sqr()
{
int num1;
float sq;
cout << "\n enter the number to fint the square: ";
cin >> num1;
sq = num1 *num1;
cout <<"\n square of "<<num1<< "is: "<< sq;
}
void srt()
{
    float q;
    int num1;
    cout <<"\n enter the number to fint our the square root : ";
    cin >> num1;
    q = sqrt(num1);
    cout << "\n square root of "<< num1 << "is : "<< q;
}
  
