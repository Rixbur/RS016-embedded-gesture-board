#ifndef SLIDESHOW_H
#define SLIDESHOW_H

#include <QMainWindow>

namespace Ui {
class SlideShow;
}

class SlideShow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SlideShow(QWidget *parent = nullptr);
    ~SlideShow();

private:
    Ui::SlideShow *ui;
};

#endif // SLIDESHOW_H
