#include "StringWX.h"
namespace asdf{
	
	StringWX::StringWX(){
		mValue = wxEmptyString;
		DebugInfo.setClassname("StringWX");
		DebugInfo.setSuccess(true);
	}
	StringWX::StringWX(char* value) {
		mValue = wxString(wxT(value));
		DebugInfo.setClassname("StringWX");
		DebugInfo.setSuccess(true);
	}
	StringWX::~StringWX(){
	}
	
	void StringWX::split(vector<String>& result){
		
		mDebugInfo.setFunctionName("Split");
		
		String tmp = StringFactory::getString(wxEmptyString);
		String save = StringFactory::getString(wxEmptyString);
		int fst = 0;

		for (int i = 0; i < string.length(); i++)
		{
			tmp = string.SubString(fst,fst);
			
			if (tmp == sign)
			{
				result.push_back(save);
				save.clear();

			}
			else
				save += tmp;
			
			fst++; 
		}
		if(save.length() > 0)
			result.push_back(save);
	
		
	}
	
	int StringWX::length(){
		mValue.Len();
	}
	bool StringWX::match(String pattern){
		wxString tmp(pattern.toWxString());
		return mValue.Matches(tmp);
	}
	
	wxString StringWX::toWxString(String value){
		return (wxString(value.toCStr()));
	}
	void StringWX::replace(String replace, String replaced, String& result){
	
		
	}
	bool StringWX::succeeded(){
		return DebugInfo.getSuccess();
	}
	void getErrorValues(DebugInfo& result);

	void StringWX::clear(){
		mValue.clear();
	}
	
	String StringWX::operator+(String& operand){
		return (mValue + operand);
	}
	
	char* StringWX::toCStr(){
		return mValue.mb_str();
	}
} // namespace asdf
