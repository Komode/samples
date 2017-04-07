#ifndef BOOK_H
#define BOOK_H

#include <QString>

namespace lib {

    enum Status {
        Available,
        Borrowed,
        Discontinued,
        Missing
    };

    static QString statusStr(Status s) {
        switch (s) {
        case Borrowed:
            return "Borrowed";
        case Discontinued:
            return "Discontinued";
        case Missing:
            return "Missing";
        default:
            return "Available";
        }
    }

    struct Book {
        QString isbn;
        QString title;
        QString author;
        QString published;
        Status status = Available;

        QString toString() {
            QString str = "ISBN: " + isbn;
            str.append("\nTitle: " + title);
            str.append("\nAuthor: " + author);
            str.append("\nPublished: " + published);
            str.append("\nStatus: " + statusStr(status));
            return str;
        }
    };
}

#endif // BOOK_H
