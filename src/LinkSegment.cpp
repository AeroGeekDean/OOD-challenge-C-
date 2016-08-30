//
//  LinkSegment.cpp
//  OOD
//
//  Created by Dean Liu on 8/29/16.
//  Copyright © 2016 AeroGeekDean. All rights reserved.
//

#include "LinkSegment.hpp"

LinkSegment::LinkSegment(std::string text_in):
SegmentBase(text_in)
{
}

LinkSegment::~LinkSegment()
{
}

std::string LinkSegment::formattedOutput()
{
    // url link... wrap with 'a href' tags
    return "<a href=\"" + myText + "\">" + myText + "</a>";
}
