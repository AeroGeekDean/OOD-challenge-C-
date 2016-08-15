OOD-challenge-C++
=================

My C++ solution to an Object Oriented Design interview take-home challenge.

The Problem statement
---------------------

We are building a social newsreader. There will be 3 modules.

1. The first module will crawl the Facebook and Twitter feeds.
2. The second module will extract important concepts from the feed. i.e. entities, links or twitter usernames. (In the example below, you can see how there is an entity from position 14 through 22, another entity from position 0 to 5 and so on)
3. The third module will format each post as follows:
  * Entities should be wrapped in "strong" tags
  * Links should be wrapped in "a href" tags that point to the corresponding links
  * Twitter usernames should be wrapped in "a href" tags that point to "http&#58;//twitter.com/username" and are displayed as the username

Please write the code for the third module that takes the output from the second module as an input and produces formatted text. This is a code design question, so we are looking for strong OOD principles. Think about what data structures, objects and classes that you want to use to structure/define your input. What is the best code design to prevent others from making mistakes when using your code? If somebody was to extend your code with new types like "hashtags" (that would be decorated with another HTML tag): how complex/error prone would it be?

EXAMPLE INPUT:

"Obama visited Facebook headquarters: http&#58;//bit.ly/xyz @WindnWater"

positions 14 through 22 → Entity  
positions 0 through 5 → Entity  
positions 48 through 56 → Twitter username  
positions 37 through 47 → Link  

EXAMPLE OUTPUT:

`<strong>Obama</strong> visited <strong>Facebook</strong> headquarters: <a href=”http://bit.ly/xyz”>http://bit.ly/xyz</a> @<a href=”h ttp://twitter.com/WindnWater” >WindnWater</a>`

My Solution
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