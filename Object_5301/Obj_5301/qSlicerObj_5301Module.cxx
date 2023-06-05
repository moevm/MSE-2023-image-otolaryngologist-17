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

// Obj_5301 Logic includes
#include <vtkSlicerObj_5301Logic.h>

// Obj_5301 includes
#include "qSlicerObj_5301Module.h"
#include "qSlicerObj_5301ModuleWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerObj_5301ModulePrivate
{
public:
  qSlicerObj_5301ModulePrivate();
};

//-----------------------------------------------------------------------------
// qSlicerObj_5301ModulePrivate methods

//-----------------------------------------------------------------------------
qSlicerObj_5301ModulePrivate::qSlicerObj_5301ModulePrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerObj_5301Module methods

//-----------------------------------------------------------------------------
qSlicerObj_5301Module::qSlicerObj_5301Module(QObject* _parent)
  : Superclass(_parent)
  , d_ptr(new qSlicerObj_5301ModulePrivate)
{
}

//-----------------------------------------------------------------------------
qSlicerObj_5301Module::~qSlicerObj_5301Module()
{
}

//-----------------------------------------------------------------------------
QString qSlicerObj_5301Module::helpText() const
{
  return "Loadable module for automated processing of CT images";
}

//-----------------------------------------------------------------------------
QString qSlicerObj_5301Module::acknowledgementText() const
{
  return "-";
}

//-----------------------------------------------------------------------------
QStringList qSlicerObj_5301Module::contributors() const
{
  QStringList moduleContributors;
  moduleContributors << QString("SPbETU students");
  return moduleContributors;
}

//-----------------------------------------------------------------------------
QIcon qSlicerObj_5301Module::icon() const
{
  return QIcon(":/Icons/Obj_5301.png");
}

//-----------------------------------------------------------------------------
QStringList qSlicerObj_5301Module::categories() const
{
  return QStringList() << "Otolaryngologist";
}

//-----------------------------------------------------------------------------
QStringList qSlicerObj_5301Module::dependencies() const
{
  return QStringList();
}

//-----------------------------------------------------------------------------
void qSlicerObj_5301Module::setup()
{
  this->Superclass::setup();
}

//-----------------------------------------------------------------------------
qSlicerAbstractModuleRepresentation* qSlicerObj_5301Module
::createWidgetRepresentation()
{
  return new qSlicerObj_5301ModuleWidget;
}

//-----------------------------------------------------------------------------
vtkMRMLAbstractLogic* qSlicerObj_5301Module::createLogic()
{
  return vtkSlicerObj_5301Logic::New();
}
