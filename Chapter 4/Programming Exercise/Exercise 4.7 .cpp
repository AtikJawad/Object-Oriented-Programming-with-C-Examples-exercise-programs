/*Write a function power() to raise a number m to power n. The function takes a double value for m and int value for n and returns the result correctly. Use a default value of 2 for 
n to make the function to calculate the squares when this argument is omitted. Write a main that gets the values of m and n from the user to test the function*/
#include <bits/stdc++.h>
using namespace std;
double power(double m, int n = 2)
{
    return pow(m, n);
}
int main()
{
    double m;
    cout << "Enter the base : ";
    cin>>m;
    int n;
    cout << "Enter the exponent : ";
    cin>>n;
    
    cout<<"Result : "<<power(m,n);
    return 0;
}
