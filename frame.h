#ifndef GTKMM_FRAMET_H
#define GTKMM_FRAMET_H

#include <gtkmm-3.0/gtkmm/frame.h>
#include <gtkmm-3.0/gtkmm/label.h>
#include <gtkmm-3.0/gtkmm/window.h> 



class FrameT: public Gtk::Window
{
public:
    FrameT();
    virtual ~FrameT();

    protected:
        //Frame
        Gtk::Frame m_frame;

        //Label
        Gtk::Label m_label;
};

#endif //GTKMM_FRAMET_H