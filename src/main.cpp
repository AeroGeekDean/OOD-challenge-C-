//
//  main.cpp
//  OOD Challenge
//
//  Created by Dean Liu (windsurf_dean@yahoo.com) on 8/8/16.
//  Copyright © 2016 AeroGeekDean. All rights reserved.
//


#include <iostream>
#include <queue>
#include <string>

// The OO design requires these 2 include files.
#include "TextManager.hpp"
#include "TextFormat.hpp"

int main(int argc, const char * argv[]) {

    TextManager* module3 = new TextManager();
    
    // Example: "Obama visited Facebook headquarters: http://bit.ly/xyz @WindnWater"

    /*
      Below simulates module3's inputs...
      Note: This would / could be done in Module2 (which does concept extraction of feed).
      However, IF we don't want Module2 to have dependency on Module3 (ie: having to
      include TextManager.hpp & TextFormat.hpp. Then perhaps a Mediator Design Pattern could
      be used between Modules 2 & 3. But there will be trade-offs that would need to be considerd.
     */
    module3->AddTextSegment("Obama", SegmentType::Entity);
    module3->AddTextSegment("visited", SegmentType::Plain);
    module3->AddTextSegment("Facebook", SegmentType::Entity);
    module3->AddTextSegment("headquarters:", SegmentType::Plain);
    module3->AddTextSegment("http://bit.ly/xyz", SegmentType::Link);
    module3->AddTextSegment("@WindnWater", SegmentType::Twitter);
    
    // simulate module3 output...
    std::string output = module3->ProduceFormattedOutput();
    
    // output to screen
    std::cout <<  output << std::endl;

    // clean up
    delete module3;
    module3 = 0;

    return 0;
}
