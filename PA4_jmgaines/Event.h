/*
 * Event.h
 *
 *  Created on: Feb 11, 2017
 *      Author: shawn
 */

#ifndef EVENT_H_
#define EVENT_H_

namespace std {

class Event {
public:
	Event();
	virtual void action();
	virtual ~Event();
};

} /* namespace std */

#endif /* EVENT_H_ */
