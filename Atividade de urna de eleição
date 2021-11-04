#include <iostream>
using namespace std;
void opcoes()
{ // função para apresentar as opcoes
  cout << "1. Candidato Jair Rodrigues\n2. Candidato Carlos Luz\n3. Candidato Neves Rocha\n4. Nulo\n5. Branco" <<endl;
}

int jair = 0, carlos = 0, neves = 0, nulo = 0, branco = 0;

int votos(int a)
{
  if(a==1)
  {
    jair = jair + 1;}
  if (a==2)
  { 
    carlos = carlos + 1;}
  if (a==3)
  { 
    neves = neves + 1;}
  if (a==4){ 
    nulo = nulo +  1;}
  if (a==5)
  { 
    branco = branco + 1;}
  if (a==6)
  {
    cout << "\nO número de votos de cada candidato foi:\n" << "Jair rodrigues = " << jair << endl  << "Carlos Luz = " << carlos << endl << "Neves rocha = " << neves << endl << "Votos em nulo = " << nulo << endl << "Votos em Branco = " << branco << endl ;
  }
  if (a==7)
  {
    int v = 0;
    int c;
    int lista[3] = {jair,carlos,neves};
    for(int i=0;i<3;i++){
      if(v<lista[i]){
        v = lista[i];
        c = i+1;
      }
    }
    if(c==1){
      cout << "\nJair Rodrigues Ganhou com " << v << " Votos!\n" << endl;      
    }
    if(c==2){
       cout << "\nCarlos Luz Ganhou com " << v << " Votos!\n" << endl;    
    }
    if(c==3){
       cout << "\nNeves Rocha Ganhou com " << v << " Votos!\n" << endl;    
    }
  }
  if (a == 8)
  {
    int total = jair + carlos + neves; 
    float p = 0; // porcentagem
    double perbranco = 0;
    p = branco * 100;
    perbranco = p / total;
    cout << "\nPorcentagem de Votos Brancos = " << printf("%.1f", perbranco) << "%\n" << endl;

  }
  if ( a == 9)
  {
    int total = jair + carlos + neves; 
    float p = 0;
    double pernulo = 0;
    p = branco * 100;
    pernulo = p / total;
    cout << "\nPorcentagem de Votos Nulos = " << printf("%.1f", pernulo) << "%\n" << endl;

  }
  return 0;  
}

int linhas()
{
  int i = 0;
  while (i < 5) {
  cout << "------";
  i++;
  }
  cout << endl << "\n";
  
  return 0;
}

void results() 
{
 cout << "\na. O número de votos de cada candidato\nb. A porcentagem de votos nulos\nc. A porcentagem de votos brancos\nd. O candidato vencedor\n";
}

int main() 
{
  int op; //opcões de voto
  
  opcoes();  //  opçoes
  cout << "Entre com o seu voto:\n" << endl;
  cin >> op;

  while ( op !=7 )
 
  switch (op){
    case 1:
      cout << endl << "\nVocê votou em: Jair Rodrigues\n" << endl;
      votos(1);
      linhas();
      opcoes();
      cout << "Entre com o seu voto:\n" << endl;
      cin >> op;
    break;
        
    case 2:
      cout << "\nVocê votou em: Carlos Luz\n" << endl;
      votos(2);
      linhas();
      opcoes();
      cout << "Entre com o seu voto:\n" << endl;
      cin >> op;
    break;

    case 3: 
      cout << "\nVocê votou em: Neves Rocha\n" << endl;
      votos(3);
      linhas();
      opcoes();
      cout << "Entre com o seu voto:\n" << endl;
      cin >> op;
    break;

    case 4:
      cout << "\nVocê votou em: Nulo\n" << endl;
      votos(4);
      linhas();
      opcoes();
      cout << "Entre com o seu voto:\n" << endl;
      cin >> op;      
    break;

    case 5:
      cout << "\nVocê votou em branco\n" << endl;
      votos(5);
      linhas();
      opcoes();
      cout << "Entre com o seu voto:\n" << endl;
      cin >> op;
    break;

    case 6:
     char resultados; 
     results();
     cout << "\nSelecione qual resultado deseja ver: " << endl;
     cin >> resultados; 
     
      switch (resultados){

        case 'a':
        votos(6);
        break;

        case 'b':
        votos(8);
        break;

        case 'c':
        votos(9);
        break;

        case 'd':
        votos(7);
        break;

        default:
        break; 
      }
      break;

    break;
    
    case 7:
    break;

    default:
    break;
    }
}
