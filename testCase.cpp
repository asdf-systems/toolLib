#include <iostream>
#include "SharedPointer.h"
#include "LocalPointer.h"
#include "String.h"
#include "StringFactory.h"


/*void function1(asdf::SharedPointer<int>* test){
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
}*/
void testString(){
	std::cout << "Start Test String" << std::endl;
	asdf::SharedPointer<asdf::String>* testString = asdf::StringFactory::getString("test");
	asdf::SharedPointer<asdf::String>* testString2 = asdf::StringFactory::getString("testString2");
	asdf::String& test = testString->get();
	asdf::String& test2 = testString2->get();
	std::cout << "TestString name:" << std::endl;
	std::cout << test.toCStr() << std::endl;
	std::vector<asdf::String>* vector = new std::vector<asdf::String>();
	test.split(test2, test2, *vector);
	testString->release();
}
int main(){
	
	//testSharedPointer();
	//testLocalPointer();
	std::cout << "Start Testcase" << std::endl;
	testString();
	std::cout << "End Testcase" << std::endl;
	
}

