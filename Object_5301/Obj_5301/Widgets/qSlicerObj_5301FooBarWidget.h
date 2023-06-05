/*==============================================================================

  Program: 3D Slicer

  Copyright (c) Kitware Inc.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Jean-Christophe Fillion-Robin, Kitware Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

#ifndef __qSlicerObj_5301FooBarWidget_h
#define __qSlicerObj_5301FooBarWidget_h

// Qt includes
#include <QWidget>

// FooBar Widgets includes
#include "qSlicerObj_5301ModuleWidgetsExport.h"

class qSlicerObj_5301FooBarWidgetPrivate;

/// \ingroup Slicer_QtModules_Obj_5301
class Q_SLICER_MODULE_OBJ_5301_WIDGETS_EXPORT qSlicerObj_5301FooBarWidget
  : public QWidget
{
  Q_OBJECT
public:
  typedef QWidget Superclass;
  qSlicerObj_5301FooBarWidget(QWidget *parent=0);
  ~qSlicerObj_5301FooBarWidget() override;

protected slots:

protected:
  QScopedPointer<qSlicerObj_5301FooBarWidgetPrivate> d_ptr;

private:
  Q_DECLARE_PRIVATE(qSlicerObj_5301FooBarWidget);
  Q_DISABLE_COPY(qSlicerObj_5301FooBarWidget);
};

#endif
