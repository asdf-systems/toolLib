#include "MainWindowWX.h"

namespace asdf{
	
	MainWindowWX::MainWindowWX(const wxString& title)
		   : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(250, 150))
	{
	   Centre();
	}

	MainWindowWX::~MainWindowWX(){
	
	}

	MainWindowWX::Show(bool value){
		wxFrame::Show(value);
	}
} // namespace
