#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL", "Panda");
    db.setUserName("root");
    db.setPassword("1234");
    db.setDatabaseName("panda");
    if (db.open()) {
        ui->textEdit->setText("database connected\n");
        QString str;
        QString sql = "select * from contacts";
        QSqlQuery query = db.exec(sql);
        while (query.next()) {
            str += query.record().value(1).toString() + "\t" + query.record().value(2).toString();
            str += "\n";
        }
        ui->textEdit->setText(str);
    } else {
        ui->textEdit->setText("could not connect to database\n");
    }
}
