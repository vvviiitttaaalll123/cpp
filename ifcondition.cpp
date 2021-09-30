#include<iostream.h>

int main()                            // Most important part of the program!
{
  int age;                            // Need a variable...
   
  cout<<"Please input your age: ";    // Asks for age
  cin>> age;                          // The input is put in age
  cin.ignore();                       // Throw away enter
  if ( age < 100 ) {                  // If the age is less than 100
     cout<<"You are pretty young!\n"; // Just to show you it works...
  }
  else if ( age == 100 ) {            // I use else just to show an example 
     cout<<"You are old\n";           // Just to show you it works...
  }
  else {
    cout<<"You are really old\n";     // Executed if no other statement is
  }
  cin.get();
}

//Program to Find Roots of a Quadratic Equation
#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    // condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }

    // condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }

    // if roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
} 

