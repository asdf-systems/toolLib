#ifndef ASDF_STRINGFACTORY_H
#define ASDF_STRINGFACTORY_H

#include "String.h"
#include "SharedPointer.h"

namespace asdf{
	
	class StringFactory{
		public:
			static SharedPointer<String>* getString();
			static SharedPointer<String>* getString(const char* value);
	};
}
#endif // Headerguard
