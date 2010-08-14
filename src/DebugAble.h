#ifndef ASDF_DEBUGABLE_H
#define ASDF_DEBUGABLE_H

#include "DebugInfo.h"

namespace asdf{

	class DebugAble{
		protected:
			DebugInfo mDebugInfo;
		public:
			virtual DebugInfo getErrorValues() = 0;
		
	};
}

#endif //Headerguard

// Prototype
namespace asdf {
	class DebugAble;
}
