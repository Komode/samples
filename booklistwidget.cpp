#include "booklistwidget.h"
#include <QStyle>

BookListWidget::BookListWidget(QWidget *parent) : QWidget(parent)
{
    // setup actions
    actAdd = new QAction(tr("Add"));
    actRem = new QAction(tr("Remove"));

    // connect action signals to widget slots
    connect(actAdd, &QAction::triggered, this, &BookListWidget::bookCreate);
    connect(actRem, &QAction::triggered, this, &BookListWidget::bookRemove);

    // create buttons and button layout
    btnAdd = new QToolButton;
    btnAdd->setDefaultAction(actAdd);

    btnRem = new QToolButton;
    btnRem->setDefaultAction(actRem);

    btnLayout = new QHBoxLayout;
    btnLayout->setContentsMargins(2, 2, 2, 2);
    btnLayout->setSpacing(4);
    btnLayout->addWidget(btnAdd, 0, Qt::AlignRight);
    btnLayout->addWidget(btnRem);


    // set up listView
    listView = new QListView;

    /* create model and set to listView->setModel */

    // widget layout
    wdgLayout = new QVBoxLayout;
    wdgLayout->setContentsMargins(2, 2, 2, 2);
    wdgLayout->setSpacing(2);
    wdgLayout->addWidget(listView);
    wdgLayout->addLayout(btnLayout);

    this->setLayout(wdgLayout);
}

/// member functions
/*
QSize BookListWidget::sizeHint() const {

}
*/
/// slots
void BookListWidget::bookCreate() {
    // display dialog for creating book
}

void BookListWidget::bookRemove() {
    // remove a book from the list
}
