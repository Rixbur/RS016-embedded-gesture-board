#ifndef TETRIXWINDOW_H
#define TETRIXWINDOW_H

#include <QWidget>
#include <QFrame>

QT_BEGIN_NAMESPACE
class QLCDNumber;
class QLabel;
class QPushButton;
QT_END_NAMESPACE
class tetrisigra;

class tetrisprozor : public QWidget
{
    Q_OBJECT

public:
    tetrisprozor();

private:
    //kreira labelu sa poravnanjem
    QLabel *createLabel(const QString &text);
    tetrisigra *board;
    QLabel *sledeciDeoLabela;
    //QLCDNumber su samo lepsi brojevi
    QLCDNumber *skor;
    QLCDNumber *level;
    QLCDNumber *linije;
    QPushButton *startButton;
    QPushButton *quitButton;
    QPushButton *pauseButton;

private slots:
    void serialRecievedTetris();
};
#endif