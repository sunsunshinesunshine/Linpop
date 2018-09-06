#include <gtk/gtk.h>
#include<string.h>
static void
login_button_clicked (GtkWidget* button,gpointer * data_account)
{
    GtkWidget* dialog ;
    GtkMessageType type ;
    gchar *message;

    switch((gint)data_account)
    {
        case 1 :
            message = "用户名不存在";
            type = GTK_MESSAGE_ERROR ; 
            break;
        case 2 :
            message = "用户名密码不匹配";
            type = GTK_MESSAGE_ERROR ; 
            break;
    }

    dialog = gtk_message_dialog_new(NULL, GTK_DIALOG_MODAL | GTK_DIALOG_DESTROY_WITH_PARENT,
        type , GTK_BUTTONS_OK, message);
    gtk_dialog_run(GTK_DIALOG(dialog));
    gtk_widget_destroy(dialog);
}


