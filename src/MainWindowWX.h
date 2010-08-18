#ifndef ASDF_MAINWINDOWWX_H
#define ASDF_MAINWINDOWWX_H

#include <wx/wx.h>
#include "MainWindow.h"
#include "Smartpointer.h"

namespace asdf{
	
	class MainWindowWX : public MainWindow, public wxFrame{
		private:
			SPtr<wxMenu>	mFileMenu;
		public:	
			MainWindowWX(const wxString& title);
			~MainWindowWX();
			bool Show(bool);


	};

} // namespace

#endif // Headerguard

// Prototype
namespace asdf{
	class MainWindowWX;

}