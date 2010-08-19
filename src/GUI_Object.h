#ifndef ASDF_GUI_OBJECT_H
#define ASDF_GUI_OBJECT_H

#include "Smartpointer.h"

namespace asdf{
	class GUI_Object{
		
		public:
			/**
			 * set the position of the Object relative to parent
			*/
			virtual void setPosition(int x, int y) = 0;
			virtual void setSize(int x, int y) = 0;
			virtual void getPosition(int& x, int& y) = 0;
			virtual void getSize(int& x, int& y) = 0;
			virtual SPtr<GUI_Object> getParent() = 0;
			virtual void setParent(SPtr<GUI_Object> parent) = 0;

	};
}

#endif // Headerguardf

// Prototype
namespace asdf{
	class GUI_Object;

}