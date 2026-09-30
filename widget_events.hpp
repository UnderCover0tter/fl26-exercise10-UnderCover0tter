// widget_events.hpp
#ifndef WIDGET_EVENTS_H
#define WIDGET_EVENTS_H

#include <QWidget>

class QEvent;

class WidgetEvent : public QWidget
{
public:
	using QWidget::QWidget;

protected:
	bool event(QEvent *event) override;
};

#endif
