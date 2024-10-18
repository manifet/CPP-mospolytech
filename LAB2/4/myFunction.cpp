#include "myFunction.h"
#include <iostream>

#define SUM(a, b) ((a) + (b))

namespace MyNamespace {
    void myFunction(int num) {
        setlocale(LC_ALL, "Russian");
        static int staticVar = 0;
        std::cout << "Сумма: " << SUM(num, staticVar) << std::endl;
        staticVar = num;
    }
}
