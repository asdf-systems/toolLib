namespace asdf {
	class StringWX;
}
#ifndef ASDF_STRINGWX_H
#define ASDF_STRINGWX_H

#include <wx/wx.h>
#include <vector>
#include <string>
#include <cstring>
#include "String.h"
#include "SmartPointer.h"

namespace asdf{
	class StringWX : public String{
		private:
			// Member
			wxString mValue;
			// Methods
			static SPtr<StringWX> String2StringWX(String* p);
			const wxChar* c_strWX();
		public:
			StringWX();
			StringWX(const char* val);
			StringWX(wxString val);
			~StringWX();
			//void split(String* string, String* pattern, SPtr<String> result);
			void subString(int start, int end, SPtr<String>& result);
			//bool match(String pattern);
			//void replace(String replace, String replaced, String& result);
			//bool succeeded();
			////void getErrorValues(DebugInfo& result);
			//void clear();
			int length();
			SPtr<char> c_str();
			//String operator+(String& operand);
			//void operator+=(String& operand);
			//void operator=(String& operand);
			//bool operator==(String& operand);
	};
}

#endif // Headerguard
