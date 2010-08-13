#include <iostream>
#include "SmartPointer.h"
#include "String.h"
#include "StringFactory.h"

typedef void (*testFunction)(void);

void testSmartPointer_subfunc_1(int* ptr) {
	printf("\tAutocast gives: %d\n", *ptr);
}

void testSmartPointer_subfunc_2(asdf::SPtr<int>& a) {
	printf("\tRepointing ptr1\n");
	a = asdf::SPtr<int>(new int(4));
}

void testSmartPointer() {
	asdf::SmartPointer<int> ptr1(new int(5));
	printf("ptr1: Pointer value: %d, Count: %d\n", *ptr1, ptr1.getReferenceCount());

	printf("\t Copying ptr1 into ptr2\n");
	asdf::SPtr<int> ptr2 = asdf::SPtr<int>(ptr1);
	printf("ptr2: Pointer value: %d, Count: %d\n", *ptr2, ptr2.getReferenceCount());

	testSmartPointer_subfunc_1(ptr1);
	testSmartPointer_subfunc_2(ptr1);

	printf("\t Copying ptr2 into ptr3\n");
	asdf::SPtr<int> ptr3 = asdf::SPtr<int>(ptr2);

	printf("ptr1: Pointer value: %d, Count: %d\n", *ptr1, ptr1.getReferenceCount());
	printf("ptr2: Pointer value: %d, Count: %d\n", *ptr2, ptr2.getReferenceCount());
	printf("ptr3: Pointer value: %d, Count: %d\n", *ptr2, ptr2.getReferenceCount());
}

void testString(){
	asdf::SPtr<asdf::String> test = asdf::StringFactory::createString("test 123");
	const char* b = test->c_str();
	printf("String: \"%s\"\n\t", b);
	for(int i = 0; i < test->length(); i++) {
		printf("%02x ", b[i]);
	}
	printf("\n");

	/*
	std::cout << "Start Test String" << std::endl;
	asdf::SPtr<asdf::String> testString = asdf::StringFactory::createString("test");
	printf("Count: %d\n", testString.getReferenceCount());
	asdf::SharedPointer<asdf::String>* testString2 = asdf::StringFactory::getString("testString2");
	asdf::SharedPointer<asdf::String>* patternSP = asdf::StringFactory::getString("S");
	asdf::String& test = testString->get();
	asdf::String& test2 = testString2->get();
	asdf::String& pattern = patternSP->get();
	std::cout << "TestString name:" << std::endl;
	std::cout << test.toCStr() << std::endl;
	std::vector<asdf::String>* vector = new std::vector<asdf::String>();
	
	test.split(test2, pattern, *vector);
	std::cout << vector->size() << std::endl;
	testString->release();
	testString2->release();
	patternSP->release();*/
}

testFunction testFunctions[] = {
	&testSmartPointer,
	&testString,
	NULL
};

int main(){
	int i = 0;
	while(testFunctions[i]) {
		std::cout << "Start Testcase #"  << (i+1) << std::endl;
		testFunctions[i]();
		std::cout << "End Testcase" << std::endl << std::endl;
		i++;
	}
}

