#include <QtDeclarative/qdeclarative.h>

#include "plugin.h"
#include "qVideoSwitcher.h"
#include "qmldbusvideo.h"

void qVideoSwitchPlugin::registerTypes(const char *uri)
{
    qmlRegisterType<qVideoSwitcher>(uri, 0, 2, "VideoSwitcher");
    qmlRegisterType<QmlDBusVideo>(uri, 0, 2, "QmlDBusVideo");
}

Q_EXPORT_PLUGIN2(VideoPlugin, qVideoSwitchPlugin)

