#ifndef ASDF_LAYOUTMANAGERWX_H
#define ASDF_LAYOUTMANAGERWX_H

#include "GUI_ObjectWX.h"
#include "LayoutManager.h"
#include <vector>

namespace asdf{
	class LayoutManagerWX : public LayoutManager, public GUI_ObjectWX{
		private: 
			std::vector<SPtr<GUI_Object>>		mObjects;
			int									mSpacing;
			SPtr<String>						mType;
			SPtr<GUI_Object>					mParent;
		public: 
			LayoutManagerWX(SPtr<GUI_Object> parent);
			~LayoutManagerWX();
			void addElement(SPtr<GUI_Object> object);
			void moveObjectUp(int steps);
			void moveObjectDown(int steps);
			void setType(String* type);
			
	};
	
} // namespace asdf

#endif // HeaderGuard

namespace asdf{
	class LayoutManager;
}