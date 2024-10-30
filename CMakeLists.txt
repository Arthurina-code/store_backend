cmake_minimum_required(VERSION 3.25)
project(BookMarket)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# QT download path
set(CMAKE_PREFIX_PATH "/opt/homebrew/Cellar/qt/6.7.2")

# find the QT Component
find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        Sql
        WebChannel
        WebEngineCore
        WebEngineWidgets
        WebView
        REQUIRED)

# add executable files
add_executable(BookMarket
        src/main.cpp
        src/dao/DataBaseBean.cpp
        src/dao/DataBaseBean.h
        src/dao/BookDao.cpp
        src/dao/BookDao.h
        src/model/Book.h
        src/ui/BookMarket.cpp
        src/ui/BookMarket.h
        src/ui/BookMarket.ui
        src/service/BookService.cpp
        src/service/BookService.h
        src/utils/JSON.h
        src/model/Order.h
        src/model/Address.h
        src/model/OrderBook.h
        src/dao/OrderDao.cpp
        src/dao/OrderDao.h
        src/dao/AddressDao.cpp
        src/dao/AddressDao.h
        src/dao/OrderBookDao.cpp
        src/dao/OrderBookDao.h
        src/service/ProxyService.cpp
        src/service/ProxyService.h
        src/service/OrderService.cpp
        src/service/OrderService.h
)

# 链接 Qt6 库
target_link_libraries(BookMarket
        Qt::Core
        Qt::Gui
        Qt::Widgets
        Qt::Sql
        Qt::WebChannel
        Qt::WebEngineCore
        Qt::WebEngineWidgets
        Qt::WebView
)
