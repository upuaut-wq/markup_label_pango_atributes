#include <iostream>
#include "frame.h"

FrameT::FrameT(){
    this->add(this->m_frame);
    this->m_frame.add(this->m_label);
    this->set_resizable(false);
    this->set_size_request(800,400);

    //Configuração da janela
    this->set_border_width(5);
    this->set_title("  Janela Matriz  ");

    //Nome Frame
    this->m_frame.set_label("Area matriz");
    this->m_frame.set_label_align(0.05);

    //Configuração do Labels
    this->m_label.set_markup("<span font='Untitled1' size='24000'>AAAAAAAAAAAA\nAAAAAAAAAAAA\nAAAAAAAAAAAA\nAAAAAAAAAAAA\nAAAAAAAAAAAA\nAAAAAAAAAAAA\nAAAAAAAAAAAA\nAAAAAAAAAAAA\n</span>");
    this->m_label.set_markup("<span font='Untitled1' size='24000'>AAAAAAAAAAAA\nAAAAAAAAAAAA\nABAAAAAAAAAA\nAAAAAAAAAAAA\nAAAAAAAAAAAA\nAAAAAAAAAAAA\nAAAAAAAAAAAA\nAAAAAAAAAAAA\n</span>");
    this->m_label.set_alignment(0,0);
    this->m_label.set_margin_start(7);

    this->show_all_children();


}


FrameT::~FrameT(){

    
}