My Solution to [the OOD challenge](https://github.com/AeroGeekDean/OOD-challenge-CPlusPlus)
-----------

Since the focus is on Objected Oriented Design, I tried to focus on:
- Ease of future extendibility and re-use
- Ease of understanding the OOD by others (or my future self!!!)

Less emphasis were placed on:
- Algorithm computational speed performance
- Minimizing lines of code (1-liner cleverness -> future maintenance headache)

I’m familiar with both C++ & Python for OO. I chose C++ for its strong typing and compiler checking prior to run-time. This would help minimize error (or lazy exploitation) by others looking to modify/extend the code. Plus, majority of my OOD experience was with C++.

The interface between **module2** (concept extraction from feed) and **module3** (applying format) was ambiguous and ill-defined, perhaps intentionally(?). Additionally, the given example had errors:
- The Twitter username is from position 55-66, not 48-56 (as stated)
- The URL link is from position 37-54, not 37-48 (as stated)

This highlights the error susceptibility of using character positions as a means of specifying format location. *What if two formats mistakenly overlapped?*

### Design
**The social media input feed is handled as a string that is made up of individual words. Each word is treated as a 'SegmentBase'-type class object, which will take care of the formatting. A TextManager class then manages/handles each of these words inside a STL container (`std::queue`).**

**The 'SegmentBase' is an Abstract Base Class that only contains the string 'myText' and prototypes a foramttedOutput() method that is pure-virtual. The derived children classes (PlainSegment, EntitySegment, LinkSegment, TwitterSegment, etc) then implment the formattedOutput() method to apply the correct formatting, leveraging subtyping polymorphism. Any future new formats (ex: #hashtag) could be implemented by similarily extending a new child class (HashtagSegment) with the appropriate formatting method.**

Please see UML diagram below, and the code for implementation details.

![Image of UML] (https://github.com/AeroGeekDean/OOD-challenge-CPlusPlus/blob/master/UML.png)

In real-world situation, I would want to design the interface between **module2** and **module3** with the inclusion of module#2 team and the next-higher level system architect, such that inputs from the rest of the involved teams are captured.

And here's link to the [source code](https://github.com/AeroGeekDean/OOD-challenge-CPlusPlus/tree/master/src).
