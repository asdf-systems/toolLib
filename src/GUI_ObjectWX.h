#ifndef ASDF_GUI_OBJECTWX_H
#define ASDF_GUI_OBJECTWX_H

#include "GUI_Object.h"
#include <wx/wx.h>

namespace asdf{
	class GUI_ObjectWX : public GUI_Object, public wxWindow{
	
		private:
			SPtr<GUI_Object>	mParent;
		public:	
			GUI_ObjectWX();
			GUI_ObjectWX(SPtr<GUI_Object> parent);
			~GUI_ObjectWX();
			void setPosition(int x, int y);
			void setSize(int x, int y);
			void getPosition(int& x, int& y);
			void getSize(int& x, int& y);
			SPtr<GUI_Object> getParent();
			void setParent(SPtr<GUI_Object> parent);

	};
}

#endif // Headerguardf

// Prototype
namespace asdf{
	class GUI_ObjectWX;

}

