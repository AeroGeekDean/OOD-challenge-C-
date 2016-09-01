//
//  PlainSegment.hpp
//  OOD
//
//  Created by Dean Liu on 8/29/16.
//  Copyright © 2016 AeroGeekDean. All rights reserved.
//

#ifndef PlainSegment_hpp
#define PlainSegment_hpp

#include "SegmentBase.hpp"
#include <stdio.h>


class PlainSegment: public SegmentBase
{
public:
    PlainSegment(std::string text_in);
    virtual ~PlainSegment();
    
    virtual const std::string formattedOutput();

protected:
    
private:

};


#endif /* PlainSegment_hpp */
