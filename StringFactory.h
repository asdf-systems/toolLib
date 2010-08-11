#ifndef ASDF_STRINGFACTORY_H
#define ASDF_STRINGFACTORY_H

#include "String.h"

namespace asdf{
	
	class StringFactory{
		public:
			static StringWX getString();
			static StringWX getString(char* value);
	};
}
#endif // Headerguard
