#include <iostream>
using namespace std;

int main() 
{

  int numero = 2;  
  cout << "1 elefante incomoda muita gente\n";
  while ( numero <= 10)
  {
   cout << endl << numero << " elefantes ";
   if (numero % 2 != 0)
      cout << " incomodam muita gente" << endl;
   else
    {
     
      int i  = 0;
     
      while (i  < numero)  
      {   
         cout << " incomodam ";
         if(i < numero -1)
            cout << ", ";
         i++;
      }
    cout << " muito mais!\n";
  }
   numero++;
  }
}
