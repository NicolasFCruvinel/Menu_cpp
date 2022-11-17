// Arquivo teste
#include <iostream>
#include <stdlib.h>
#include "menu.h"
using namespace std;

int main() {
  // área de cabeçalho
  char *cabecalho;
  cabecalho = (char *) malloc(sizeof(char));
  cabecalho = "Escolha uma das opções abaixo"; // Entrada com o texto de cabeçalho
  
  string opc[] = {"opção 1", "opção 2", "opção 3", "opc 4"};
  
  int sizeOpc = sizeof(opc)/sizeof(string);
  
  montarMenu(cabecalho, opc, sizeOpc);
}