#include <iostream>
#include <string>
using namespace std;

int main() 
{
  string codigo;
  int qntd;
  double total;
  double preçouni = 0.00;
  
  
  cout << "Produtos: \n 1001 preço 5,32 \n 1324 preço 6,45 \n 6548 preço 2,37 \n 0987 preço 5,32 \n 7623 preço 6,45 \n";
  cout << "Informe o códgido do produto: " << endl;
  cin >> codigo;

  cout << "informe a quantidade Desejada: " << endl;
  cin >> qntd;

  
      if (string codigo == 1001)
      
        preçouni = 5.32;
        total = preçouni * qntd;

        cout << "Preço total a pagar: " << total << endl;
      
    
      if ('codigo' = 1324)      
      
        preçouni = 6.45;
        total = preçouni * qntd;

        cout << "Preço total a pagar: " << total << endl;
      
  
      if (codigo == 6548)

        preçouni = 2.37;
        total = preçouni * qntd;

        cout << "Preço total a pagar: " << total << endl;
      
  
      if (codigo == 0987)

      preçouni = 5.32;
      total = preçouni * qntd;

        cout << "Preço total a pagar: " << total << endl;
      

      if (codigo == 7632)

      preçouni = 6.45;
      total = preçouni * qntd;

        cout << "Preço total a pagar: " << total << endl;
      

  

  return 0;

}
