#include <iostream>
#include <stdlib.h>
#include "menu.h"
using namespace std;

int main() {
  char *cabecalho;
  cabecalho = (char *) malloc(sizeof(char));
  cabecalho = "Escolha uma das opções abaixo";
  
  string opc[] = {"opção 1", "opção 2", "opção 3", "opc 4"};
  
  int sizeOpc = sizeof(opc)/sizeof(string);
  
  cout << sizeOpc << "\n";
  montarMenu(cabecalho, opc, sizeOpc);
}