#include "ejercicioc.h"

ejercicioC::ejercicioC(QWidget *parent) : QWidget(parent) {
    LEUrl = new QLineEdit;
    PBDescargar = new QPushButton("Descargar");
    Layout = new QGridLayout;
    PBProgreso = new classBarra; // Create an instance of Barra class

    Layout->addWidget(LEUrl, 0, 0, Qt::AlignCenter);
    Layout->addWidget(PBDescargar, 1, 0, Qt::AlignCenter);
    Layout->addWidget(PBProgreso, 2, 0, Qt::AlignCenter);

    PBProgreso->setFixedWidth(this->width());

    manager = new QNetworkAccessManager(this);

    connect(PBDescargar, SIGNAL(pressed()), this, SLOT(iniciarDescarga()));

    this->setLayout(Layout);
}

void ejercicioC::actualizarPorcentajes(qint64 bytesReceived, qint64 bytesTotal) {
    double progress = (double) bytesReceived / bytesTotal * 100;
    PBProgreso->setValue(progress);
}

void ejercicioC::descargaFinalizada() {
    delete reply;
}

void ejercicioC::iniciarDescarga() {
    QString url = LEUrl->text();
    reply = manager->get(QNetworkRequest(QUrl(url)));

    connect(reply, &QNetworkReply::downloadProgress, this, &ejercicioC::actualizarPorcentajes);
    connect(reply, &QNetworkReply::finished, this, &ejercicioC::descargaFinalizada);
}
