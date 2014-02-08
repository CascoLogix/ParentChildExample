/** 
 *  Demo.ino
 *  
 *  This is demo sketch that shows the inner workings of cpp class 
 *  instantiation, constructors, methods, inheritance and destructors.
 *
 *  Copyright (C) 2014  CascoLogix (http://cascologix.com)
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#include <ChildClass.h>
#include <ParentClassA.h>
#include <ParentClassB.h>
#include <ParentClassC.h>


void setup()
{
  Serial.begin(9600);        // Initialize the serial interface at 9600 baud
  Serial.println("Start");   // Print "Start" to the console
  	
  ChildClass myClass;        // Instantiate object (Note: this is here so we can
                             //   see all the serial prints of what happens, as
                             //   well as see the class' destructor when the
                             //   setup function returns.
  	
  myClass.begin();           // Call the 'begin()' method of myClass, which calls
                             //   the 'begin()' methods of its parent
                             //   classes, as seen in ChildClass.cpp
  							
  myClass.foo1();            // Call the 'foo1()' method of myClass, which calls 
                             //   the 'foo1()' method of ParentClassA
  							
  myClass.foo2();            // Call the 'foo2()' method of myClass, which calls 
                             //   the 'foo2()' method of ParentClassB and the
							 //   the 'foo2()' method of ParentClassC
  							
  myClass.fooX();            // Call the 'fooX()' method of ParentClassA
  
  myClass.fooY();            // Call the 'fooY()' method of ParentClassB
  
  myClass.fooZ();            // Call the 'fooZ()' method of ParentClassC
}


void loop()
{
  Serial.println("Done");    // Print "Done" to the console
  for(;;);                   // Loop here forever
}