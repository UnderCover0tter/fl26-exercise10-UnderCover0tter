// main.cpp

#include <QApplication>

#include "widget_events.hpp"

int main(int argc, char *argv[])
{
      QApplication application(argc, argv);
      
      WidgetEvent widget;
      widget.show();

      return application.exec();
}
