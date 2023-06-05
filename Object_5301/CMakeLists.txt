cmake_minimum_required(VERSION 3.16.3...3.19.7 FATAL_ERROR)

project(Object5301)

#-----------------------------------------------------------------------------
# Extension meta-information
set(EXTENSION_HOMEPAGE "https://www.slicer.org/wiki/Documentation/Nightly/Extensions/Object5301")
set(EXTENSION_CATEGORY "Otolaryngologist")
set(EXTENSION_CONTRIBUTORS "students (SPbETU)")
set(EXTENSION_DESCRIPTION "Tool for automatic analysis of CT images")
set(EXTENSION_ICONURL "https://www.example.com/Slicer/Extensions/Object5301.png")
set(EXTENSION_SCREENSHOTURLS "https://www.example.com/Slicer/Extensions/Object5301/Screenshots/1.png")
set(EXTENSION_DEPENDS "NA") # Specified as a list or "NA" if no dependencies

#-----------------------------------------------------------------------------
# Extension dependencies
find_package(Slicer REQUIRED)
include(${Slicer_USE_FILE})

#-----------------------------------------------------------------------------
# Extension modules
add_subdirectory(Obj_5301)
## NEXT_MODULE

#-----------------------------------------------------------------------------
include(${Slicer_EXTENSION_GENERATE_CONFIG})
include(${Slicer_EXTENSION_CPACK})
