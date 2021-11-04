#include <iostream>
using namespace std;

int main() 
{

  int qntdA = 0, qntdB =0 , qntdAB = 0, qntdO = 0;
  int idade;
  string tipo, paciente;
  char resposta,  novo_doador = 's'; 
  
  while (novo_doador == 's') 
  {
   cout << "Qual sua idade?\n";
   cin >> idade;

   if (idade >=18 && idade < 70)
   {
       resposta = 's';
      
      if (idade >60)
      {
        do{
          cout << "Doou antes dos 60? (s/n)\n";
          cin >> resposta;
        }while((resposta !='s')&&(resposta !='n'));
      }
      if (resposta == 's')  
      {
        cout << "tipo:\n";
         cin >> tipo;

         if (tipo == "A" || tipo == "B" || tipo == "AB"|| tipo == "O")         
          {    
            if (tipo  == "A")
            {
              qntdA = qntdA + 1;
            }

            if (tipo == "B")
            {
              qntdB  = qntdB + 1;
            }

            if (tipo == "AB")
            {
              qntdAB = qntdAB + 1;
            }

            if (tipo == "O")
            {
              qntdO = qntdO +1;
            }
          }
          else 
          {
            cout << "Tipo sanguineo inválido!\n";    
          }
      }
      else  
      {
        cout << "doador inválido\n";
      }
      cout << "deseja iniciar um novo cadastro (s/n)?\n";
      cin >> novo_doador;
    } 
    else 
    {
     cout << "doador não possui a idade adeqquada para doar\n";
    }
  }
    cout << "qual o tipo de sangue do paciente?\n"; 
    cin >> tipo;
    if (tipo == "A" || tipo == "B" || tipo == "AB"|| tipo == "O")
      {
      if (tipo == "A")
      {
        cout << "Quantidade de sangue do tipo A: " << qntdA;
      }
      if (tipo == "B") 
      {
        cout << "Quantidade de sangue do tipo B: " <<qntdB; 
      }
      if (tipo == "AB")
      {
        cout << "Quantidade de sangue do tipo AB: " << qntdAB;
      }
      if (tipo == "O")
      {
        cout << "Quantidade de sangue do tipo O: " <<qntdO;
      }  
      }
      else 
      cout << "tipo sanguinio inválido";
 }
