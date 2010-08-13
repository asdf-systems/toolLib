#ifndef ASDF_READER_H
#define ASDF_READER_H

#include "String.h"

namespace asdf{
	
	class Reader{
		virtual void read(String& value) = 0;
	};
}

#endif // Headerguard
