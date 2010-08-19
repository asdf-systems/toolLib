#include "LayoutManagerFactory.h"

namespace asdf{
	SPtr<LayoutManager> LayoutManagerFactory::getLayoutManager(SPtr<GUI_Object> parent){
		return SPtr<LayoutManager>(dynamic_cast<LayoutManager*>(new LayoutManagerWX(parent)));
	}
}