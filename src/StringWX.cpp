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
		mValue = wxString(val);
	}
	
	StringWX::~StringWX(){
	
	}

	int StringWX::length() {
		return mValue.Length();
	}

	void StringWX::subString(int start, int end, SPtr<String>& result) {
		result = SPtr<String>(
			dynamic_cast<String*>(
				new StringWX(mValue.SubString(start, end))
				)
			);
	}

	SPtr<char> StringWX::c_str() {
		// The buffer returned by wxString::char_str() is temporary.
		// I.e. it gets overwritten by wxString constructors.
		// Therefore we copy the content into an garbage collected 
		// buffer.
		//
		// FIXME: Unidiomatc?! Does C++ really have a better way for
		// handling C-Strings?
		SPtr<char> p(new char[length()+1]);
		strcpy(p, mValue.char_str());
		return p;
	}
	
	const wxChar* StringWX::c_strWX() {
		return mValue.c_str();
	}

	SPtr<StringWX> StringWX::String2StringWX(String *p) {
		return SPtr<StringWX>(new StringWX(p->c_str()));
	}
} // namespace asdf
