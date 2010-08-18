#include "StringFactory.h"
#include "StringWX.h"

namespace asdf{
	
	SPtr<String> StringFactory::createString(){
		return SPtr<String>(dynamic_cast<String*>(new StringWX()));
	}
	
	SPtr<String> StringFactory::createString(const char* value){
		return SPtr<String>(dynamic_cast<String*>(new StringWX(value)));
	}

	SPtr<String> StringFactory::copyString(String* str) {
		const char* cstr = str->c_str();s
		return StringFactory::createString(cstr);
	}
} // namespace asdf
