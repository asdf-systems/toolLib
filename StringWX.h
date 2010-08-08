#ifndef ASDF_STRINGWX_H
#define ASDF_STRINGWX_H

#include <wx/wx.h>


namespace asdf{

	class StringWX : public String{
		private:
			// Member
			wxString mValue;
			// Methods
			wxString toWxString(String value);
		public:
			StringWX(wxString value);
			void split(vector<String>& result);
			bool match(String pattern);
			void replace(String replace, String replaced, String& result);
			bool succeeded();
			void getErrorValues(DebugInfo& result);
			void clear();
			int length();
			char* toCStr();
			String operator+(String& operand);
	};
}

#endif // Headerguard


