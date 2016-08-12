//
//  TextSegment.cpp
//  OOD Challenge
//
//  Created by Dean Liu (windsurf_dean@yahoo.com) on 8/8/16.
//  Copyright © 2016 AeroGeekDean. All rights reserved.
//

#include "TextSegment.hpp"
#include <stdio.h>

TextSegment::TextSegment(std::string text_in,
                         SegmentType type_in)
{
    myText = text_in;
    myType = type_in;
}

TextSegment::~TextSegment()
{
}

std::string TextSegment::formattedOutput()
{
    /*--------------------------------------------------------------------------------
       This is a quick simple design to handle different types. If the variation gets
       to be more elaborate or complicated, then a possible OO design option might be
       to consider Class Polymorphism by extending children Classes to handle the
       different formatting types.
    --------------------------------------------------------------------------------*/
    switch (myType)
    {
        case SegmentType::Plain:
            formatPlain();
            break;
        case SegmentType::Entity:
            formatEntity();
            break;
        case SegmentType::Link:
            formatLink();
            break;
        case SegmentType::Twitter:
            formatTwitter();
            break;
        // add new formats here...
        default:
            break;
    }
    return myOutput;
}


// -----------------------------------------------------------
// For future new formats, add new formatXXX() method below...
// -----------------------------------------------------------

void TextSegment::formatPlain()
{
    // plain text... just format as is
    myOutput = myText;
}

void TextSegment::formatEntity()
{
    // entity... wrap with 'strong' tags
    myOutput = "<strong>" + myText + "</strong>";
}

void TextSegment::formatLink()
{
    // url link... wrap with 'a href' tags
    myOutput = "<a href=\"" + myText + "\">" + myText + "</a>";
}

void TextSegment::formatTwitter()
{
    // Twitter username... wrap with 'a href' to twitter url
    std::size_t pos = myText.find("@") +1;
    myOutput = "@<a href=\"http://twitter.com/" + myText.substr(pos) + "\">"
             + myText.substr(pos) + "</a>";
}