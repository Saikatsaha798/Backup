#include <stdio.h>
#define s 5

int push(int arr[], int tos, int size){
  int x;
  if(tos > size){
    printf("stack overflow\n");
  }else{
    printf("enter a number : ");
    scanf("%d", &x);
    arr[++tos]=x;
  }
  return tos;
}

int pop(int tos){
  if(tos<0){
    printf("stack underflow\n");
  }else{
    tos--;
  }
  return tos;
}

int display(int arr[], int tos, int size){
  printf("|-|\n");
  for(tos; tos>=0; tos--){
    printf("|%d|\n", arr[tos]);
    printf("|-|\n");
  }
  return 0;
}

int choices(){
  int c;
  printf("enter your choice :\n1 --> push\n2 --> pop\n3 --> display\n4 --> exit\nChoice : ");
  scanf("%d", &c);
  return c;
}

int main(){
  int choice=1, tos=-1;
  //printf("enter array size : ");
  //scanf("%d", &s);
  int stack[s];
  while(choice != 4){
    choice = choices();

    switch(choice){
      case 1:
        tos=push(stack, tos, s);
        display(stack, tos, s);
        break;
      case 2:
        tos=pop(tos);
        display(stack, tos, s);
        break;
      case 3:
        display(stack, tos, s);
        break;
      case 4:
        break;
      default:
        printf("enter correct choice\n");
    }
  }
  return 0;
}


