#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

 bool ordena(double a, double b){
       return a > b; 
// função decrescente 
}

int main(){

    int N;
    cout << "Quantos atletas deseja avaliar? ";
    cin >> N;
    string atletas[N];
    double tempo[N];

    cout << "Diga o nome dos atletas e seus respectivos tempos: " << "\n";

    // função da lista de atletas e o tempo que cada um fez o percurso.
    for(int i=0; i < N; i++ ){ 
        cout << "Atleta N° " << i << ": ";
        cin >> atletas[i];
          cout << "Seu tempo (em segundos): ";
          cin >> tempo[i];
    }
    
    // Definir maior e menor tempo dos atletas gerais.
    double maior = tempo[0];
    double menor = tempo[0];
    for (int i=0; i<N; i++ ) {    
      if (tempo[i] > maior){
          maior = tempo[i];
      }
      if (tempo[i] < menor){
          menor = tempo[i];
      }
    }
    
    // lista os dados já coletados
    cout << "Os atletas e seus tempos são: " << "\n";
    for(int i=0; i<N; i++){  
      cout << "Atleta: " << atletas[i] << "; com o Tempo de: " << fixed << setprecision(2)
                                                           << tempo[i] << " Segundos. \n";
    }

    
    // Lista e classifica o desempenho de cada atleta baseado no tempo de percurso.
    cout << "A lista de desempenho dos atletas é a seguinte:  " << "\n";
    for(int i=0; i<N; i++){
        if (tempo[i] < 11){
        cout << atletas[i] << " foi Excelente" << "\n";
      } else if (tempo[i] >= 11 && tempo[i] < 12){
        cout << atletas[i] << " foi Bom" << "\n";
      } else if (tempo[i] >= 12){
        cout << atletas[i] << " Precisa melhorar" << "\n";
      }
    }

    
    // por fim informa algumas características sobre os atletas e algumas informações úteis.
    cout << "O melhor tempo foi: " << fixed << setprecision(2) << menor << " segundos, e o pior: "
    << fixed << setprecision(2) << maior << " segundos\n";

    double soma = 0;
    for (int i=0; i<N; i++){
        soma += tempo[i];
    }

    cout << "Tempo médio registrado: " << fixed << setprecision(2) << soma/N << "\n";

    cout << "O vetor em ordem decrescente é: \n";
    sort(tempo, tempo+N, ordena);

     for(int i=0; i<N;i++){
        cout << tempo[i] << "  ";
    }
    return 0;
}
