#ifndef ASDF_STRING_H
#define ASDF_STRING_H

#include "DebugInfo.h"
#include "DebugAble.h"
#include "ReadWriter.h"

namespace asdf{

// Prototypen
class DebugInfo;
	
	virtual class String : public DebugAble, ReaderWriter{
		virtual void split(vector<String>& result);
		virtual bool match(String pattern);
		virtual void replace(String replace, String replaced, String& result);
		virtual void clear();
		virtual int length();
		virtual String operator+(String& operand);
		virtual char* toCStr();
		
	};
}

#endif // Headerguard
