#include <stdio.h>

int passwin(int board[], int i){
  int k = 0, j = 0, l = 0, c = 0;

  if (board[0]*board[4]*board[8] == i*i*2){
    if (board[0] == 2){
      k = 0;
    }
    else if (board[4] == 2){
      k = 4;
    }
    else{
      k = 8;
    }

    return k;
  }

  else if (board[2]*board[4]*board[6] == i*i*2){
    if (board[2] == 2){
      k = 2;
    }
    else if (board[4] == 2){
      k = 4;
    }
    else{
      k = 6;
    }

    return k;
  }

  else{
    for (j=0; j<3; j++){
      c = 1;
      for (l=0; l<3; l++){
        c *= board[j+l];
        if (board[j+l] == 2){
          k = j+l;
        }
      }
      if (c == i*i*2){
        return k;
      }
    }

    for (j=0; i<3; j++){
      if (board[j]*board[j+3]*board[j+6] == i*i*2){
        for (l=0; l<3; l++){
          if (board[j+l] == 2){
            return j+l;
          }
        }
      }
    }
  }
}

int go(int board[], int i, int c){
  board[i] = c;
  return 0;
}

int ai(int board[], int c, int m){
  int i, k=0, j;

  if (m>2){
    k = posswin(board, c);
    if (k==0){
      if (c == 'X'){
        j = 5;
      }
      else{
        j = 3;
      }

      k = posswin(board, j);
    }

    return k;
  }
  
  if (board[4]==2){
    k=2;
  }
    
  else{
    for (i=0; i<4; i++){
      if (board[2*(i+1)]){
        k=2*(i+1);
      }
      break;
    }
  }

  return k;
}

int show(int board[]){
  int i,j;
  char c;

  for (i=0; i<3; i++){
    printf("+-+-+-+\n|");
    for (j=0; j<3; j++){
      if (board[i+j]==2){
        c = ' ';
      }
      else if (board[i+j]==3){
        c = 'X';
      }
      else{
        c = 'O';
      }
      printf("%c|", c);
    }
    printf("\n");
  }
  printf("+-+-+-+\n");

  return 0;
}

int main(){
  int board[9], i, c=1;

  for (i=0; i<9; i++){
    board[i] = 3;
  }

  for (i=1; i<9; i++){
    // play here
  }

  show(board);
}
