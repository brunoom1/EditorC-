#ifndef H_EDITOR
	#define H_EDITOR 1
#endif

#include <gtk/gtk.h>
#include <iostream>
#include <stdlib.h>
#include "gtk/gtk.h"
#include "MyWindow.h"
// incluir todas as classes usadas no projeto.

using namespace std;

class Editor{
	Gtk::Window *janela;

public:
	Editor(int argc, char **argv);
	~Editor();
};
