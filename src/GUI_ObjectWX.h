#ifndef ASDF_GUI_OBJECTWX_H
#define ASDF_GUI_OBJECTWX_H

#include "SmartPointer.h"

namespace asdf{
	class GUI_ObjectWX  {
	
		private:
			SPtr<GUI_ObjectWX>	mParent;
		public:	
			GUI_ObjectWX();
			GUI_ObjectWX(SPtr<GUI_ObjectWX> parent);
			~GUI_ObjectWX();
			/**
			 * set the position of the Object relative to parent
			*/
			void setPosition(int x, int y);
			void setSize(int x, int y);
			void getPosition(int& x, int& y);
			void getSize(int& x, int& y);
			SPtr<GUI_ObjectWX> getParent();
			void setParent(SPtr<GUI_ObjectWX> parent);
			

	};
	
	typedef GUI_ObjectWX GUI_Object;
}

#endif // Headerguardf

// Prototype
namespace asdf{
	class GUI_ObjectWX;

}

