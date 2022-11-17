#include<stdio.h>

int main(){
 
    printf("Calculator in C language\n");
    
    int n1,n2;
    char op;

    printf("num1\n");
    scanf("%d",&n1);
    printf("num2\n");
    scanf("%d",&n2);
    printf("Choose what you want to do among the choices [+,-,/,*]\n");

    scanf(" %c", &op);
    
    if (op=='+'){
        int add=n1+n2;
        printf("The added number is %d",add);
    }
    else if (op=='-'){
        if (n1>n2){
            int sub=n1-n2;
            printf("Subtracte number is %d",sub);

        }
        else{
            int sub=n2-n1;
            printf("Subtracte number is %f",sub);
        }
    }
    else if (op=='/'){
        if (n2==0){
            printf("Cannot divide by zero !");
        }
        else{
            float div=n1/n2;
            printf("Divided number is %f",div);
        }
    }
    else if (op=='*'){
        float mul=n1*n2;
        printf("The multiplied number is %f",mul);
    }

    return 0;
}
