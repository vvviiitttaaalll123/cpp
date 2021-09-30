#include <iostream>
 
using namespace std;
 
int main()
{
   char string[256];   
 
  cout<<"Please enter a long string: ";
  cin.getline ( string, 256, '\n' );              // Input goes into string
  cout<<"Your long string was: "<< string <<endl;
  cin.get();
}

//Program to Check Alphabet

#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c is an alphabet.", c);
    else
        printf("%c is not an alphabet.", c);

    return 0;
}
