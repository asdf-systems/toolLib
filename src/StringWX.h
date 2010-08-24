#ifndef ASDF_STRINGWX_H
#define ASDF_STRINGWX_H

#include <wx/wx.h>
#include <vector>
#include "SmartPointer.h"
//#include "DebugInfo.h"
//#include "DebugAble.h"
//#include "ReadWriter.h"

namespace asdf{

	class StringWX{ // : public DebugAble, ReaderWriter{
		private:
			// Member
			wxString mValue;
			// Methods
			const wxChar* c_strWX();

		public:
			StringWX();
			StringWX(const char* val);
			StringWX(wxString val);
			~StringWX();
			// wildcard match
			SPtr< std::vector< StringWX > > split(StringWX string, StringWX pattern);
			StringWX subString(int start, int end);
			// wildcardmatch
			StringWX replace(StringWX replace, StringWX replaced);
			//bool succeeded();
			////void getErrorValues(DebugInfo& result);
			//void clear();
			int length();
			SPtr<char> c_str();
			// wildcard match
			//bool match(String pattern);
			//bool isEmpty() = 0;
			//static String fromBool(bool) = 0;
			//static String fromFloat(bool) = 0;
			//String operator+(String& operand);
			//String operator+=(String& operand);
			//String operator=(String& operand);
			//bool operator==(String& operand);
		protected:
			wxString toWXStr();
	};
	
typedef StringWX String;
}

#endif // Headerguard

// Prototype
namespace asdf {
	class StringWX;
}


