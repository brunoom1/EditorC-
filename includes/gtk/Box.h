#define GTK_BOX_H 1
#include <gtk/gtk.h>

namespace Gtk{
	class Box: public Container{
	public:
		Box();
		Box(GtkOrientation orientation);
		Box(GtkOrientation orientation, gint spacing);

		void packStart(Widget *child, gboolean expand, gboolean fill, guint padding);

		void packEnd(Widget *child, gboolean expand, gboolean fill, guint padding);

		gboolean isHomogeneous();

		void setHomogeneous(gboolean b);

		gint getSpacing();

		void setSpacing(gint spacing);

		void reorderChild(Widget child, gint position);

		void queryChildPacking(Widget *child, gboolean *expand, gboolean *fill,
                             guint *padding, GtkPackType *pack_type);

		void setChildPacking (Widget *child,
                           gboolean expand,
                           gboolean fill,
                           guint padding,
                           GtkPackType pack_type);

	};
}
