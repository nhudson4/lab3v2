/**
 * This program computes income taxes based on adjusted
 * gross income and a child tax credit.
 *
 */
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv) {

  double agi = 0.0;
  char c = 'N';
  double tax = 0.0;
  double childCredit = 0.0;
  double totalTax = 0.0;
  int numChildren = 0;

  printf("Please enter your adjusted gross income (AGI): ");
  scanf("%lf", &agi);

  printf("Do you have any children? (Y) or (N)? ");
  getchar(); //remove the endline character
  c = getchar();

  if(c == 'y' || c == 'Y') {
    printf("How many children do you have? ");
    scanf("%d", &numChildren);
  }

  //TODO: compute the tax, child credit, and total tax:

  if(agi > 379150){
    tax = 102574 + 0.35*(agi-379150);
  }else{
    if(agi > 212300){
      tax = 47513.5 + 0.33*(agi-212300);
    }else{
      if(agi > 139350){
        tax = 27087.5 + 0.28*(agi-139350);
      }else{
        if(agi > 69000){
          tax = 9500 + 0.25*(agi-69000);
        }else{
          if(agi > 17000){
            tax = 1700 + 0.15*(agi-17000);
          }else{
            tax = 0.10*(agi);
          }
        }
      }
    }
  }

  childCredit = 1000 * numChildren;
	if (numChildren >= 0) {
		totalTax = tax - childCredit;
	}
	else {
		childCredit = 0;
		totalTax = tax;
	}

  printf("AGI:          $%10.2f\n", agi);
  printf("Tax:          $%10.2f\n", tax);
  printf("Child Credit: $%10.2f\n", childCredit);
  printf("Total Tax:    $%10.2f\n", totalTax);

  return 0;
}
