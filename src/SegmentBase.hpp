//
//  SegmentBase.hpp
//  OOD Challenge
//
//  Abstract Base Class for handing segments.
//
//  Created by Dean Liu (windsurf_dean@yahoo.com) on 8/8/16.
//  Copyright © 2016 AeroGeekDean. All rights reserved.
//

#ifndef SegmentBase_hpp
#define SegmentBase_hpp

#include <string>

class SegmentBase
{
public:
    SegmentBase(std::string text_in);
    virtual ~SegmentBase();
    
    virtual const std::string formattedOutput() = 0;

protected:
    std::string myText;
    
private:
};

#endif /* SegmentBase_hpp */
