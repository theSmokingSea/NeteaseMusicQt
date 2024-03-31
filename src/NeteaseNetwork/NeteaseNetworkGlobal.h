//
// Created by mp5530 on 1/24/24.
//

#ifndef DEVPROJECTSHUB_NETEASENETWORKGLOBALE_H
#define DEVPROJECTSHUB_NETEASENETWORKGLOBALE_H

#include <QtGlobal>

#ifdef NeteaseNetworkLibrary
#define NeteaseNetworkExport Q_DECL_EXPORT
#else
#define NeteaseNetworkExport Q_DECL_IMPORT
#endif

#endif // DEVPROJECTSHUB_NETEASENETWORKGLOBALE_H
