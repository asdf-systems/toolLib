#ifndef ASDF_LAYOUTMANAGER_H
#define ASDF_LAYOUTMANAGER_H

namespace asdf{
	class LayoutManagerWX : public LayoutManager{
		private: 
			std::vector<SPtr<GUI_Object>>		mObjects;
			int									mSpacing;
			SPtr<String>						mType;
		public: 
			void addElement(SPtr<GUI_Object> object);
			void moveObjectUp(int steps);
			void moveObjectDown(int steps);
			void setType(String* type);
	}
	
} // namespace asdf

#endif // HeaderGuard

namespace asdf{
	class LayoutManager;
}