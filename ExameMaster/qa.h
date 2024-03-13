#ifndef QA_H
#define QA_H

#include <QDialog>

namespace Ui {
class QA;
}

class QA : public QDialog
{
    Q_OBJECT

public:
    explicit QA(QWidget *parent = nullptr);
    ~QA();

private:
    Ui::QA *ui;
};

#endif // QA_H
