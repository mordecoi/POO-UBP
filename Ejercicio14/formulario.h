#ifndef FORMULARIO_H
#define FORMULARIO_H

#include <QWidget>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>

#include <iostream>
#include <cstdlib>

class Formulario : public QWidget
{
    Q_OBJECT;
private:
    QLabel *LLegajo, *LNombre, *LApellido, *LNomCaptcha, *LCaptcha;
    QLineEdit *LeLegajo, *LeNombre, *LeApellido, *LeCaptcha;
    QPushButton *PBAlta;
    QGridLayout *Layout;
    int NumCaptcha;
public:
    Formulario();
    void randNum();
    void CerrarLogin();
private slots:
    void SlotValidarCaptcha();
signals:
    void SignalCerrarLogin();
};

#endif // FORMULARIO_H
