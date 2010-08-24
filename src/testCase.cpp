#include <iostream>
#include "SmartPointer.h"

typedef void (*testFunction)(void);

#ifdef TEST_SMARTPOINTER
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
#endif
#ifdef TEST_STRING
void testString(){
	// String creation test
	asdf::SPtr<asdf::String> testStr = asdf::StringFactory::createString("test 123 xyz");
	asdf::SPtr<char> p = testStr->c_str();
	char *b = p.get();
	printf("String: \"%s\"\n\t", b);
	for(int i = 0; i < testStr->length(); i++) {
		printf("%02x ", b[i]);
	}
	printf("\n");

	// Substring test
	asdf::SPtr<asdf::String> testSubStr(NULL);
	testStr->subString(0, 7, testSubStr);
	printf("Substring: \"%s\"\n", testSubStr->c_str().get());

	// Replace test
	asdf::SPtr<asdf::String> testRepStr(NULL);
	testStr->replace(
			asdf::StringFactory::createString("xyz"),
			asdf::StringFactory::createString("abc"),
			testRepStr);
	printf("Replaced String: \"%s\"\n", testRepStr->c_str().get());
}
#endif

testFunction testFunctions[] = {
	#ifdef TEST_SMARTPOINTER
	&testSmartPointer,
	#endif
	#ifdef TEST_STRING
	&testString,
	#endif
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

