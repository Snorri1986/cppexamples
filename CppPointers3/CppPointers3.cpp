#include <iostream>

int getMin(int numbers[], int size) {
    int min = numbers[0];
    for (int i = 1;i < size;i++) {
        if (numbers[i] < min)
            min = numbers[i];
    }
    return min;
}

int getMax(int numbers[], int size) {
    int max = numbers[0];
    for (int i = 1;i < size;i++) {
        if (numbers[i] > max)
            max = numbers[i];
    }
    return max;
}

void getMinandMax(int numbers[], int size, int* min, int* max) {
    for (int i = 1;i < size;i++) {
        if (numbers[i] > *max)
            *max = numbers[i];
        if (numbers[i] < *min)
            *min = numbers[i];
    }
}

int main()
{
    int numbers[5] = { 5,4,-2,29,6 };
    int min = numbers[0];
    int max = numbers[0];
    getMinandMax(numbers, 5, &min, &max);
    std::cout << "Min is " << min << std::endl;
    std::cout << "Max is " << max << std::endl;
    system("pause>0");
    return 0;
}


