#ifndef EJERCICIOC_H
#define EJERCICIOC_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>
#include <QProgressBar>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QUrl>

#include "classbarra.h"

class ejercicioC : public QWidget
{
    Q_OBJECT
private:
    QLineEdit *LEUrl;
    QPushButton *PBDescargar;
    classBarra *PBProgreso;
    QGridLayout *Layout;

    QNetworkAccessManager *manager;
    QNetworkReply *reply;

public:
    explicit ejercicioC(QWidget *parent = nullptr);

public slots:
    void actualizarPorcentajes(qint64 bytesReceived, qint64 bytesTotal);
    void descargaFinalizada();
    void iniciarDescarga();
};

#endif // EJERCICIOC_H
