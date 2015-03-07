/*
 * Copyright (C) 2015 by Julien Delile
 * 
 * This file is part of MECAGEN.
 * 
 * MECAGEN is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation version 3 of the License, or
 * any later version.
 * 
 * MECAGEN is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with MECAGEN.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef RECORDINGWIDGET_H
#define RECORDINGWIDGET_H

#include <QWidget>
#include <QString>
#include <QPushButton>

#include "glwidget.hpp"



namespace mg{

  class RecordingWidget : public QWidget
  {
    Q_OBJECT

    public:
      explicit RecordingWidget(GLWidget *_glw, QWidget *parent = 0);
      ~RecordingWidget();

      QSize minimumSizeHint() const;
      QSize sizeHint()        const;

      

    protected:


    private:
      
      QPushButton* startStopRecordButton;
      QPushButton* snapshotButton;

      GLWidget *glwidget;

      QString imageAdress;
      QPushButton* imageAdressButton;
      
      public slots:
      void startStopRecording();
      void updateImageAdress();
      void takeSingleSnapshot();
  };

}

#endif

