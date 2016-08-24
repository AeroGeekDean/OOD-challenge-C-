My Solution to [the OOD challenge](https://github.com/AeroGeekDean/OOD-challenge-CPlusPlus)
-----------

Since the focus is on Objected Oriented Design principles, my design aimed at:
- Ease of future extendibility and re-use
- Ease of understanding the OOD by fellow teammates (or my future self!!!)
- Minimizing possibility of errors in specifying the character locations of format tags

Less emphasis were placed on:
- Algorithm computational speed performance (if scaling is a requirement, then need to be addressed early on)
- Minimizing lines of code (cleverness in trying to do too much in 1 line of code, usually translates to future code maintenance headache)

I’m familiar with both C++ & Python for OO. I chose C++ for its strong typing and compiler checking prior to run-time. This would help minimize error (or lazy exploitation) by others looking to modify/extend the code. Plus, majority of my OOD experience was with C++.

The interface between **module2** (concept extraction from feed) and **module3** (applying format) was ambiguous and ill-defined, perhaps intentionally(?). Additionally, the given example had errors:
- The Twitter username is from position 55-66, not 48-56 (as stated)
- The URL link is from position 37-54, not 37-48 (as stated)

This highlights the error susceptibility of using character positions as a means of specifying format location. *What if two formats mistakenly overlapped?*

**Thus my design handles the social media input feed as a string that is made up of individual words, and treats each word as a TextSegment class object, which specifies the formatting. A TextManager class then handles each of these words via a STL container (`std::queue`).** Please UML diagram below, and the code for implementation details.

![Image of UML] (https://github.com/AeroGeekDean/OOD-challenge-CPlusPlus/blob/master/UML.png)

In real-world situation, I would want to design this interface with the inclusion of module#2 team and the next-higher level system architect. Such that the functional allocation & how to specify the labeling of each feed concepts, could encompass inputs from the rest of the teams.

And here's link to the [source code](https://github.com/AeroGeekDean/OOD-challenge-CPlusPlus/tree/master/src).
