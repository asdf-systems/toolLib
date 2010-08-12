#ifndef ASDF_STRING_H
#define ASDF_STRING_H

//#include "DebugInfo.h"
//#include "DebugAble.h"
//#include "ReadWriter.h"
#include <vector>
#include <iostream>

namespace asdf{

	// Prototypen
	//class DebugInfo;
	//class DebugAble;
	//class ReadWriter;
	
	class String { //: public DebugAble, ReaderWriter{
		public:
			//String();
			//String(const char* value);
			//~String();
			virtual void split(String string, String pattern, std::vector<String>& result){};
			virtual bool match(String pattern){};
			virtual void replace(String replace, String replaced, String& result){};
			virtual void subString(int start, int end, String& result){};
			virtual void clear(){};
			virtual int length(){};
			virtual String operator+(String& operand){};
			virtual String operator+=(String& operand){};
			virtual bool operator==(String& operand){};
			virtual const char* toCStr(){};
		
	};
}

#endif // Headerguard
