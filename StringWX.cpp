#include "StringWX.h"
#include "StringFactory.h"
namespace asdf{
	
	StringWX::StringWX(){
		mValue = wxEmptyString;
		//mDebugInfo.setClassname("StringWX");
		//mDebugInfo.setSuccess(true);
	}
	
	StringWX::StringWX(const char* value) {
		//mValue = wxString(_(value));
		mValue = wxString (value, wxConvUTF8);
		//mDebugInfo.setClassname("StringWX");
		//mDebugInfo.setSuccess(true);
	}
	
	StringWX::~StringWX(){
	
	}
	
	void StringWX::split(StringWX string,StringWX pattern, std::vector<String>& result){
		
		//mDebugInfo.setFunctionName("Split");
		
		StringWX tmp = StringFactory::getString();
		StringWX save = StringFactory::getString();
		int fst = 0;

		for (int i = 0; i < string.length(); i++)
		{
			
			string.subString(fst,fst, tmp);
			
			if (tmp == pattern)
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
	
	void StringWX::subString(int start, int end, StringWX& result){
		wxString tmp = mValue.SubString(start, end);
		result = StringWX(tmp.mb_str());
	}
	int StringWX::length(){
		mValue.Len();
	}
	
	bool StringWX::match(StringWX pattern){
		wxString tmp(pattern.toCStr(), wxConvUTF8);
		return mValue.Matches(tmp);
	}
	
	void StringWX::replace(StringWX replace, StringWX replaced, StringWX& result){
	
		
	}
	bool StringWX::succeeded(){
		return true;
		//return DebugInfo.getSuccess();
	}
	
	//void getErrorValues(DebugInfo& result);

	void StringWX::clear(){
		mValue.clear();
	}
	
	String StringWX::operator+(String& operand){
		wxString tmp = (mValue + wxString(operand.toCStr(), wxConvUTF8));
		const char* tchar = tmp.mb_str();
		return  StringWX(tchar);
	}
	String StringWX::operator+=(String& operand){
		mValue =  (mValue + wxString(operand.toCStr(), wxConvUTF8));
	}
	
	bool StringWX::operator==(String& operand){
		mValue == wxString(operand.toCStr(), wxConvUTF8);
	}
	
	const char* StringWX::toCStr(){
		return mValue.mb_str();
	}
} // namespace asdf
