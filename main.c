#include <gtk/gtk.h>

int main( int argc,char *argv[] )
{
	//init gtk
	gtk_init(&argc, &argv);

	//build main window
	GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

	//display widget
	gtk_widget_show(window);

	//start main event loop
	gtk_main();

	return 0;
}
