/**
 * This programs provides basic calculator functionality
 * allowing a user to enter two operands and to compute
 * various calculated values.
 *
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char **argv) {

  double a, b;
  int choice;
  double output;

  printf("Enter operand a: ");
  scanf("%lf", &a);

  printf("Enter operand b: ");
  scanf("%lf", &b);

  printf("Enter operation:\n");
  printf("(1) Addition\n");
  printf("(2) Subtraction\n");
  printf("(3) Multiplication\n");
  printf("(4) Division\n");
  printf("(5) Minimum\n");
  printf("(6) Power\n");
  printf("(7) log_a(b)\n");
  scanf("%d", &choice);

  //TODO: process the results here
  if(choice == 1){
    output = a + b;
    printf("%f plus %f equals %f\n", a, b, output);
  }else{
    if(choice == 2){
      output = a - b;
      printf("%f minus %f equals %f\n", a, b, output);
    }else{
      if(choice == 3){
        output = a*b;
        printf("%f times %f equals %f\n", a, b, output);
      }else{
        if(choice == 4){
          if(b < 0){
            printf("Divide by 0 Error");
          }else{
            output = a/b;
            printf("%f divided by %f equals %f\n", a, b, output);
          }
        }else{
          if(choice == 5){
            if(a > b){
              output = b;
              printf("%f is the minimum value\n", output);
            }else{
              output = a;
              printf("%f is the minimum value\n", output);
            }
          }else{
            if(choice == 6){
              output == pow(a, b);
              printf("%f to the power %f equals %f\n", a, b, output);
            }else{
              if(choice == 7){
                if(a < 0 || b < 0){
                  printf("Negative Operand Error");
                }else{
                  output = (log(b))/(log(a));
                  printf("%f log %f equals %f\n", a, b, output);
                }
              }
            }
          }
        }
      }
    }
  }

  return 0;
}
