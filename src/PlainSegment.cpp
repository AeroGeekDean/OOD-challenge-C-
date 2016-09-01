//
//  PlainSegment.cpp
//  OOD
//
//  Created by Dean Liu on 8/29/16.
//  Copyright © 2016 AeroGeekDean. All rights reserved.
//

#include "PlainSegment.hpp"

PlainSegment::PlainSegment(std::string text_in):
SegmentBase(text_in)
{
}

PlainSegment::~PlainSegment()
{
}

const std::string PlainSegment::formattedOutput()
{
    // plain text... as is, no formatting
    return myText;
}
