//
//  EntitySegment.hpp
//  OOD
//
//  Created by Dean Liu on 8/29/16.
//  Copyright © 2016 AeroGeekDean. All rights reserved.
//

#ifndef EntitySegment_hpp
#define EntitySegment_hpp

#include "SegmentBase.hpp"
#include <stdio.h>


class EntitySegment: public SegmentBase
{
public:
    EntitySegment(std::string text_in);
    virtual ~EntitySegment();
    
    virtual const std::string formattedOutput();

protected:
    
private:

};


#endif /* EntitySegment_hpp */
