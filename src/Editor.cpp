// inclui classe editor se ainda não foi incluido
#ifndef H_EDITOR
	#include "./../includes/Editor.h"
#endif


void windows_destroy(GtkWidget *gtk, gpointer data){
	gtk_main_quit();
}

// implementação da classe editor
Editor::Editor(int argc, char **argv){
	gtk_init(&argc, &argv);

	this->janela = new MyWindow("Editor 1.0");
	this->janela->resize(800,600);
	this->janela->show();

	// ligando eventos
	this->janela->destroy(windows_destroy);

	// criada janela superior
	gtk_main();
};

Editor::~Editor(){
	// remove janela da memória
	delete this->janela;
	cout << "Editor Destruct" << endl;
};
