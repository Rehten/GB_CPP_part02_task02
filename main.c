#include <stdio.h>

#define ARR_LENGTH 5

int arr_mutator(int array[], int length) {
    int result = 0;

    for (int i = 0; i < length; i++) {
        if (array[i]%2 == 0) {
            printf("Число %d четное.\n", array[i]);
        } else {
            result = 1;
            printf("число %d нечетное. Выполняю преобразование...", array[i]);
            array[i] = array[i] * 2;
            printf("Теперь число равно %d.\n", array[i]);
        }
    }

    return result;
}

int main() {

    int arr[ARR_LENGTH];

    printf("Добро пожаловать в массивикс: программу для анализац массивов.\n");
    printf("Всего внутри массива %d чисел - заполните его.\n", ARR_LENGTH);

    for (int i = 0; i < ARR_LENGTH; i++) {
        printf("Элемент массива с индексом %d равен: ", i);
        scanf("%d", &arr[i]);
    }

    if (arr_mutator(arr, ARR_LENGTH) == 1) {
        printf("\n\nВывожу все числа на экран\n");
        for (int i = 0; i < ARR_LENGTH; i++) {
            printf("Элемент массива с индексом %d равен: %d\n", i, arr[i]);
        }
    } else {
        printf("\n\n Все числа четные. Программа не будет преобразовывать массив.");
    }

    return 0;
}