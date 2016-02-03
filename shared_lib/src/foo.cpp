#include "foo.h"
#include <iostream>

void mylib::foo()
{
	std::cout << "Coucou !" << std::endl;
}

void mylib::hello()
{
	std::cout << "Hello World ! from mylib" << std::endl;
}

MyClass::MyClass()
{
    m_i = 0;
}

void MyClass::method()
{
    m_i++;
    std::cout << "yoo : " << m_i << " from MyClass" << std::endl;
}
