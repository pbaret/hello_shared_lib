#include "foo.h"

int main()
{
	// Try to use some of shared_lib's functions and structures

	mylib::foo();

	mylib::hello();

    MyClass a;
    a.method();
    a.method();
	
	return 0;
}
