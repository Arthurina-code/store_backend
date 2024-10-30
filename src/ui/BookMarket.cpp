#include <QWebChannel>
#include <QVBoxLayout>
#include <QWebEngineView>
#include "BookMarket.h"
#include "ui_BookMarket.h"
#include "../service/BookService.h"
#include "../Test.h"
#include "../service/ProxyService.h"
#include "../model/Address.h"
#include "../service/OrderService.h"

BookMarket::BookMarket(QWidget *parent) : QWidget(parent) {
    ui.setupUi(this);
    QVBoxLayout* layout=new QVBoxLayout(this);
    layout->setContentsMargins(0, 0, 0, 0);//Set Margin zero
    layout->setSpacing(0);
    this->setLayout(layout);

    QWebEngineView *webEngineView = new QWebEngineView(this);//Create WebEngineView
    QWebChannel* webChannel=new QWebChannel(this);//创建webChannel
    layout->addWidget(webEngineView);

    webChannel->registerObject("bookService",new BookService());//CustomeQWebChannel
    webChannel->registerObject("proxyService",new ProxyService());//

    webEngineView->page()->setWebChannel(webChannel);;// add WebChannel into WebEngineView
    webEngineView->setUrl(QUrl("F:/Code/WebStorm/bookmarket/dist/index.html"));

    qRegisterMetaType<BookService>("BookService");
    qRegisterMetaType<OrderService>("OrderService");
    qRegisterMetaType<Address>("Address");
}

BookMarket::~BookMarket() {

}
