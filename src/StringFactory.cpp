#include "StringFactory.h"
#include "StringWX.h"

namespace asdf{
	
	SharedPointer<String>* StringFactory::getString(){
		SharedPointer<String>* tmp = new SharedPointer<String>(new StringWX());
		return tmp;
	}
	
	SharedPointer<String>* StringFactory::getString(const char* value){
		SharedPointer<String>* tmp = new SharedPointer<String>(new StringWX(value));
		return tmp;
	}
} // namespace asdf
