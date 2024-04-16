#ifndef CLASSBARRA_H
#define CLASSBARRA_H
#include <QProgressBar>

class classBarra : public QProgressBar
{
public:
    classBarra();
    void actualizarBarra(int porcentaje);
};

#endif // CLASSBARRA_H
