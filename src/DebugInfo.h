#ifndef ASDF_DEBUGINFO_H
#define ASDF_DEBUGINFO_H

#include "String.h"
#include "StringFactory.h"

namespace asdf{

	class DebugInfo{
		private:
			SPtr<String> mFunctionName;
			SPtr<String> mClassName;
			SPtr<String> mDescription;
			bool mSuccess;

			SPtr<String> copyString(String *str) ;
		public:
			DebugInfo(String* classname);
			virtual ~DebugInfo();
			void setFunctionName(String* functionName);
			void setDescription(String* description);
			void setSuccess(bool flag);
			bool getSuccess();
			
	};
}

#endif // Headerguard

// Prototype
namespace {
	class DebugInfo;
}
