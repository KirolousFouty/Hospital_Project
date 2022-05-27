#include "shortestpathwindow.h"
#include "ui_shortestpathwindow.h"

 ShortestPathWindow::ShortestPathWindow(QWidget *parent) :
     QDialog(parent),
     ui(new Ui::ShortestPathWindow)
{
     ui->setupUi(this);   

     QImage imgG("D:/Desktop/VS Code - Hospital_Project/Hospital_Project/g.png");

     QPixmap pm = QPixmap::fromImage(imgG);
     ui->image->setScaledContents(true);
     ui->image->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored);
     ui->image->setPixmap(pm);


 }

 ShortestPathWindow::~ShortestPathWindow()
{
     delete ui;
}

void ShortestPathWindow::on_selectAreaButton_clicked()
{

    QImage imgA("D:/Desktop/VS Code - Hospital_Project/Hospital_Project/a.png");
    QImage imgB("D:/Desktop/VS Code - Hospital_Project/Hospital_Project/b.png");
    QImage imgC("D:/Desktop/VS Code - Hospital_Project/Hospital_Project/c.png");
    QImage imgD("D:/Desktop/VS Code - Hospital_Project/Hospital_Project/d.png");
    QImage imgE("D:/Desktop/VS Code - Hospital_Project/Hospital_Project/e.png");
    QImage imgF("D:/Desktop/VS Code - Hospital_Project/Hospital_Project/f.png");

    QImage imgH("D:/Desktop/VS Code - Hospital_Project/Hospital_Project/h.png");
    QImage imgI("D:/Desktop/VS Code - Hospital_Project/Hospital_Project/i.png");



    // User Location
    Pair src;

    // Salamtak Hospital
    Pair dest = make_pair(0, 0);



    if (ui->areasComboBox->currentText() == "El Rehab"){

        src = make_pair(4, 7);

        QPixmap pm = QPixmap::fromImage(imgI);
        ui->image->setScaledContents(true);
        ui->image->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->image->setPixmap(pm);

    } else if (ui->areasComboBox->currentText() == "Madinaty"){

        src = make_pair(3, 9);

        QPixmap pm = QPixmap::fromImage(imgH);
        ui->image->setScaledContents(true);
        ui->image->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->image->setPixmap(pm);

    } else if (ui->areasComboBox->currentText() == "Madinet Nasr"){

        src = make_pair(5, 6);

        QPixmap pm = QPixmap::fromImage(imgE);
        ui->image->setScaledContents(true);
        ui->image->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->image->setPixmap(pm);

    } else if (ui->areasComboBox->currentText() == "Masr El Gedida"){

        src = make_pair(4, 5);

        QPixmap pm = QPixmap::fromImage(imgD);
        ui->image->setScaledContents(true);
        ui->image->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->image->setPixmap(pm);

    } else if (ui->areasComboBox->currentText() == "Obour"){

        src = make_pair(0, 7);

        QPixmap pm = QPixmap::fromImage(imgF);
        ui->image->setScaledContents(true);
        ui->image->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->image->setPixmap(pm);

    } else if (ui->areasComboBox->currentText() == "West El Balad"){

        src = make_pair(5, 4);

        QPixmap pm = QPixmap::fromImage(imgB);
        ui->image->setScaledContents(true);
        ui->image->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->image->setPixmap(pm);

    } else if (ui->areasComboBox->currentText() == "October"){

        src = make_pair(8, 0);

        QPixmap pm = QPixmap::fromImage(imgA);
        ui->image->setScaledContents(true);
        ui->image->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->image->setPixmap(pm);

    } else if (ui->areasComboBox->currentText() == "El Dokki"){

        src = make_pair(6, 4);

        QPixmap pm = QPixmap::fromImage(imgC);
        ui->image->setScaledContents(true);
        ui->image->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->image->setPixmap(pm);

    }




    astar.result = "";

    astar.aStarSearch(grid, src, dest);

    ui->resultDisplay->setText("Shortest Path Result:\n\nCost: " + QString::number(astar.calculateHValue(src.first, src.second, dest)) + "\n" + astar.result);

}


void ShortestPathWindow::on_backButton_clicked()
{
    this->close();
}


void ShortestPathWindow::on_showAUCButton_clicked()
{
    QImage imgG("D:/Desktop/VS Code - Hospital_Project/Hospital_Project/g.png");

    QPixmap pm = QPixmap::fromImage(imgG);
    ui->image->setScaledContents(true);
    ui->image->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored);
    ui->image->setPixmap(pm);

    ui->resultDisplay->setText("Shortest Path Result:");
}

