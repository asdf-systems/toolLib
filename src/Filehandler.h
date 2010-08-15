#ifndef ASDF_FILEHANDLER_H
#define ASDF_FILEHANDLER_H

#include <stdio.h>

namespace asdf{
	
	class Filehandler : public ReadWriter, DebugAble{
		String mFilename;
		FILE* mFh;
		DebugInfo mDebugInfo;
		public:
			Filehandler(String filename);
			~Filehandler();
			void read();
			bool succeeded();
			DebugInfo getErrorValues();
		private:
			void open();
			void close();
		
			
	};

}

#endif // Headerguard

// Prototype
namespace asdf {
	class Filehandler;
}
