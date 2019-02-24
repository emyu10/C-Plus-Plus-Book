//#include <QCoreApplication>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlRecord>


int main(int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL", "forPanda");
//    db.setHostName(QString("localhost"));
//    db.setPort(3306);
    db.setUserName(QString("root"));
    db.setPassword(QString("1234"));
    db.setDatabaseName("panda");
    if (db.open()) {
        qDebug() << "db connected";
        QSqlQuery q = db.exec("select * from contacts");
        while (q.next()) {
            QSqlRecord r = q.record();
            qDebug() << r.value(1).toString() << "\t" << r.value(2).toString();
        }
    } else {
        qDebug() << "could not connect to the database";
    }
//    return a.exec();
    return 0;
}
