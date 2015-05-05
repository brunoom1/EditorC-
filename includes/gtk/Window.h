#define GTK_WINDOW_H 1
#include <gtk/gtk.h>

namespace Gtk{
	class Window: public Bin{
	public:
		Window();
		Window(GtkWindowType type);	// cria ponteiro para controlar widget
		Window(unsigned int width,unsigned int height);
		Window(const char *title);

		void resize(gint width, gint height);
		void setTitle(const char *title);
	};
}
