#include <iostream>
using namespace std;

int main() 
{

  float valor, conv;
  int op;

  cout << "1) Converter de Real para Euro \n 2) Converter de Real para Dólar \n 3) Converter de Euro para Dólar \n 4) Converter de Euro para Real \n 5) Converter de Dólar para Euro \n 6) Converter de Dólar para Real \n 7) Sair \n";
  cin >> op;
  
  while ( op !=7 )
  
  switch (op)
  {
    case 1:
    
      cout << "Você selecionou: " <<  "Converter de Real para Euro " << endl << endl << "Digite o valor a ser convertido: ";
      cin >> valor;

      conv = valor * 0.15;

      cout << endl << valor << " Convertido para Euro fica: " << conv << endl << endl;
      
      cout << "Selecione outra função, se deseja sair, digite 7" << endl ;
      cin >> op;
     
      break;
    

    case 2:
    
      cout << "Você selecionou: " <<  "Converter de Real para Dolár " << endl << endl << "Digite o valor a ser convertido: ";
      cin >> valor;

      conv = valor * 0.18;

      cout << endl << valor << " Convertido para Dolár fica: " << conv << endl << endl;
       
      cout << "Selecione outra função, se deseja sair, digite 7" << endl ;
      cin >> op;
     
      break;

    case 3:
    
      cout << "Você selecionou: " <<  "Converter de Euro para Dólar " << endl << endl << "Digite o valor a ser convertido: ";
      cin >> valor;

      conv = valor * 1.21;

      cout << endl << valor << " Convertido para Dólar fica: " << conv << endl << endl;
       
      cout << "Selecione outra função, se deseja sair, digite 7" << endl ;
      cin >> op;
     
    case 4: 
    
      cout << "Você selecionou: " <<  "Converter de Euro para Real " << endl << endl << "Digite o valor a ser convertido: ";
      cin >> valor;

      conv = valor * 6.59;

      cout << endl << valor << " Convertido para Real fica: " << conv << endl << endl;
      
      cout << "Selecione outra função, se deseja sair, digite 7" << endl ;
      cin >> op;
     
     break;
    
    case 5:

      cout << "Você selecionou: " <<  "Converter de Dólar para Euro " << endl << endl << "Digite o valor a ser convertido: ";
      cin >> valor;

      conv = valor * 0.83;

      cout << endl << valor << " Convertido para Euro fica: " << conv << endl << endl;
       
      cout << "Selecione outra função, se deseja sair, digite 7" << endl ;
      cin >> op;
     
      break;

    case 6:
    
      cout << "Você selecionou: " <<  "Converter de Dólar para Real " << endl << endl << "Digite o valor a ser convertido: ";
      cin >> valor;

      conv = valor * 5.45;

      cout << endl << valor << " Convertido para Real fica: " << conv << endl << endl;
       
      cout << "Selecione outra função, se deseja sair, digite 7" << endl ;
      cin >> op;
     
      break;

    case 7:
      
      break;  
    
    default:
    break;
  }
 
  cout << "Você seleciounou: Sair \n Adeus!" << endl;

  return 0;
}
