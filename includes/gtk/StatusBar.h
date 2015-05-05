#define GTK_STATUS_BAR_H 1
#include <gtk/gtk.h>

namespace Gtk{
	class StatusBar: public Box{
	public:
		StatusBar();
		guint push(const char *text);
	};
}
