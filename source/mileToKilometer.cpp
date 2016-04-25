
#include <iostream>
#include <string>


double convert_to_kilometers(double miles);
int main ()
{
std :: cout << " Bitte geben Sie Meilen ein:" << std :: endl;
double miles;
std :: cin >> miles ;
std :: cout << miles << " entspricht " << convert_to_kilometers(miles)<< std :: endl;
}
double convert_to_kilometers(double miles)
{
     double kilometers;
     kilometers = 1.609 * miles;
     return kilometers;
}
