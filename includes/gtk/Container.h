#define GTK_CONTAINER_H 1
#include <gtk/gtk.h>

namespace Gtk{
	class Container: public Widget{
	public:
		Container();	// cria ponteiro para controlar widget
		void add(Gtk::Widget *widget);
		void remove(Gtk::Widget *widget);
	};
}
