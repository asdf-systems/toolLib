#include "StringWX.h"
#include "StringFactory.h"
namespace asdf{
	
	StringWX::StringWX(){
		mValue = wxEmptyString;
		//mDebugInfo.setClassname("StringWX");
		//mDebugInfo.setSuccess(true);
	}
	
	StringWX::StringWX(std::string value) {
		//mValue = wxString(_(value));
		mValue = wxString (value.c_str(), wxConvUTF8);
		//mDebugInfo.setClassname("StringWX");
		//mDebugInfo.setSuccess(true);
	}
	
	StringWX::~StringWX(){
	
	}
	
	void StringWX::split(String& string, String& pattern, std::vector<String>& result){
		
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
		
	}
	
	void StringWX::subString(int start, int end, String& result){
		wxString tmp = mValue.SubString(start, end);
		StringWX tmp2 = toString(tmp);
		result = tmp2;
		//std::cout << "temp:" << result.toCStr() << std::endl;		
		
	}
	int StringWX::length(){
		return mValue.Len();
	}
	
	bool StringWX::match(String pattern){
		
		return mValue.Matches(toWxStr(pattern));
	}
	
	void StringWX::replace(String replace, String replaced, String& result){
	
		
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
		wxString tmp = (mValue + toWxStr(operand));
		return  toString(tmp);
	}
	void StringWX::operator+=(String& operand){
		mValue =  (mValue + toWxStr(operand));
	}
	
	bool StringWX::operator==(String& operand){
		mValue == toWxStr(operand);
	}
	
	void StringWX::operator=(String& operand){
		mValue = toWxStr(operand);
	}
	
	std::string StringWX::toCStr(){
		return std::string(mValue.mb_str());;
		
	}
	
	wxString StringWX::toWxStr(String& value){
		return wxString(value.toCStr().c_str(), wxConvUTF8);
	}
	
	StringWX StringWX::toString(wxString value){
		return StringWX(std::string(value.mb_str()));
	}
} // namespace asdf
