#include "formulario.h"

Formulario::Formulario()
{
    LLegajo = new QLabel("Legajo");
    LNombre = new QLabel("Nombre");
    LApellido = new QLabel("Apellido");
    LNomCaptcha = new QLabel("Captcha");
    LCaptcha = new QLabel("");
    LeLegajo = new QLineEdit;
    LeNombre = new QLineEdit;
    LeApellido = new QLineEdit;
    LeCaptcha = new QLineEdit;
    PBAlta = new QPushButton("Alta");

    Layout = new QGridLayout;
    Layout->addWidget(LLegajo, 0, 0, Qt::AlignCenter);
    Layout->addWidget(LNombre, 1, 0, Qt::AlignCenter);
    Layout->addWidget(LApellido, 2, 0, Qt::AlignCenter);

    Layout->addWidget(LeLegajo, 0, 1, Qt::AlignCenter);
    Layout->addWidget(LeNombre, 1, 1, Qt::AlignCenter);
    Layout->addWidget(LeApellido, 2, 1, Qt::AlignCenter);

    Layout->addWidget(LNomCaptcha, 3, 0, Qt::AlignCenter);
    Layout->addWidget(LCaptcha, 4, 0, Qt::AlignCenter);
    Layout->addWidget(LeCaptcha, 5, 0, Qt::AlignCenter);
    Layout->addWidget(PBAlta, 3, 1, 3, 1, Qt::AlignCenter);

    connect(PBAlta, SIGNAL( pressed()), this, SLOT( SlotValidarCaptcha()));
    connect(LeCaptcha, SIGNAL( returnPressed()), this, SLOT( SlotValidarCaptcha()));

    this->setLayout(Layout);

    randNum();
}

void Formulario::SlotValidarCaptcha()
{
    if(LeCaptcha->text() == QString::number(NumCaptcha))
    {
        LeLegajo->clear();
        LeNombre->clear();
        LeApellido->clear();
        LeCaptcha->clear();
        randNum();

        this->hide();
        emit SignalCerrarLogin();
    }
    else
    {
        randNum();
        LeCaptcha->clear();
    }
}
void Formulario::randNum()
{
    std::srand((unsigned) time(NULL));
    NumCaptcha = rand()%1000;
    NumCaptcha += 1;
    LCaptcha->setText(QString::number(NumCaptcha));
}
void Formulario::CerrarLogin()
{
    emit SignalCerrarLogin();
}
