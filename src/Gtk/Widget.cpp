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

#include <gtk/gtk.h>
#include <iostream>
using namespace std;

Gtk::Widget::Widget(){
}

void Gtk::Widget::show(){
	gtk_widget_show(this->widget);
}

void Gtk::Widget::showAll(){
	gtk_widget_show_all(this->widget);
}

GtkWidget *Gtk::Widget::getGtkWidget(){
	return this->widget;
}

// events
// para passar um evento será chamada assim exemplo:
// window -> destroy(window_destroy);

void Gtk::Widget::destroy(void (*func)(GtkWidget *object, gpointer user_data)){
	g_signal_connect(this->widget, "destroy", G_CALLBACK(func), this);
}
