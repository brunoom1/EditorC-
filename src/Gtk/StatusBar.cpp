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
#ifndef GTK_BOX_H
	#include "./../../includes/gtk/Box.h"
#endif
#ifndef GTK_STATUS_BAR_H
	#include "./../../includes/gtk/StatusBar.h"
#endif

#include <iostream>
using namespace std;

Gtk::StatusBar::StatusBar(){
	this->widget = gtk_statusbar_new();
}

guint Gtk::StatusBar::push(const char *text){
	return gtk_statusbar_push(GTK_STATUSBAR(this->widget),
	gtk_statusbar_get_context_id(GTK_STATUSBAR(this->widget), "success"), text);
}
