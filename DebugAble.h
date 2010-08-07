namespace asdf{

	virtual class DebugAble{
		virtual bool succeeded() = 0;
		virtual DebugInfo getErrorValues() = 0;
		
	};
}
