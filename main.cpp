#include <gtkmm/application.h>
#include "frame.h"

int main(int argc, char *argv[]){
    Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "teste.fonte.frame");
    FrameT frame;
    app->run(frame);
} 