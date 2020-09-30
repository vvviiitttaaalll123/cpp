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


