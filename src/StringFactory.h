namespace asdf {
	class StringFactory;
}
#ifndef ASDF_STRINGFACTORY_H
#define ASDF_STRINGFACTORY_H

#include "String.h"
#include "SmartPointer.h"

namespace asdf{

	class StringFactory{
		public:
			static SPtr<String> createString();
			static SPtr<String> createString(const char* value);
	};
}
#endif // Headerguard
