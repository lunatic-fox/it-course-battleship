#include <stdio.h>
#define SHIP_SIZE 3 // Tamanho do navio

int main() {
  int board[10][10]; // Tabuleiro

  // Criação do tabuleiro
  for(int i = 0; i < 10; i++)
    for(int j = 0; j < 10; j++)
      board[i][j] = 0;

  // Inserção dos navios nos tabuleiro
  // Navio horizontal: [2, 8][3, 8][4, 8]
  for(int row = 2; row < 5; row++)
    board[row][8] = SHIP_SIZE;

  // Navio vertical: [4, 1][4, 2][4, 3]
  for(int column = 1; column < 4; column++)
    board[4][column] = SHIP_SIZE;
  
  // Navio diagonal: [6, 7][7, 6][8, 5]
  for(int row = 6, column = 7; row < 9, column > 4; row++, column--)
    board[row][column] = SHIP_SIZE;
  
  // Navio diagonal: [2, 4][3, 5][4, 6]
  for(int row = 2, column = 4; row < 5, column < 7; row++, column++)
    board[row][column] = SHIP_SIZE;
  
  // Exibição do tabuleiro
  for(int column = 0; column < 10; column++) {
    for(int row = 0; row < 10; row++)
      printf("%d ", board[row][column]);
    printf("\n");
  }

  return 0;
}
