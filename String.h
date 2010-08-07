namespace asdf{
	
	virtual class String : public DebugAble, ReaderWriter{
		virtual void split(vector<String>& result);
		virtual bool match(String pattern);
		virtual void replace(String replace, String replaced, String& result);
		
	};
}
