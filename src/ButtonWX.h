#ifndef ASDF_BUTTONWX_H
#define ASDF_BUTTONWX_H

#include <wx/wx.h>
#include "GUI_ObjectWX.h"
#include "StringWX.h"

namespace asdf{

	class ButtonWX : public GUI_ObjectWX, wxButton{
		private:

		public:		
			ButtonWX(wxWindow* parent, StringWX title);
			~ButtonWX();

	};
} // namespace
#endif // Headerguard

// Prototype
namespace asdf{
	class ButtonWX;
}