//
//  TextManager.hpp
//  OOD Challenge
//
//  Created by Dean Liu (windsurf_dean@yahoo.com) on 8/29/16.
//  Copyright © 2016 AeroGeekDean. All rights reserved.
//

#ifndef TextManager_hpp
#define TextManager_hpp

#include <queue>
#include <string>

class SegmentBase; // forward declaration

class TextManager
{
public:
    TextManager();
   ~TextManager();

    void ClearTextSegments();
    void AddTextSegment(SegmentBase* new_seg);
    
    std::string ProduceFormattedOutput();
    
protected:
    
private:
    std::queue<SegmentBase*> segments;
};

#endif /* TextManager_hpp */
