#include "MainWindowWX.h"

namespace asdf{
	
	MainWindowWX::MainWindowWX(const wxString& title)
		   : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(250, 150))
	{
	    mFileMenu = SPtr<wxMenu>(new wxMenu());

		Centre();
	}

	MainWindowWX::~MainWindowWX(){
	
	}

	bool MainWindowWX::Show(bool value){
		return (wxFrame::Show(value));
	}
} // namespace
