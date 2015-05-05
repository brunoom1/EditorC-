#ifndef GTK_WIDGET_H
	#include "./../../includes/gtk/Widget.h"
#endif
#ifndef GTK_CONTAINER_H
	#include "./../../includes/gtk/Container.h"
#endif
#ifndef GTK_BIN_H
	#include "./../../includes/gtk/Bin.h"
#endif
#ifndef GTK_BUTTON_H
	#include "./../../includes/gtk/Button.h"
#endif

#include <iostream>
using namespace std;

Gtk::Button::Button(){
	this->widget = gtk_button_new();
}

Gtk::Button::Button(const char *title){
	this->widget = gtk_button_new_with_label (title);
}
