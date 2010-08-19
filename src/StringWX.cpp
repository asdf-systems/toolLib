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

	/*void StringWX::split(String* string, String* pattern, std::vector<String>& result){
		
		std::cout << "Split" << std::endl;
		std::cout << string.toCStr() << std::endl;
		//mDebugInfo.setFunctionName("Split");
		
		SharedPointer<String>* tmpSP = StringFactory::getString();
		String& tmp = tmpSP->get();
		wxString save = wxEmptyString;
		int fst = 0;

		for (int i = 0; i < string.length(); i++)
		{
			
			string.subString(fst,fst,tmp);
				
			if (tmp == pattern)
			{
				result.push_back(toString(save));
				save.Clear();

			}
			else
				save += toWxStr(tmp);
			
			fst++; 
		}
		if(save.length() > 0)
			result.push_back(toString(save));
		
		tmpSP->release();
		
	}*/


	void StringWX::replace(String* replace, String* replaced, SPtr<String>& result) {
		// We make a copy of mValue because wxString::Replace
		// does not. It works directly on the wxString.
		// DO NOT MERGE THESE LINES. It breaks stuff...
		// GCC is just too eager with optimizing
		wxString copy(mValue);
		SPtr<StringWX> sop1 = String2StringWX(replace);
		SPtr<StringWX> sop2 = String2StringWX(replaced);
		const wxChar* op1 = sop1->c_strWX();
		const wxChar* op2 = sop2->c_strWX();
		copy.Replace(op1, op2);
		result = SPtr<String>(
			dynamic_cast<String*>(
				new StringWX(copy)
				)
			);
	}

	void StringWX::subString(int start, int end, SPtr<String>& result) {
		result = SPtr<String>(
			dynamic_cast<String*>(
				new StringWX(mValue.SubString(start, end))
				)
			);
	}
	
	wxString StringWX::toWXStr(){
		return mValue;
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
