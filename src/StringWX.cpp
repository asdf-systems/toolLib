#include "StringWX.h"

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

	SPtr<std::vector<StringWX> > StringWX::split(StringWX string, StringWX pattern){
		
		/*std::cout << "Split" << std::endl;
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
		*/	
		return NULL;
	}


	StringWX StringWX::replace(StringWX replace, StringWX replaced) {
		return String();
	}

	String StringWX::subString(int start, int end) {
		return String();
		
	}
	
	wxString StringWX::toWxStr(){
		return mValue;
	}

	SPtr<char> StringWX::c_str() {
		// The buffer returned by wxString::char_str() is temporary.
		// I.e. it gets overwritten by wxString constructors.
		// Therefore we copy the content into an garbage collected 
		// buffer.
		//
		// \FIXME: Unidiomatc?! Does C++ really have a better way for
		// handling C-Strings?
		SPtr<char> p(new char[length()+1]);
		strcpy(p, mValue.char_str());
		return p;
	}
	
	const wxChar* StringWX::c_strWX() {
		return mValue.c_str();
	}


} // namespace asdf
