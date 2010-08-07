namespace asdf{

	class DebugInfo{
		private:
			String mFunctionName;
			String mClassName;
			String mDescription;
		public:
			DebugInfo(ReadWriter& output);
			~DebugInfo();
			void show();
			void setFunctionName(String functionName);
			void setClassName(String className);
			void setDescription(String description);
			
	};
}
