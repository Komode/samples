#ifndef BOOKLISTWIDGET_H
#define BOOKLISTWIDGET_H

#include <QWidget>
#include <QBoxLayout>
#include <QAction>
#include <QToolButton>
#include <QListView>

class BookListWidget : public QWidget
{
    Q_OBJECT

    QBoxLayout *wdgLayout, *btnLayout;
    QAction *actAdd, *actRem;
    QToolButton *btnAdd, *btnRem;
    QListView *listView;

public:
    explicit BookListWidget(QWidget *parent = 0);
//    QSize sizeHint() const override;

signals:

private slots:
    void bookCreate();
    void bookRemove();

public slots:
};

#endif // BOOKLISTWIDGET_H
