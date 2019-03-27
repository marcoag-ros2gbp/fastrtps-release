// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*************************************************************************
 * @file deadlinepayloadSubscriber.h
 * This header file contains the declaration of the subscriber functions.
 *
 * This file was generated by the tool fastcdrgen.
 */


#ifndef _DEADLINEPAYLOAD_SUBSCRIBER_H_
#define _DEADLINEPAYLOAD_SUBSCRIBER_H_

#include <fastrtps/fastrtps_fwd.h>
#include <fastrtps/subscriber/SubscriberListener.h>
#include <fastrtps/subscriber/SampleInfo.h>
#include "deadlinepayloadPubSubTypes.h"

#include "deadlineQoS.h"
#include <asio.hpp>
#include <asio/steady_timer.hpp>
#include "mapableKey.h"




class deadlinepayloadSubscriber 
{
public:
	deadlinepayloadSubscriber(asio::steady_timer &timer,asio::io_service &io_service);
	virtual ~deadlinepayloadSubscriber();
	bool init();
	void run();
private:
	eprosima::fastrtps::Participant *mp_participant;
	eprosima::fastrtps::Subscriber *mp_subscriber;
	//io_service &io;
	class SubListener : public eprosima::fastrtps::SubscriberListener
	{
	public:
		SubListener(asio::steady_timer &timer, asio::io_service &ioserv) : n_matched(0),n_msg(0), myDeadline(timer,ioserv){};
		~SubListener(){};
		void onSubscriptionMatched(eprosima::fastrtps::Subscriber* sub, eprosima::fastrtps::rtps::MatchingInfo& info);
		void onNewDataMessage(eprosima::fastrtps::Subscriber* sub);
		eprosima::fastrtps::SampleInfo_t m_info;
		int n_matched;
		int n_msg;
		deadlineQoS myDeadline;
		
	} m_listener;
	HelloMsgPubSubType myType;
};

#endif // _deadlinepayload_SUBSCRIBER_H_