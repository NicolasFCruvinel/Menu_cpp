// Arquivo teste
#include <iostream>
#include <stdlib.h>
#include "menu.h"
using namespace std;

int main() {
  // área de cabeçalho
  char *cabecalho;
  cabecalho = (char *) malloc(sizeof(char));
  cabecalho = "Cabeçalho Teste "; // Entrada com o texto de cabeçalho
  
  //área das opções do menu
  string opc[] = {"opção 1", 
                  "opção 2", 
                  "opção 3", 
                  "opc 4", 
                  "opc 5", 
                  "opc 6", 
                  "\0"};        //condição final do vetor, IMPORTANTE para cálculo do comprimento do vetor.
  
  montarMenu(cabecalho, opc); //função responsável por montar o Menu
}