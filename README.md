ParentChildExample
==================

Example of how to create an Arduino child class library from multiple parent class libraries

Put the individual class libraries inside the Arduino libraries folder (i.e. don't put the 
'ParentChildExample' directory inside the Arduino libraries folder).  Then open the Demo.ino
sketch from within the ChildClass library.  Upload the sketch, open the serial monitor and
watch the class constructors, methods and destructors get called via print line messages.
