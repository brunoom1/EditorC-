#define GTK_WIDGET_H 1
#include <gtk/gtk.h>

namespace Gtk{
	class Widget{
	protected:
		GtkWidget *widget;
	public:
		Widget();	// cria ponteiro para controlar widget

		void show();	// metodo para mostrar widget
		void showAll(); // metodo para mostrar todos os widget
		void hide();	// metodo para sumir com o widget
		void setName(const gchar *name);
		gchar *getName();

		GtkWidget *getGtkWidget();
		// events signals

		void destroy(void (*func)(GtkWidget *object, gpointer user_data));
		void destoryEvent(GtkWidget *object, GdkEvent *event, gpointer user_data);

	};
}
