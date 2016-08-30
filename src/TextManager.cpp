//
//  TextManager.cpp
//  OOD Challenge
//
//  Created by Dean Liu (windsurf_dean@yahoo.com) on 8/29/16.
//  Copyright © 2016 AeroGeekDean. All rights reserved.
//

#include "TextManager.hpp"
#include "SegmentBase.hpp"

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
    while (!segments.empty())
    {
        delete segments.front();
        segments.pop();
    }
}

void TextManager::AddTextSegment(SegmentBase* new_seg)
{
    segments.push(new_seg);
}

std::string TextManager::ProduceFormattedOutput()
{
    std::string output;
    SegmentBase* next;

    while (!segments.empty())
    {
        next = segments.front();
        output += next->formattedOutput();
        segments.pop();
        delete next; // free up memory
        next = 0;
        
        // add a space if more segments coming...
        // ASSUMING white spaces were trimmed by upstream modules
        if (!segments.empty()) output += " ";
    }
    return output;
}