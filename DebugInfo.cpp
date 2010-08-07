#include "DebugInfo.h"

namespace asdf{

	DebugInfo::DebugInfo(ReadWriter& output) : mOutput(output){

	}
	DebugInfo::~DebugInfo(){
	
	}
	void DebugInfo::show(){
		String output = mClassName + mFunctionName + mDescription;
		mOutput.write(output);
		
	}
	void DebugInfo::setFunctionName(String functionName){
		mFunctionName = functionName;
	}
	void DebugInfo::setClassName(String className){
		mClassName = className;
	}
	void DebugInfo::setDescription(String description){
		mDescription = descritption;
	}
	void DebugInfo::setSuccess(bool flag){
		mSuccess = flag;
	}
	bool DebugInfo::getSuccess(){
		return = mSuccess;
	}

}
