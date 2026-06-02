#include "TemplateMethod.h"

#include <cassert>

#include <iostream>

#include <string>

#include <sstream>

int main() {

    // Сохраняем оригинальный буфер cout

    std::stringstream buffer;

    std::streambuf* original = std::cout.rdbuf(buffer.rdbuf());

    

    // Запускаем наш код

    AbstractClass* tm = new ConcreteClass;

    tm->templateMethod();

    delete tm;

    

    // Восстанавливаем оригинальный буфер

    std::cout.rdbuf(original);

    

    // Проверяем результат

    std::string output = buffer.str();

    bool hasOp1 = output.find("Primitive operation 1") != std::string::npos;

    bool hasOp2 = output.find("Primitive operation 2") != std::string::npos;

    

    if (hasOp1 && hasOp2) {

        std::cout << "Test passed!" << std::endl;

        return 0;

    } else {

        std::cout << "Test failed!" << std::endl;

        std::cout << "Output was: " << output << std::endl;

        return 1;

    }

}

