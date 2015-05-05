#define GTK_BUTTON_H 1
#include <gtk/gtk.h>

namespace Gtk{
	class Button: public Bin{
	public:
		Button();
		Button(const char *title);
	};	
}
