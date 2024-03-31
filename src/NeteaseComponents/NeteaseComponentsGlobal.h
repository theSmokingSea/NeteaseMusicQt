//
// Created by mp5530 on 1/24/24.
//

#ifndef DEVPROJECTSHUB_NETEASECOMPONENTSGLOBAL_H
#define DEVPROJECTSHUB_NETEASECOMPONENTSGLOBAL_H
#include <QtGlobal>

#ifdef NeteaseComponentsLibrary
#define NeteaseComponentsExport Q_DECL_EXPORT
#else
#define NeteaseComponentsExport Q_DECL_IMPORT
#endif

#endif // DEVPROJECTSHUB_NETEASECOMPONENTSGLOBAL_H
