#ifndef ASDF_STRINGFACTORY_H
#define ASDF_STRINGFACTORY_H

namespace asdf{
	
	static class StringFactory{
		public:
			static String getString();
			static String getString(char* value);
	};
}
#endif // Headerguard
