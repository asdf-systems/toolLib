#include "StringFactory.h"

namespace asdf{

	String StringFactory::getString(){
	
	}
	
	String StringFactory::getString(){
		String result = StringWX();
		return result;
	}
	
	String StringFactory::getString(char* value){
		String result = StringWX(value);
		return result;
	}
} // namespace asdf
