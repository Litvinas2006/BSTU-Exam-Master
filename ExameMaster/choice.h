#ifndef CHOICE_H
#define CHOICE_H

#include <QDialog>

namespace Ui {
class Choice;
}

class Choice : public QDialog
{
    Q_OBJECT

public:
    explicit Choice(QWidget *parent = nullptr);
    ~Choice();

private:
    Ui::Choice *ui;
};

#endif // CHOICE_H
