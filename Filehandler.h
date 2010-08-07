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
