/*
Name: Prashant Sah
ID: 24130745
MAC 125, Section 8512
Lab_2, program_2
program to check if given number is palindrome:
*/
#include <iostream>
using namespace std;
int main() {
    int num,rem,temp,rev=0;
    cout<<"enter the number to check if it is palindrome or not: ";
    cin>>num;
    temp =num;
    while(temp>0){
        rem = temp%10;
        rev = rev*10+rem;
        temp /= 10;
    }
    if(rev == num){
        cout<<"The given number is Palindrome"<<endl;
    }
    else{
        cout<<"The given number is not a Palindrome"<<endl;
    }
    return 0;
}
