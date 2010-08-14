#include "DebugInfo.h"

namespace asdf{

	DebugInfo::DebugInfo(String* classname) {
		mClassName = StringFactory::copyString(classname);
		mSuccess = false;
	}

	DebugInfo::~DebugInfo(){
	}

	void DebugInfo::setFunctionName(String* functionName){
		mFunctionName = StringFactory::copyString(functionName);
		mSuccess = false;
	}

	void DebugInfo::setDescription(String* description){
		mDescription = StringFactory::copyString(description);
	}

	void DebugInfo::setSuccess(bool flag){
		mSuccess = flag;
	}

	bool DebugInfo::getSuccess(){
		return mSuccess;
	}

}
