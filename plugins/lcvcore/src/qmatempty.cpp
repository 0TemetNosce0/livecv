/****************************************************************************
**
** Copyright (C) 2014-2017 Dinu SV.
** (contact: mail@dinusv.com)
** This file is part of Live CV Application.
**
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPLv3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl.html.
**
****************************************************************************/

#include "qmatempty.h"

/*!
  \qmltype MatEmpty
  \instantiates QMatEmpty
  \inqmlmodule lcvcore
  \inherits MatDisplay
  \brief Creates an empty matrix.

  Use this to create an empty matrix by spcecifying the size, background color, number of channels and type. The
  drawing example shows how to create an empty matrix, then use the draw element to draw on its surface.

  \quotefile imgproc/drawing.qml
*/

/*!
   \class QMatEmpty
   \internal
   \brief Creates an empty matrix.
 */


QMatEmpty::QMatEmpty(QQuickItem *parent) :
    QMatDisplay(parent),
    m_matSize(0, 0),
    m_color(0, 0, 0),
    m_channels(1),
    m_type(QMat::CV8U),
    m_colorScalar(0)
{
}

/*!
  \fn void QMatEmpty::cacheScalarColor()
  \brief Helper on caching the scalar color
 */


QMatEmpty::~QMatEmpty(){
}


/*!
  \qmlproperty Size MatEmpty::matSize

  The created matrix size.
 */


/*!
  \qmlproperty Color MatEmpty::color

  The background color of the created matrix.
 */


/*!
  \qmlproperty int MatEmpty::channels

  The number of channels of the created matrix.
 */


/*!
  \qmlproperty Mat::Type MatEmpty::type

  The type of the created matrix.
 */
