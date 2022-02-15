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
 * @file OwnershipStrengthPubSubMain.cpp
 * This file acts as a main entry point to the application.
 *
 * This file was generated by the tool fastcdrgen.
 */

#include "OwnershipStrengthPublisher.h"
#include "OwnershipStrengthSubscriber.h"


#include <fastrtps/Domain.h>
#include <fastrtps/log/Log.h>
#include <sstream>

using namespace eprosima;
using namespace eprosima::fastrtps;

int main(int argc, char** argv)
{
    std::cout << "Starting " << std::endl;
    int type = 1;
    if (argc > 1)
    {
        if (strcmp(argv[1], "publisher") == 0)
        {
            type = 1;
        }
        else if (strcmp(argv[1], "subscriber") == 0)
        {
            type = 2;
        }
    }
    else
    {
        std::cout << "publisher OR subscriber argument needed" << std::endl;
        return 0;
    }

    // Register the type being used


    switch(type)
    {
        case 1:
            {
                OwnershipStrengthPublisher mypub; 

                // Takes an optional second parameter with the publisher ownership strength.
                // If left out, will default to strength 10.
                if (argc > 2)
                {
                    std::stringstream ss(argv[2]);
                    int ownershipStrength;
                    ss >> ownershipStrength;
                    if (!ss.fail())
                        mypub.setOwnershipStrength(ownershipStrength);
                }
                if (mypub.init())
                {
                    mypub.run();
                }
                break;
            }
        case 2:
            {
                OwnershipStrengthSubscriber mysub;
                if (mysub.init())
                {
                    mysub.run();
                }
                break;
            }
    }

    Log::Reset();
    return 0;
}