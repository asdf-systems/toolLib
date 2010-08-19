#ifndef ASDF_LAYOUTMANAGERFACTORY_H
#define ASDF_LAYOUTMANAGERFACTORY_H

#include "Smartpointer.h"
#include "LayoutManagerWX.h"
#include "GUI_Object.h"

namespace asdf{
	class LayoutManagerFactory {
		static SPtr<LayoutManager> getLayoutManager(SPtr<GUI_Object> parent);
	};
}
#endif // Headerguard

// defines 
/**
* \predefine
* asdfLYM(a)	asdf::LayoutManagerFactory::getLayoutManager \n
*/ 

#define asdfLYM	asdf::LayoutManagerFactory::getLayoutManager

// Prototyp
namespace asdf {
	class LayoutManagerFactory;
}