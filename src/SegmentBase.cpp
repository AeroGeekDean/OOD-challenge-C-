//
//  SegmentBase.cpp
//  OOD Challenge
//
//  Abstract Base Class for handing segments.
//
//  Created by Dean Liu (windsurf_dean@yahoo.com) on 8/8/16.
//  Copyright © 2016 AeroGeekDean. All rights reserved.
//

#include "SegmentBase.hpp"
#include <stdio.h>

SegmentBase::SegmentBase(std::string text_in)
{
    myText = text_in;
}

SegmentBase::~SegmentBase()
{
}
