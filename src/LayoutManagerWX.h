#ifndef ASDF_LAYOUTMANAGERWX_H
#define ASDF_LAYOUTMANAGERWX_H

#include "GUI_ObjectWX.h"
#include <vector>
#include "String.h"
#include "SmartPointer.h"

namespace asdf{
	class LayoutManagerWX : public GUI_ObjectWX{
		private: 
			std::vector<GUI_ObjectWX*>			mObjects;
			int									mSpacing;
			SPtr<String>						mType;
			SPtr<GUI_ObjectWX>					mParent;
		
		private:		
			/**
			 * reposition all Elements of the Manager
			*/
			void refresh();
		public: 
			LayoutManagerWX(SPtr<GUI_ObjectWX> parent);
			~LayoutManagerWX();
			/**
			 * Add GUI element to Layout Manager - so that Layout Manager take care about position \n
			*/
			void addElement(SPtr<GUI_ObjectWX> object);
			/**
			 * change Order of Objects in the Manager
			 * move object up in the list
			*/
			void moveObjectUp(int steps, SPtr<GUI_ObjectWX> object);
			/**
			 * change Order of Objects in the Manager
			 * move object down in the list
			*/
			void moveObjectDown(int steps, SPtr<GUI_ObjectWX> object);
			/**
			 * Set position type for the Layout Manager \n
			 * Type options: \n
			 * \t	horizontal
			 * \t	vertical
			*/
			void setType(String* type);


			
	};
	
	typedef LayoutManagerWX LayoutManager;	
} // namespace asdf

#endif // HeaderGuard

namespace asdf{
	class LayoutManagerWX;
}
