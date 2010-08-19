#ifndef ASDF_MAINWINDOWWX_H
#define ASDF_MAINWINDOWWX_H

#include <wx/wx.h>
#include "GUI_ObjectWX.h"
#include "Smartpointer.h"

namespace asdf{
	
	class MainWindowWX : public GUI_ObjectWX, public wxFrame{
		private:
			SPtr<wxMenu>	mFileMenu;
		public:	
			MainWindowWX(const wxString& title);
			~MainWindowWX();
			


	};

} // namespace

#endif // Headerguard

// Prototype
namespace asdf{
	class MainWindowWX;

}