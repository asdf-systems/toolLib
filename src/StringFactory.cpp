#include "StringFactory.h"
#include "StringWX.h"

namespace asdf{
	
	SPtr<String> StringFactory::createString(){
		return SPtr<String>(dynamic_cast<String*>(new StringWX()));
	}
	
	SPtr<String> StringFactory::createString(const char* value){
		return SPtr<String>(dynamic_cast<String*>(new StringWX(value)));
	}
} // namespace asdf
