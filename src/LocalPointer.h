namespace asdf{
	template <class T>
	class LocalPointer{
		
		private:
			T* mObject;
		public:
			 LocalPointer(T* object): mObject(object){}
			 ~LocalPointer(){
				std::cout << "delete Local Pointer" << std::endl;
			 	delete mObject;
			 }
			 
			T& operator*(){
				return *mObject;
			}

			T* operator->(){
				return mObject;
			}
		
	};
}
