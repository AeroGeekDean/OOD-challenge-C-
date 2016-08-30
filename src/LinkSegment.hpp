//
//  LinkSegment.hpp
//  OOD
//
//  Created by Dean Liu on 8/29/16.
//  Copyright © 2016 AeroGeekDean. All rights reserved.
//

#ifndef LinkSegment_hpp
#define LinkSegment_hpp

#include "SegmentBase.hpp"
#include <stdio.h>


class LinkSegment: public SegmentBase
{
public:
    LinkSegment(std::string text_in);
    virtual ~LinkSegment();
    
    virtual std::string formattedOutput();

protected:
    
private:

};


#endif /* LinkSegment_hpp */
