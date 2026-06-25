#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_rand(int limit) { return (rand() % limit) + 1; }

bool check(int rand_num, int num, int *min, int *max) {
  if (rand_num > num) {
    if (*min < num)
      *min = num;
    printf("The number is bigger than %d\n", *min);
  } else if (rand_num < num) {
    if (*max > num)
      *max = num;
    printf("The number is smaller than %d\n", *max);
  }

  if (rand_num == num) {
    printf("Correct!\n");
    return true;
  }

  return false;
}

bool is_num(int *n) {
  if (scanf("%d", n) != 1) {
    printf("You're dumb, that is not a number\n");
    printf("Do you even know what a number is\n");
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
      ;
  } else
    return true;
  return false;
}

int main(void) {
  srand(time(NULL));
  int number, min, max;
  int limit = 100;
  min = 1;
  max = limit;
  int rand_num = get_rand(limit);

  printf("NUMBER GAME\n");
  printf("------ ----\n");

  while (true) {
    printf("Guess a number between %d and %d: ", min, max);

    if (!is_num(&number)) {
      continue;
    }

    if (check(rand_num, number, &min, &max)) {
      break;
    }
  }

  return 0;
}
