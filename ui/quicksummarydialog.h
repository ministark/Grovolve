//Copyright 2015 Ryan Wick

//This file is part of Grovolve.

//Grovolve is free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.

//Grovolve is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.

//You should have received a copy of the GNU General Public License
//along with Grovolve.  If not, see <http://www.gnu.org/licenses/>.


#ifndef QUICKSUMMARYDIALOG_H
#define QUICKSUMMARYDIALOG_H

#include <QDialog>

namespace Ui {
class QuickSummaryDialog;
}

class QuickSummaryDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit QuickSummaryDialog(QWidget *parent = 0);
    ~QuickSummaryDialog();
    
private:
    Ui::QuickSummaryDialog * ui;
};

#endif // QUICKSUMMARYDIALOG_H
