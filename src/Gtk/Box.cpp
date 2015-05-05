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

#include <iostream>
using namespace std;

Gtk::Box::Box(){
	this->widget = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 1);
	Container();
}

Gtk::Box::Box(GtkOrientation orientation){
	this->widget = gtk_box_new(orientation, 1);
	Container();
}

Gtk::Box::Box(GtkOrientation orientation, gint spacing){
	this->widget = gtk_box_new(orientation, spacing);
	Container();
}

void Gtk::Box::packStart(Widget *child, gboolean expand, gboolean fill, guint padding){
	gtk_box_pack_start (GTK_BOX(this->widget), child -> getGtkWidget(), expand, fill, padding);
}

void Gtk::Box::packEnd(Widget *child, gboolean expand, gboolean fill, guint padding){
	gtk_box_pack_end (GTK_BOX(this->widget), child ->getGtkWidget(), expand, fill, padding);
}
