//
//  main.cpp
//  OOD Challenge
//
//  Created by Dean Liu (windsurf_dean@yahoo.com) on 8/29/16.
//  Copyright © 2016 AeroGeekDean. All rights reserved.
//


#include <iostream>

#include "TextManager.hpp"

#include "PlainSegment.hpp"
#include "EntitySegment.hpp"
#include "LinkSegment.hpp"
#include "TwitterSegment.hpp"

int main(int argc, const char * argv[]) {
    
    TextManager* module3 = new TextManager();
    
    // Example: "Obama visited Facebook headquarters: http://bit.ly/xyz @WindnWater"
    
    /*
     Below simulates module3's inputs...
     Note: This would / could be done in Module2 (which does concept extraction of feed).
     However, IF we don't want Module2 to have dependency on Module3 (ie: having to
     include TextManager.hpp & the header of all the various Segments. Then perhaps a
     Mediator Design Pattern could be used between Modules 2 & 3.
     
     But there will be trade-offs that would need to be considerd.
     */
    module3->AddTextSegment(new EntitySegment("Obama"));
    module3->AddTextSegment(new PlainSegment("visited"));
    module3->AddTextSegment(new EntitySegment("Facebook"));
    module3->AddTextSegment(new PlainSegment("headquarters:"));
    module3->AddTextSegment(new LinkSegment("http://bit.ly/xyz"));
    module3->AddTextSegment(new TwitterSegment("@WindWater"));

    // simulate module3 output...
    std::string output = module3->ProduceFormattedOutput();
    
    // output to screen
    std::cout <<  output << std::endl;
    
    // clean up
    delete module3;
    module3 = 0;
    
    return 0;
}
