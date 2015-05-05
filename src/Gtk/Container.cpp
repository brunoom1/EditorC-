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

Gtk::Container::Container(){
	Widget();
}

void Gtk::Container::add(Gtk::Widget *widget){
	gtk_container_add(GTK_CONTAINER(this->widget), widget->getGtkWidget());
}

void Gtk::Container::remove(Gtk::Widget *widget){
	gtk_container_remove(GTK_CONTAINER(this->widget), widget->getGtkWidget());
}
