//
//  TextManager.cpp
//  OOD Challenge
//
//  Created by Dean Liu (windsurf_dean@yahoo.com) on 8/9/16.
//  Copyright © 2016 AeroGeekDean. All rights reserved.
//

#include "TextManager.hpp"
#include "TextSegment.hpp"

TextManager::TextManager()
{
}

TextManager::~TextManager()
{
    // clear out the container before leaving...
    ClearTextSegments();
}

void TextManager::ClearTextSegments()
{
    while (!text_segments.empty())
    {
        delete text_segments.front();
        text_segments.pop();
    }
}

void TextManager::AddTextSegment(std::string text_in,
                                 SegmentType type_in)
{
    if (type_in == SegmentType::Error)
    {
        // The error handling here needs to be designed at the system level!!!
        return;
    }

    // create new object, and push into container...
    TextSegment* new_seg = new TextSegment(text_in, type_in);
    text_segments.push(new_seg);
}

std::string TextManager::ProduceFormattedOutput()
{
    std::string output;
    TextSegment* next;

    while (!text_segments.empty())
    {
        next = text_segments.front();
        output += next->formattedOutput();
        text_segments.pop();
        delete next; // free up memory
        next = 0;
        
        // add a space if more segments coming...
        // ASSUMING white spaces were trimmed by upstream modules
        if (!text_segments.empty()) output += " ";
    }
    return output;
}