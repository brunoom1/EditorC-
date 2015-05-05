#include "includes/Editor.h"

int main(int argc, char **argv){
	// cria editor
	Editor *editor = new Editor(argc, argv);
	// quando loop da aplicação parar remove o editor
	delete editor;
};
