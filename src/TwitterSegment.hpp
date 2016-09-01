//
//  TwitterSegment.hpp
//  OOD
//
//  Created by Dean Liu on 8/29/16.
//  Copyright © 2016 AeroGeekDean. All rights reserved.
//

#ifndef TwitterSegment_hpp
#define TwitterSegment_hpp

#include "SegmentBase.hpp"
#include <stdio.h>


class TwitterSegment: public SegmentBase
{
public:
    TwitterSegment(std::string text_in);
    virtual ~TwitterSegment();
    
    virtual const std::string formattedOutput();

protected:
    
private:

};


#endif /* TwitterSegment_hpp */
