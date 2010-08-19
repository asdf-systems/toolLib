#include "MainWindowWX.h"

namespace asdf{
	
	MainWindowWX::MainWindowWX(const wxString& title)
		   : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(1200, 600))
	{
	    mFileMenu = SPtr<wxMenu>(new wxMenu());

		Centre();
	}

	MainWindowWX::~MainWindowWX(){
	
	}

	
} // namespace
