#include <QApplication>
#include <QDir>
#include "ui/BookMarket.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // 设置字典路径为项目目录下的 "dictionaries" 文件夹
    QString dictionaryPath = QCoreApplication::applicationDirPath() + "/dictionaries";
    QDir().mkpath(dictionaryPath);  // ensure the path exists
    qputenv("DIR_APP_DICTIONARIES", dictionaryPath.toUtf8());

    BookMarket bookMarket;
    bookMarket.show();
    return QApplication::exec();
}


