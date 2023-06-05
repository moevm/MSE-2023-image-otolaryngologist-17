/*==============================================================================

  Program: 3D Slicer

  Portions (c) Copyright Brigham and Women's Hospital (BWH) All Rights Reserved.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

==============================================================================*/

#ifndef __qSlicerObj_5301ModuleWidget_h
#define __qSlicerObj_5301ModuleWidget_h

// Slicer includes
#include "qSlicerAbstractModuleWidget.h"

#include "qSlicerObj_5301ModuleExport.h"

class qSlicerObj_5301ModuleWidgetPrivate;
class vtkMRMLNode;

/// \ingroup Slicer_QtModules_ExtensionTemplate
class Q_SLICER_QTMODULES_OBJ_5301_EXPORT qSlicerObj_5301ModuleWidget :
  public qSlicerAbstractModuleWidget
{
  Q_OBJECT

public:

  typedef qSlicerAbstractModuleWidget Superclass;
  qSlicerObj_5301ModuleWidget(QWidget *parent=0);
  virtual ~qSlicerObj_5301ModuleWidget();

public slots:


protected:
  QScopedPointer<qSlicerObj_5301ModuleWidgetPrivate> d_ptr;

  void setup() override;

private:
  Q_DECLARE_PRIVATE(qSlicerObj_5301ModuleWidget);
  Q_DISABLE_COPY(qSlicerObj_5301ModuleWidget);
};

#endif
