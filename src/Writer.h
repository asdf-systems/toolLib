#ifndef ASDF_WRITER_H
#define ASDF_WRITER_H

namespace asdf{
	
	class Writer{
		virtual void write(String* value) = 0;
	};
}

#endif // Headerguard

// Prototype
namespace asdf {
	class Writer;
}
