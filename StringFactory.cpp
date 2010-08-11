#include "StringFactory.h"
#include "StringWX.h"

namespace asdf{
	
	String StringFactory::getString(){
		
		return StringWX();
	}
	
	String StringFactory::getString(char* value){
		
		return StringWX(value);
	}
} // namespace asdf
