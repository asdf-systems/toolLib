#ifndef ASDF_STRINGWX_H
#define ASDF_STRINGWX_H

#include <wx/wx.h>
#include <vector>
#include "String.h"
#include <string>

namespace asdf{

	//class StringFactory;
	
	class StringWX : public String{
		private:
			// Member
			wxString mValue;
			// Methods
			wxString toWxStr(String& value);
			StringWX toString(wxString);
						
		public:
			StringWX();
			StringWX(std::string value);
			~StringWX();
			virtual void split(String& string, String& pattern, std::vector<String>& result);
			void subString(int start, int end, String& result);
			bool match(String pattern);
			void replace(String replace, String replaced, String& result);
			bool succeeded();
			//void getErrorValues(DebugInfo& result);
			void clear();
			int length();
			std::string toCStr();
			String operator+(String& operand);
			void operator+=(String& operand);
			void operator=(String& operand);
			bool operator==(String& operand);
	};
}

#endif // Headerguard


