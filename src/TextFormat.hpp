//
//  TextFormat.hpp
//  OOD_challenge
//
//  Created by Dean Liu (windsurf_dean@yahoo.com) on 8/8/16.
//  Copyright © 2016 AeroGeekDean. All rights reserved.
//

#ifndef TextFormat_h
#define TextFormat_h

// enum for segment types
enum class SegmentType
{
    Error   = 0,
    Plain   = 1,
    Entity  = 2,
    Link    = 3,
    Twitter = 4
    // add new formats here...
};


#endif /* TextFormat_h */
