#ifndef VERIKATMANI_GLOBAL_H
#define VERIKATMANI_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(VERIKATMANI_LIBRARY)
#  define VERIKATMANI_EXPORT Q_DECL_EXPORT
#else
#  define VERIKATMANI_EXPORT Q_DECL_IMPORT
#endif

#endif // VERIKATMANI_GLOBAL_H
