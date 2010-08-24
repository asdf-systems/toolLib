#include "ButtonWX.h"

namespace asdf{
	ButtonWX::ButtonWX(wxWindow* parent, StringWX title) : wxButton(parent, wxID_ANY, title.toWxStr(), wxPoint(100,100), wxSize(50,50)){
	
	}

	ButtonWX::~ButtonWX(){
	
	}
}
