#include "MainWindowWX.h"

namespace asdf{
	
	MainWindowWX::MainWindowWX(const wxString& title)
		   : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(1200, 600))
	{
	    mFileMenu = SPtr<wxMenu>(new wxMenu());
		mSplitInfo_lym = asdf::SPtr<asdf::LayoutManagerWX>(new asdf::LayoutManagerWX(this));
		mSplitInfo_lym->addElement(SPtr<GUI_ObjectWX>(new GUI_ObjectWX()));
		mButton = SPtr<ButtonWX>(new ButtonWX(this, "Hallo"));
		mButton2 = SPtr<ButtonWX>(new ButtonWX(this, "Hallo2"));
		Centre();
	}

	MainWindowWX::~MainWindowWX(){
	
	}

	
} // namespace
