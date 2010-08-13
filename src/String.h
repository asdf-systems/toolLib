#ifndef ASDF_STRING_H
#define ASDF_STRING_H

//#include "DebugInfo.h"
//#include "DebugAble.h"
//#include "ReadWriter.h"
#include <vector>
#include <iostream>
#include <string>

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
			virtual void split(String& string, String& pattern, std::vector<String>& result){std::cout << "ERROR SPLIT" << std::endl;};
			virtual bool match(String pattern){};
			virtual void replace(String replace, String replaced, String& result){};
			virtual void subString(int start, int end, String& result){};
			virtual void clear(){};
			virtual int length(){};
			virtual String operator+(String& operand){};
			virtual void operator+=(String& operand){};
			virtual void operator=(String& operand){};
			virtual bool operator==(String& operand){};
			virtual std::string toCStr(){std::cout << "ERROR TOCSTR()" << std::endl;};
		
	};
}

#endif // Headerguard
