#ifndef ASDF_MAINWINDOWWX_H
#define ASDF_MAINWINDOWWX_H

#include <wx/wx.h>
#include <MainWindow.h>

namespace asdf{
	
	class MainWindowWX : public MainWindow, public wxFrame{
		private:

		public:	
			MainWindowWX(const wxString& title);
			~MainWindowWX();
			void Show(bool);


	};

} // namespace

#endif // Headerguard

// Prototype
namespace asdf{
	class MainWindowWX;

}