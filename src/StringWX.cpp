#include "StringWX.h"
#include "StringFactory.h"
namespace asdf{
	
	StringWX::StringWX(){
		mValue = wxEmptyString;
	}
	
	StringWX::StringWX(const char* val) {
		mValue = wxString(val, wxConvUTF8);
	}

	StringWX::StringWX(wxString val) {
		mValue = val;
	}
	
	StringWX::~StringWX(){
	
	}

	int StringWX::length() {
		return mValue.Length();
	}

	void StringWX::subString(int start, int end, SPtr<String>& result) {
		result = SPtr<String>(dynamic_cast<String*>(new StringWX(mValue.SubString(start, end))));
	}

	char* StringWX::c_str() {
		return mValue.char_str();
	}
	
} // namespace asdf
