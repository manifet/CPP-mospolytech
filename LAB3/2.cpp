#include <iostream>

float sum(float* start, float* end) {
    float total = 0;
    for (float* ptr = start; ptr < end; ++ptr) {
        total += *ptr;
    }
    return total;
}

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float (*getFunction(char operation))(float, float) {
    if (operation == '+') {
        return add;
    } else if (operation == '-') {
        return subtract;
    }
    return nullptr;
}

int main() {
    setlocale(LC_ALL, "Russian");
    
    float array[] = {1.5, 2.5, 3.5, 4.5};
    float sumResult = sum(array, array + 4);
    std::cout << "Сумма элементов массива: " << sumResult << std::endl;

    float (*operationFunc)(float, float);
    operationFunc = getFunction('+');
    float addResult = operationFunc(5.0, 3.0);
    std::cout << "Результат сложения: " << addResult << std::endl;

    operationFunc = getFunction('-');
    float subtractResult = operationFunc(5.0, 3.0);
    std::cout << "Результат вычитания: " << subtractResult << std::endl;

    float* dynamicPtr = new float(3.14);
    std::cout << "Динамический указатель: " << *dynamicPtr << std::endl;
    delete dynamicPtr;

    return 0;
}
