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
 * @file TypeObjectHashId.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen and modified manually.
 */

#include <fastdds/rtps/common/CdrSerialization.hpp>
#include <fastrtps/types/TypeObjectHashId.h>

#include "TypeObjectHashIdCdrAux.ipp"

using namespace eprosima::fastcdr::exception;

#include <utility>

namespace eprosima {
namespace fastrtps {

using namespace rtps;

namespace types {

TypeObjectHashId::TypeObjectHashId()
{
    m__d = EK_COMPLETE;
}

TypeObjectHashId::~TypeObjectHashId()
{
}

TypeObjectHashId::TypeObjectHashId(
        const TypeObjectHashId& x)
{
    m__d = x.m__d;

    switch (m__d)
    {
        case EK_COMPLETE:
        case EK_MINIMAL:
            memcpy(m_hash, x.m_hash, 14);
            break;
        default:
            break;
    }
}

TypeObjectHashId::TypeObjectHashId(
        TypeObjectHashId&& x)
{
    m__d = x.m__d;

    switch (m__d)
    {
        case EK_COMPLETE:
        case EK_MINIMAL:
            memcpy(m_hash, x.m_hash, 14);
            break;
        default:
            break;
    }
}

TypeObjectHashId& TypeObjectHashId::operator =(
        const TypeObjectHashId& x)
{
    m__d = x.m__d;

    switch (m__d)
    {
        case EK_COMPLETE:
        case EK_MINIMAL:
            memcpy(m_hash, x.m_hash, 14);
            break;
        default:
            break;
    }

    return *this;
}

TypeObjectHashId& TypeObjectHashId::operator =(
        TypeObjectHashId&& x)
{
    m__d = x.m__d;

    switch (m__d)
    {
        case EK_COMPLETE:
        case EK_MINIMAL:
            memcpy(m_hash, x.m_hash, 14);
            break;
        default:
            break;
    }

    return *this;
}

void TypeObjectHashId::_d(
        uint8_t __d)                   // Special case to ease... sets the current active member
{
    bool b = false;
    m__d = __d;

    switch (m__d)
    {
        case EK_COMPLETE:
        case EK_MINIMAL:
            switch (__d)
            {
                case EK_COMPLETE:
                case EK_MINIMAL:
                    b = true;
                    break;
                default:
                    break;
            }
            break;
    }

    if (!b)
    {
        throw BadParamException("Discriminator doesn't correspond with the selected union member");
    }

    m__d = __d;
}

uint8_t TypeObjectHashId::_d() const
{
    return m__d;
}

uint8_t& TypeObjectHashId::_d()
{
    return m__d;
}

void TypeObjectHashId::hash(
        const EquivalenceHash& _hash)
{
    memcpy(m_hash, _hash, 14);
    m__d = EK_COMPLETE;
}

void TypeObjectHashId::hash(
        EquivalenceHash&& _hash)
{
    memcpy(m_hash, _hash, 14);
    m__d = EK_COMPLETE;
}

const EquivalenceHash& TypeObjectHashId::hash() const
{
    bool b = false;

    switch (m__d)
    {
        case EK_COMPLETE:
        case EK_MINIMAL:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }


    return m_hash;
}

EquivalenceHash& TypeObjectHashId::hash()
{
    bool b = false;

    switch (m__d)
    {
        case EK_COMPLETE:
        case EK_MINIMAL:
            b = true;
            break;
        default:
            break;
    }
    if (!b)
    {
        throw BadParamException("This member is not been selected");
    }


    return m_hash;
}

void TypeObjectHashId::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{
    eprosima::fastcdr::serialize(scdr, *this);
}

void TypeObjectHashId::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{
    eprosima::fastcdr::deserialize(dcdr, *this);
}

} // namespace types
} // namespace fastrtps
} // namespace eprosima
