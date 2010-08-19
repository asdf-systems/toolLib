#ifndef ASDF_LAYOUTMANAGERWX_H
#define ASDF_LAYOUTMANAGERWX_H

#include "GUI_ObjectWX.h"
#include "LayoutManager.h"
#include <vector>

namespace asdf{
	class LayoutManagerWX : public GUI_ObjectWX{
		private: 
			std::vector<SPtr<GUI_Object>>		mObjects;
			int									mSpacing;
			SPtr<String>						mType;
			SPtr<GUI_Object>					mParent;
		public: 
			LayoutManagerWX(SPtr<GUI_Object> parent);
			~LayoutManagerWX();
			/**
			 * Add GUI element to Layout Manager - so that Layout Manager take care about position \n
			*/
			void addElement(SPtr<GUI_Object> object);
			/**
			 * change Order of Objects in the Manager
			 * move object up in the list
			*/
			void moveObjectUp(int steps);
			/**
			 * change Order of Objects in the Manager
			 * move object down in the list
			*/
			void moveObjectDown(int steps);
			/**
			 * Set position type for the Layout Manager \n
			 * Type options: \n
			 * \t	horizontal
			 * \t	vertical
			*/
			void setType(String* type);
			
	};
	
} // namespace asdf

#endif // HeaderGuard

namespace asdf{
	class LayoutManager;
}