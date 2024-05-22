#include <stdio.h>

float findMean(int array[], int size)
{
  float mean = 0;
  for (int i = 0; i < size; i++)
  {
    mean += array[i];
  }
  mean = mean / size;
  return mean;
}

int findMinElement(int array[], int size)
{
  int min = array[0];
  for (int i = 1; i < size; i++)
  {
    if (array[i] < min)
    {
      min = array[i];
    }
  }
  return min;
}

int findMaxIndex(int array[], int size)
{
  int index;
  int max = array[0];
  for (int i = 1; i < size; i++)
  {
    if (array[i] > max)
    {
      max = array[i];
      index = i;
    }
  }
  return index;
}

void displayArray(int array[], int size)
{
  for (int i = 1; i < size; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n");
}

int getSelectMenu() {
  printf("Menu\n");
  printf("1 - Find the average value of all the numbers in the array\n");
  printf("2 - Find the minimum value in the array\n");
  printf("3 - Find the index of the maximum value in the array\n");
  printf("4 - Display the array\n");
  printf("5 - Exit\n");
  printf("Please select an option (1-4) > ");

  int selectedMenu;
  scanf("%d", &selectedMenu);
  return selectedMenu;
}

int main() {
  int numbers[10] = {3, 9, -2, 7, 1};
  int size = 5;
  int menu = getSelectMenu();
  while (menu != 5) {
    if (menu == 1) {
      printf("Mean = %.2f\n\n", findMean(numbers, size));
    } else if (menu == 2) {
      printf("Min = %d\n\n", findMinElement(numbers, size));
    } else if (menu == 3) {
      printf("Max Index = %d\n\n", findMaxIndex(numbers, size));
    } else if (menu == 4) {
      displayArray(numbers, size);
    }

    menu = getSelectMenu();
  }

  return 0;
}