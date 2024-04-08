#include "login.h"
#include "formulario.h"

Login::Login()
{
    LUsuario = new QLabel("Usuario");
    LClave = new QLabel("Clave");
    LeUsuario = new QLineEdit;
    LeClave = new QLineEdit;
    PBEntrar = new QPushButton("Entrar");

    LeClave->setEchoMode(QLineEdit::PasswordEchoOnEdit);

    Layout = new QGridLayout;
    Layout->addWidget(LUsuario, 0, 0, Qt::AlignCenter);
    Layout->addWidget(LClave, 1, 0, Qt::AlignCenter);
    Layout->addWidget(LeUsuario, 0, 1, Qt::AlignCenter);
    Layout->addWidget(LeClave, 1, 1, Qt::AlignCenter);
    Layout->addWidget(PBEntrar, 2, 1, 1, 1, Qt::AlignCenter);

    connect(PBEntrar, SIGNAL( pressed()), this, SLOT( SlotValidarUsuario()));
    connect(LeClave, SIGNAL( returnPressed()), this, SLOT( SlotValidarUsuario()));
    connect(&formulario, &Formulario::SignalCerrarLogin, this, &Login::close);

    this->setLayout(Layout);
}

void Login::SlotValidarUsuario()
{
    if(LeUsuario->text() == "admin" && LeClave->text() == "1111")  {
        formulario.show();
    }
    else {
        this->hide();
        LeClave->clear();}
}
