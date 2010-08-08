#include <iostream>
#include "SharedPointer.h"
#include "LocalPointer.h"


void function1(asdf::SharedPointer<int>* test){
	int* x = test->get();
	std::cout << "funcion1 : " << *x << std::endl;
	test->release();
	
}

void function2(asdf::SharedPointer<int>* test){
	int* x = test->get();
	std::cout << "funcion2 : " << *x << std::endl;
	test->release();
}

void errFunction(asdf::SharedPointer<int>* test){
	int* x = test->get();
	std::cout << "funcion2" << *x << std::endl;
}

void testSharedPointer(){

		int* i = new int(5);
	asdf::SharedPointer<int>* test = new asdf::SharedPointer<int>(i);
	function1(test);
	std::cout << "Testcase proper i: " << *i << std::endl; // no error
	function2(test);
	std::cout << "Testcase error i: " << *i << std::endl; // error - already deleted
	test->release(); // no error
	asdf::SharedPointer<int>* test2 = new asdf::SharedPointer<int>(i);
	errFunction(test2);
	test2->release(); // error
}

void testLocalPointer(){
	int* i2 = new int(5);
	asdf::LocalPointer<int> lp1(i2);
}
int main(){
	
	//testSharedPointer();
	//testLocalPointer();
	
	
	
	

	
	
}

