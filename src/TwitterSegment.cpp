//
//  TwitterSegment.cpp
//  OOD
//
//  Created by Dean Liu on 8/29/16.
//  Copyright © 2016 AeroGeekDean. All rights reserved.
//

#include "TwitterSegment.hpp"

TwitterSegment::TwitterSegment(std::string text_in):
SegmentBase(text_in)
{
}

TwitterSegment::~TwitterSegment()
{
}

std::string TwitterSegment::formattedOutput()
{
    // Twitter username... wrap with 'a href' to twitter url
    std::size_t pos = myText.find("@") +1;
    return "@<a href=\"http://twitter.com/" + myText.substr(pos) + "\">"
           + myText.substr(pos) + "</a>";
}
