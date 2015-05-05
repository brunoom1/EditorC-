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

Gtk::Window::Window(){
	this->widget = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	Bin();
}

Gtk::Window::Window(const char *title){
	this->widget = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	this->setTitle(title);
	Bin();
}

Gtk::Window::Window(unsigned int width,unsigned int height){
	this->widget = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	this->resize(width, height); // aplicando o resize
	Bin();
}

Gtk::Window::Window(GtkWindowType type){
	// cria o widget window
	this->widget = gtk_window_new(type);
	Bin();
}

void Gtk::Window::resize(gint width, gint height){
	gtk_window_resize(GTK_WINDOW(this->widget), width, height);
}

void Gtk::Window::setTitle(const char *title){
	gtk_window_set_title(GTK_WINDOW(this->widget), title);
}
