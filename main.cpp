#include "screenshottool.h"
#include <QApplication>
#include <QGuiApplication>
#include <QTranslator>

/*
 * Author:qiuzhiqian
 * Email:xia_mengliang@163.com
 * Github:https://github.com/qiuzhiqian
 * Date:2017.07.23
 **/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    a.setQuitOnLastWindowClosed(false);
    ScreenShotTool w;
    w.hide();

    return a.exec();
}
