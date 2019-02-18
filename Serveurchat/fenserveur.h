#ifndef FENSERVEUR_H
#define FENSERVEUR_H

#include <QWidget>
#include <QtNetwork>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QTcpServer>
#include <QTcpSocket>

class FenServeur : public QWidget
{
    Q_OBJECT

public:
    FenServeur();
    void envoyerATous(const QString &message);
private slots:
    void nouvelleConnexion();
    void donneRecues();
    void deconnecxionClient();

private:
    QLabel *etatServeur;
    QPushButton *boutonQuitter;

    QTcpServer *serveur;
    QList<QTcpSocket *> clients;
    quint16 tailleMessage;
};





#endif // FENSERVEUR_H
