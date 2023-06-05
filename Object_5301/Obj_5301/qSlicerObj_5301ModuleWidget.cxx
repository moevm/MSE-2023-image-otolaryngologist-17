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

// Qt includes
#include <QDebug>

// Slicer includes
#include "qSlicerObj_5301ModuleWidget.h"
#include "ui_qSlicerObj_5301ModuleWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerObj_5301ModuleWidgetPrivate: public Ui_qSlicerObj_5301ModuleWidget
{
public:
  qSlicerObj_5301ModuleWidgetPrivate();
};

//-----------------------------------------------------------------------------
// qSlicerObj_5301ModuleWidgetPrivate methods

//-----------------------------------------------------------------------------
qSlicerObj_5301ModuleWidgetPrivate::qSlicerObj_5301ModuleWidgetPrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerObj_5301ModuleWidget methods

//-----------------------------------------------------------------------------
qSlicerObj_5301ModuleWidget::qSlicerObj_5301ModuleWidget(QWidget* _parent)
  : Superclass( _parent )
  , d_ptr( new qSlicerObj_5301ModuleWidgetPrivate )
{
}

//-----------------------------------------------------------------------------
qSlicerObj_5301ModuleWidget::~qSlicerObj_5301ModuleWidget()
{
}

//-----------------------------------------------------------------------------
void qSlicerObj_5301ModuleWidget::setup()
{
  Q_D(qSlicerObj_5301ModuleWidget);
  d->setupUi(this);
  this->Superclass::setup();
}
