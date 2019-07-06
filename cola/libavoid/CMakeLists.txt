
if(BUILD_SHARED_LIBS)
  set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MD")
  set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MDd")
else()
  set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")
  set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd")
endif()

ADD_LIBRARY(avoid STATIC 
  actioninfo.cpp
  connectionpin.cpp
  connector.cpp
  connend.cpp
  geometry.cpp
  geomtypes.cpp
  graph.cpp
  hyperedge.cpp
  hyperedgeimprover.cpp
  hyperedgetree.cpp
  junction.cpp
  makepath.cpp
  mtst.cpp
  obstacle.cpp
  orthogonal.cpp
  router.cpp
  scanline.cpp
  shape.cpp
  timer.cpp
  vertices.cpp
  viscluster.cpp
  visibility.cpp
  vpsc.cpp
)
INCLUDE_DIRECTORIES(../)
INCLUDE_DIRECTORIES("${CMAKE_INSTALL_PREFIX}/include")

set(HEADER_FILES 
  actioninfo.h
  assertions.h
  connectionpin.h
  connector.h
  connend.h
  debug.h
  debughandler.h
  dllexport.h
  geometry.h
  geomtypes.h
  graph.h
  hyperedge.h
  hyperedgeimprover.h
  hyperedgetree.h
  junction.h
  libavoid.h
  makepath.h
  mtst.h
  obstacle.h
  orthogonal.h
  router.h
  scanline.h
  shape.h
  timer.h
  vertices.h
  viscluster.h
  visibility.h
  vpsc.h
)

target_compile_definitions(avoid PRIVATE LIBAVOID_NO_DLL SVG_OUTPUT LIBAVOID_EXPORTS NDEBUG)

set_target_properties(avoid PROPERTIES PUBLIC_HEADER "${HEADER_FILES}")

install(TARGETS avoid
  ARCHIVE DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
  LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
  PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_PREFIX}/include/libavoid
)
