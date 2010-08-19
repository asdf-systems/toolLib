#include "LayoutManagerWX.h"

namespace asdf{
	
	LayoutManagerWX::LayoutManagerWX(SPtr<GUI_ObjectWX> parent){
		this->mParent = parent;
		//this->mObjects = std::vector<SPtr<int>>;
	}
	LayoutManagerWX::~LayoutManagerWX(){
	
	}
	
	void LayoutManagerWX::addElement(SPtr<GUI_ObjectWX> object){
			mObjects.push_back(object);
			refresh();
	}
	
	void LayoutManagerWX::moveObjectUp(int steps, SPtr<GUI_ObjectWX> object){
		//for(int i=0; i<)
	}

	void LayoutManagerWX::moveObjectDown(int steps, SPtr<GUI_ObjectWX> object){
	
	}
	
	void LayoutManagerWX::setType(String* type){
	
	}

	void LayoutManagerWX::refresh(){
	
	}
	
} // namespace