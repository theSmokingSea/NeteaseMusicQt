//
// Created by mp5530 on 1/24/24.
//

#ifndef DEVPROJECTSHUB_NETEASEGUIGLOBAL_H
#define DEVPROJECTSHUB_NETEASEGUIGLOBAL_H

#include <QtGlobal>

#ifdef NeteaseGuiLibrary
#define NeteaseGuiExport Q_DECL_EXPORT
#else
#define NeteaseGuiExport Q_DECL_IMPORT
#endif

#endif // DEVPROJECTSHUB_NETEASEGUIGLOBAL_H
