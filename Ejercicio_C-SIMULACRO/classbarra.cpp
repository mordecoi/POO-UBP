#include "classbarra.h"

classBarra::classBarra()
{

}
void classBarra::actualizarBarra(int porcentaje)
{
    setValue((int) porcentaje); // Actualizar el valor de la barra de progreso
    setFormat(QString("Progreso: %1%").arg(porcentaje)); // Personalizar el formato del texto
}
