//
//  TextManager.hpp
//  OOD Challenge
//
//  Created by Dean Liu (windsurf_dean@yahoo.com) on 8/9/16.
//  Copyright © 2016 AeroGeekDean. All rights reserved.
//

#ifndef TextManager_hpp
#define TextManager_hpp

#include <queue>
#include <string>

#include "TextFormat.hpp"

class TextSegment; // forward declaration

class TextManager
{
public:
    TextManager();
   ~TextManager();

    void ClearTextSegments();
    void AddTextSegment(std::string text_in,
                        SegmentType type_in);
    std::string ProduceFormattedOutput();
    
protected:
    
private:
    // container holding individual TextSegments...
    std::queue<TextSegment*> text_segments;
};

#endif /* TextManager_hpp */
