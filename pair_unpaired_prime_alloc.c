#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int *numbers, amount, i = 0, m = 0, *pair, l = 0, *unpaired, divisors, cont_prime, *prime, a = 0;

  // Amount of numbers
  printf("Amount of numbers: \n");
  scanf("%d", &amount);

  // Memory allocation
  numbers = malloc(amount * sizeof(int));
  pair = malloc(amount * sizeof(int));
  unpaired = malloc(amount * sizeof(int));
  prime = malloc(amount * sizeof(int));

  for(i = 0; i < amount; i++) {
    prime[i] = 0;
  }

  printf("Enter the numbers : \n");

  for (i = 0; i < amount; i++) {
    scanf("%d", &numbers[i]);
    // Find pair
    if(numbers[i] % 2 == 0) {
      pair[l++] = numbers[i] ;
    // Find unpaired
    }else{
      unpaired[m++] = numbers[i];
    }
  }

  for(i = 0; i < amount; i++) {
    if (numbers[i] == 0) {
      continue;
    }
    divisors = 0;
    // Find divisors
    for(cont_prime = 2; cont_prime < numbers[i]; cont_prime ++) {
      if(numbers[i] % cont_prime == 0) {
        divisors = 1;
        break;
      }
    }
    if(divisors == 0) {
      prime[a++] = numbers[i];
    }
  }

  printf("\n");

  printf("Numbers entered : ");

  for (i = 0; i < amount; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n\nAmount of number entered: %d", amount);

  printf("\n\nPair Numbers : ");
  for (i = 0; i < l; i++) {
    printf("%d ", pair[i]);
  }

  printf("\n\nUnpaired Numbers : ");
  for (i = 0; i < m; i++) {
    printf("%d ", unpaired[i]);
  }

  printf("\n\nPrime Numbers : ");
  for (i = 0; i < a; i++) {
    printf("%d ", prime[i]);
  }

  printf("\n\n");

  free(numbers);
  free(pair);
  free(unpaired);
  free(prime);
  return 0;

}     
