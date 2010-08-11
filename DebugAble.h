#ifndef ASDF_DEBUGABLE_H
#define ASDF_DEBUGABLE_H

#include "DebugInfo.h"

namespace asdf{

	class DebugAble{
		private:
			DebugInfo	mDebugInfo;
		public:
			virtual bool succeeded() = 0;
			virtual DebugInfo getErrorValues() = 0;
		
	};
}

#endif //Headerguard
