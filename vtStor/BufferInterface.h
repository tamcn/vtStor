/*
<License>
Copyright 2015 Virtium Technology

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http ://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
</License>
*/
#ifndef __vtStorBufferInterface_h__
#define __vtStorBufferInterface_h__
#pragma once

#include <memory>

#include "BasicTypes.h"
#include "vtStorPlatformDefines.h"

namespace vtStor
{

class VTSTOR_API cBufferInterface
{
public:
    cBufferInterface();
    virtual ~cBufferInterface();

public:
    //! The use of normal pointer is intentional
    virtual U8* ToDataBuffer() = 0;
};

}

#endif