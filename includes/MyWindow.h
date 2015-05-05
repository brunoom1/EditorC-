#ifndef GTK_H
	#include "gtk/gtk.h"
#endif

class MyWindow: public Gtk::Window{
	Gtk::Box *boxV, *boxH;
	Gtk::StatusBar *statusBar;
public:
	MyWindow();
	MyWindow(const char *);
	~MyWindow();
};
