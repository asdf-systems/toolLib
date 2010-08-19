#ifndef ASDF_MAINWINDOW_H
#define ASDF_MAINWINDOW_H

#include "GUI_Object.h"

namespace asdf{
	class MainWindow : public GUI_Object{
		
		virtual bool Show(bool) = 0;
	};
}
#endif // Headerguard

// Prototype
namespace asdf{
	class MainWindow;
}