#ifndef TEMPLATE_METHOD_H

#define TEMPLATE_METHOD_H

#include <iostream>

class AbstractClass

{

public:

  virtual ~AbstractClass() {}

  

  void templateMethod()

  {

    primitiveOperation1();

    primitiveOperation2();

  }

  

  virtual void primitiveOperation1() = 0;

  virtual void primitiveOperation2() = 0;

};

class ConcreteClass : public AbstractClass

{

public:

  ~ConcreteClass() {}

  

  void primitiveOperation1() override

  {

    std::cout << "Primitive operation 1" << std::endl;

  }

  

  void primitiveOperation2() override

  {

    std::cout << "Primitive operation 2" << std::endl;

  }

};

#endif

