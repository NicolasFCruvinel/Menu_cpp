#include <iostream>
#include "menu.h"

using namespace std;

int sizeVet(string *vetor); // prtótipo da função para calular o tamanho do vetor

//
void montarMenu (char *cabecalho, string *opcoes){
  //===========[Área destinada ao cabeçalho do Menu]==================
  cout << cabecalho <<endl;
  //==================================================================
  //=======================[Opções do menu]===========================
  for(int i=0; i<sizeVet(opcoes); i++){
    cout << "[" << (i+1) << "] " << opcoes[i] << endl; 
  }
}

// Função para calcular o tamanho do vetor
int sizeVet(string *vetor){
    int c = 0;
    while(vetor[c]!="\0")
        c++;
    return c;
}