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

/*!
 * @file FlowControlExample.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "FlowControlExample.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

FlowControlExample::FlowControlExample()
{
    // m_message com.eprosima.idl.parser.typecode.ArrayTypeCode@5b87ed94
    memset(&m_message, 0, (600000) * 1);
    // m_wasFast com.eprosima.idl.parser.typecode.PrimitiveTypeCode@5bc79255
    m_wasFast = 0;

}

FlowControlExample::~FlowControlExample()
{


}

FlowControlExample::FlowControlExample(
        const FlowControlExample& x)
{
    m_message = x.m_message;
    m_wasFast = x.m_wasFast;
}

FlowControlExample::FlowControlExample(
        FlowControlExample&& x)
{
    m_message = std::move(x.m_message);
    m_wasFast = x.m_wasFast;
}

FlowControlExample& FlowControlExample::operator =(
        const FlowControlExample& x)
{

    m_message = x.m_message;
    m_wasFast = x.m_wasFast;

    return *this;
}

FlowControlExample& FlowControlExample::operator =(
        FlowControlExample&& x)
{

    m_message = std::move(x.m_message);
    m_wasFast = x.m_wasFast;

    return *this;
}

bool FlowControlExample::operator ==(
        const FlowControlExample& x) const
{

    return (m_message == x.m_message && m_wasFast == x.m_wasFast);
}

bool FlowControlExample::operator !=(
        const FlowControlExample& x) const
{
    return !(*this == x);
}

size_t FlowControlExample::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += ((600000) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);


    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

size_t FlowControlExample::getCdrSerializedSize(
        const FlowControlExample& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += ((600000) * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);

    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);



    return current_alignment - initial_alignment;
}

void FlowControlExample::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_message;

    scdr << m_wasFast;

}

void FlowControlExample::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_message;

    dcdr >> m_wasFast;
}

/*!
 * @brief This function copies the value in member message
 * @param _message New value to be copied in member message
 */
void FlowControlExample::message(
        const std::array<char, 600000>& _message)
{
    m_message = _message;
}

/*!
 * @brief This function moves the value in member message
 * @param _message New value to be moved in member message
 */
void FlowControlExample::message(
        std::array<char, 600000>&& _message)
{
    m_message = std::move(_message);
}

/*!
 * @brief This function returns a constant reference to member message
 * @return Constant reference to member message
 */
const std::array<char, 600000>& FlowControlExample::message() const
{
    return m_message;
}

/*!
 * @brief This function returns a reference to member message
 * @return Reference to member message
 */
std::array<char, 600000>& FlowControlExample::message()
{
    return m_message;
}
/*!
 * @brief This function sets a value in member wasFast
 * @param _wasFast New value for member wasFast
 */
void FlowControlExample::wasFast(
        char _wasFast)
{
    m_wasFast = _wasFast;
}

/*!
 * @brief This function returns the value of member wasFast
 * @return Value of member wasFast
 */
char FlowControlExample::wasFast() const
{
    return m_wasFast;
}

/*!
 * @brief This function returns a reference to member wasFast
 * @return Reference to member wasFast
 */
char& FlowControlExample::wasFast()
{
    return m_wasFast;
}


size_t FlowControlExample::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;





    return current_align;
}

bool FlowControlExample::isKeyDefined()
{
    return false;
}

void FlowControlExample::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
      
}
