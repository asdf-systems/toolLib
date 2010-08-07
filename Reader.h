#ifndef ASDF_READER_H
#define ASDF_READER_H

#include "String.h"

namespace asdf{
	
	virtual class Reader{
		virtual void read(String& value) = 0;
	};
}

#endif // Headerguard
