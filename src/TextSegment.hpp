//
//  TextSegment.hpp
//  OOD Challenge
//
//  Created by Dean Liu (windsurf_dean@yahoo.com) on 8/8/16.
//  Copyright © 2016 AeroGeekDean. All rights reserved.
//

#ifndef TEXT_SEGMENT_HPP
#define TEXT_SEGMENT_HPP

#include <string>
#include "TextFormat.hpp"

class TextSegment
{
public:
    TextSegment(std::string text_in,
                SegmentType type_in);
    ~TextSegment();
    
    std::string formattedOutput();

protected:
    
private:
    void formatPlain();
    void formatEntity();
    void formatLink();
    void formatTwitter();
    
    std::string myText = "";
    SegmentType myType = SegmentType::Plain;
    std::string myOutput = "";
};

#endif /* TEXT_SEGMENT_HPP */
