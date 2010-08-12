#ifndef ASDF_SHAREDPOINTER_H
#define ASDF_SHAREDPOINTER_H

#include <iostream>

namespace asdf{
	template <class T>
	class SharedPointer{
		T* mObject;
		int mRefCounter;
		
		public:
			SharedPointer(T* object){
				mObject = object;
				mRefCounter = 0;
				std::cout << "Create shared Pointer" << std::endl;		
			}
			
			~SharedPointer(){
				if(mRefCounter > 0)
					std::cout << "SharedPointer: Error Ref Count > 0" << std::endl;
				else {
					std::cout << "Delete Shared Pointer Object" << std::endl;
					delete mObject;
				}
			}
			
			T* get(){
				mRefCounter++;
				return mObject;
			}
			
			void release(){
				mRefCounter--;
				if(mRefCounter == 0){
					delete this;
					
				}
			}
			T* operator*(){
				return mObject; 
			}
			
			
	};
}

#endif // Headerguard
