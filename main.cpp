#include "TemplateMethod.h"

int main()

{

    AbstractClass *tm = new ConcreteClass;

    tm->templateMethod();

    delete tm;

    return 0;

}

