// widget_events.cpp

#include "widget_events.hpp"

#include <QEvent>
#include <QMetaEnum>

#include <iostream>

bool WidgetEvent::event(QEvent *event)
{
	const QMetaEnum eventTypes = QMetaEnum::fromType<QEvent::Type>();
	const char *eventName = eventTypes.valueToKey(static_cast<int>(event->type()));

	std::cout << "Event: ";
	if (eventName != nullptr) {
		std::cout << eventName;
	} else {
		std::cout << static_cast<int>(event->type());
	}
	std::cout << std::endl;

	return true;
}

