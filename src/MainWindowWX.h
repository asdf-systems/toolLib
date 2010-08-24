#ifndef ASDF_MAINWINDOWWX_H
#define ASDF_MAINWINDOWWX_H

#include <wx/wx.h>
#include "GUI_ObjectWX.h"
#include "SmartPointer.h"
#include "LayoutManagerWX.h"
#include "ButtonWX.h"
#include "String.h"

namespace asdf{
	
	class MainWindowWX : public GUI_ObjectWX, public wxFrame{
		private:
			SPtr<wxMenu>			mFileMenu;
			SPtr<LayoutManagerWX>	mSplitInfo_lym;
			SPtr<ButtonWX>			mButton;
			SPtr<ButtonWX>			mButton2;
			
		public:	
			MainWindowWX(String title);
			~MainWindowWX();
			


	};

	typedef MainWindowWX MainWindow;
} // namespace

#endif // Headerguard

// Prototype
namespace asdf{
	class MainWindowWX;

}
