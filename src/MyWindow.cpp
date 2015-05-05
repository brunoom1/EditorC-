#include "./../includes/MyWindow.h"

MyWindow::MyWindow(const char *title):Gtk::Window(title){

	// box principal
	this->boxH = new Gtk::Box();
	this->boxV = new Gtk::Box(GTK_ORIENTATION_VERTICAL);

	this->statusBar = new Gtk::StatusBar();
	this->statusBar->push("Status bar");

	Gtk::Button b1("navigation file");	// espaço para barra lateral
	Gtk::Button b2("conteudo "); // espaço para conteúdo, notebook
	Gtk::Button b3("status bar");	// espaço para barra de status

	// espaço para o menubar
	this->boxH->packStart(&b1, TRUE, TRUE, 2);
	// espaço para o outro box
	this->boxH->packEnd(this->boxV, TRUE, TRUE, 2);

	this->boxV->packStart(&b2, TRUE, TRUE, 2);
	this->boxV->packEnd(this->statusBar, FALSE, FALSE, 2);

	this->add(this->boxH);
	this->showAll();
}

MyWindow::~MyWindow(){
	delete this->boxH;
	delete this->boxV;
	delete this->statusBar;
}
