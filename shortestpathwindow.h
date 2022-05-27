#include <QDialog>
#include <limits.h>
#include <iostream>
#include <stdio.h>
#include <stdio.h>
#include <QImage>

#include "AStar.h"

#define ROW 9
#define COL 10

// Creating a shortcut for int, int pair type
typedef pair<int, int> Pair;

// Creating a shortcut for pair<int, pair<int, int>> type
typedef pair<double, pair<int, int>> pPair;


 using namespace std;

 namespace Ui
{
 class ShortestPathWindow;
 }

 class ShortestPathWindow : public QDialog
{
     Q_OBJECT

 public:
     explicit ShortestPathWindow(QWidget *parent = nullptr);
     ~ShortestPathWindow();


     int grid[ROW][COL] = {{1, 0, 1, 1, 1, 1, 0, 1, 1, 1},
                           {1, 1, 1, 0, 1, 1, 1, 0, 1, 1},
                           {1, 1, 1, 0, 1, 1, 0, 1, 0, 1},
                           {0, 0, 1, 0, 1, 0, 0, 0, 0, 1},
                           {1, 1, 1, 0, 1, 1, 1, 0, 1, 0},
                           {1, 0, 1, 1, 1, 1, 0, 1, 0, 0},
                           {1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
                           {1, 0, 1, 1, 1, 1, 0, 1, 1, 1},
                           {1, 1, 1, 0, 0, 0, 1, 0, 0, 1}};

     //     int grid[ROW][COL] = {{1, 0, 1, 1, 1, 1, 0, f, 1, 1},
     //                         1  {1, 1, 1, 0, 1, 1, 1, 0, 1, 1},
     //                         2  {1, 1, 1, 0, 1, 1, 0, 1, 0, 1},
     //                         3  {0, 0, 1, 0, 1, 0, 0, 0, 0, h},
     //                         4  {1, 1, 1, 0, 1, d, 1, i, 1, 0},
     //                         5  {1, 0, 1, 1, b, 1, e, 1, g, 0},
     //                         6  {1, 0, 0, 0, c, 1, 0, 0, 0, 1},
     //                         7  {1, 0, 1, 1, 1, 1, 0, 1, 1, 1},
     //                         8  {a, 1, 1, 0, 0, 0, 1, 0, 0, 1}};
     //                             0  1  2  3  4  5  6  7  8  9


     //             a 6th october
     //             b West elbalad
     //             c eldokki
     //             d masr el gedeida
     //             e madinet nasr
     //             f obour
     //             g auc
     //             h madinaty
     //             i rehab

     //             a (8,0)
     //             b (5,4)
     //             c (6,4)
     //             d (4,5)
     //             e (5,6)
     //             f (0,7)
     //             g (5,8)
     //             h (3,9)
     //             i (4,7)


 private slots:
     void on_selectAreaButton_clicked();

     void on_backButton_clicked();

     void on_showAUCButton_clicked();

 private:

     AStar astar;

 private:
     Ui::ShortestPathWindow *ui;
 };
