#ifndef GTK_WIDGET_H
	#include "./../../includes/gtk/Widget.h"
#endif
#ifndef GTK_CONTAINER_H
	#include "./../../includes/gtk/Container.h"
#endif
#ifndef GTK_BIN_H
	#include "./../../includes/gtk/Bin.h"
#endif
#ifndef GTK_WINDOW_H
	#include "./../../includes/gtk/Window.h"
#endif

#include <iostream>
using namespace std;

Gtk::Bin::Bin(){
	Container();
}
