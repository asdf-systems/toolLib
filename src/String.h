namespace asdf {
	class String;
}
#ifndef ASDF_STRING_H
#define ASDF_STRING_H

//#include "DebugInfo.h"
//#include "DebugAble.h"
//#include "ReadWriter.h"
#include <vector>
#include <iostream>
#include <string>
#include "SmartPointer.h"

namespace asdf{

	// Prototypen
	//class DebugInfo;
	//class DebugAble;
	//class ReadWriter;
	
	class String { //: public DebugAble, ReaderWriter{
		public:
			//String();
			//String(const char* value);
			//virtual ~String() = 0;
			//virtual void split(String* string, String* pattern, SPtr<String> result) = 0;
			//virtual bool match(String* pattern) = 0;
			//virtual void replace(String* replace, String* replaced, SPtr<String> result) = 0;
			virtual void subString(int start, int end, SPtr<String>& result) = 0;
			//virtual void clear() = 0;
			virtual int length() = 0;
			//virtual String operator+(String* operand) = 0;
			//virtual void operator+=(String* operand) = 0;
			//virtual void operator=(String* operand) = 0;
			//virtual bool operator==(String* operand) = 0;
			virtual SPtr<char> c_str() = 0;
		private:
			int dummy;
	};
}

#endif // Headerguard
