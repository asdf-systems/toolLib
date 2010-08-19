#ifndef ASDF_LAYOUTMANAGER_H
#define ASDF_LAYOUTMANAGER_H

#include "GUI_Object.h"
#include "Smartpointer.h"
#include "String.h"

namespace asdf{
	class LayoutManager : public GUI_Object{
		private:
		public:
			/**
			 * Add GUI element to Layout Manager - so that Layout Manager take care about position \n
			*/
			virtual void addElement(SPtr<GUI_Object> object) = 0;
			/**
			 * change Order of Objects in the Manager
			 * move object up in the list
			*/
			virtual void moveObjectUp(int steps) = 0;
			/**
			 * change Order of Objects in the Manager
			 * move object down in the list
			*/
			virtual void moveObjectDown(int steps) = 0;
			/**
			 * Set position type for the Layout Manager \n
			 * Type options: \n
			 * \t	horizontal
			 * \t	vertical
			*/
			virtual void setType(SPtr<String> type) = 0;
			/**
			 * set the distance between elements in Pixel
			*/
			virtual void setSpacing(int dist_in_pixel) = 0;


	};
	
} // namespace asdf

#endif // HeaderGuard

namespace asdf{
	class LayoutManager;
}