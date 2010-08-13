#ifndef ASDF_DEBUGINFO_H
#define ASDF_DEBUGINFO_H

#include "ReadWriter.h"

namespace asdf{

	class String;
	class DebugInfo{
		private:
			ReaderWriter& mOutput;
			String mFunctionName;
			String mClassName;
			String mDescription;
			bool mSuccess;
		public:
			DebugInfo(ReadWriter& output);
			~DebugInfo();
			void show();
			void setFunctionName(String functionName);
			void setClassName(String className);
			void setDescription(String description);
			void setSuccess(bool flag);
			bool getSuccess();
			
	};
}

#endif // Headerguard
