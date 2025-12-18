#include <stdio.h>
#define SHIP_SIZE 3 // Tamanho do navio

int main() {
  int board[10][10]; // Tabuleiro
  int shipVertical[SHIP_SIZE], shipHorizontal[SHIP_SIZE]; // Navio

  // Criação do tabuleiro
  for(int i = 0; i < 10; i++)
    for(int j = 0; j < 10; j++)
      board[i][j] = 0;

  // Inserção de dados nos vetores dos navios
  for(int i = 0; i < SHIP_SIZE; i++) {
    shipVertical[i] = 3;
    shipHorizontal[i] = 3;
  }

  // Inserção dos navios nos tabuleiros
  for(int row = 0; row < 10; row++)
    for(int column = 0; column < 10; column++) {
      // Navio vertical: [1, 4][2, 4][3, 4]
      if (column == 4 && row >= 1 && row <= 3) 
        for (int i = 0; i < SHIP_SIZE; i++)
          board[column][row] = shipVertical[i];
      
      // Navio horizontal: [8, 2][8, 3][8, 4]
      if (row == 8 && column >= 2 && column <= 4)
        for (int i = 0; i < SHIP_SIZE; i++)
          board[column][row] = shipHorizontal[i];
    }
  
  // Exibição do tabuleiro
  for(int column = 0; column < 10; column++) {
    for(int row = 0; row < 10; row++)
      printf("%d ", board[row][column]);
    printf("\n");
  }

  return 0;
}
