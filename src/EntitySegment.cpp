//
//  EntitySegment.cpp
//  OOD
//
//  Created by Dean Liu on 8/29/16.
//  Copyright © 2016 AeroGeekDean. All rights reserved.
//

#include "EntitySegment.hpp"

EntitySegment::EntitySegment(std::string text_in):
SegmentBase(text_in)
{
}

EntitySegment::~EntitySegment()
{
}

const std::string EntitySegment::formattedOutput()
{
    // entity... wrap with 'strong' tags
    return "<strong>" + myText + "</strong>";
}
