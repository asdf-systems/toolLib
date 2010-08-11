#ifndef ASDF_STRINGFACTORY_H
#define ASDF_STRINGFACTORY_H

#include "String.h"

namespace asdf{
	
	class StringFactory{
		public:
			static String getString();
			static String getString(char* value);
	};
}
#endif // Headerguard
