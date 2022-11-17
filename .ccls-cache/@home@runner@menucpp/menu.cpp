#include <iostream>
#include "menu.h"

using namespace std;

void montarMenu (char *cabecalho, string *opcoes, int size){
  //===========[Área destinada ao cabeçalho do Menu]==================
  cout << cabecalho <<endl;
  //==================================================================
  //=======================[Opções do menu]===========================
  for(int i=0; i<size; i++){
    cout << "[" << (i+1) << "] " << opcoes[i] << endl; 
  }
}