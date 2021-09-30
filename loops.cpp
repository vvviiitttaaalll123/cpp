#include <iostream>
 
using namespace std; // So we can see cout and endl
 
int main()
{ 
  int x = 0;  // Don't forget to declare variables
   while ( x < 10 ) { // While x is less than 10 
        cout<< x <<endl;
      x++;             // Update x so the condition can be met eventually
  }
  cin.get();
}

//LCM using while and if
#include <stdio.h>
int main() {
    int n1, n2, max;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // maximum number between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
    return 0;
}
