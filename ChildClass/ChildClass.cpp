/** 
 *  ChildClass.cpp
 *  
 *  This is an example child class that will help illustrate: 1) how to create 
 *  the basic skeletal structure of a class that can be used for writing code 
 *  libraries for the Arduino and 2) how to inherit methods, variables, and/or
 *  other features from other parent classes to build a sort of 'wrapper' and 
 *  encapsulating all the functionality into one library file.
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


// Constructor
ChildClass::ChildClass()
{
	this->timeStamp();
	Serial.println("ChildClass ctor");
}


// Destructor
ChildClass::~ChildClass()
{
	Serial.println("ChildClass dtor");
	this->timeStamp();
}


// begin
void ChildClass::begin()
{
	Serial.println("ChildClass begin");
	ParentClassA::begin();
	ParentClassB::begin();
	ParentClassC::begin();
}


// foo1
void ChildClass::foo1()
{
	Serial.println("ChildClass foo1");
	ParentClassA::foo1();
}


// foo2
void ChildClass::foo2()
{
	Serial.println("ChildClass foo2");
	ParentClassB::foo1();
	ParentClassC::foo1();
}


// timeStamp
void ChildClass::timeStamp()
{
	Serial.print("ChildClass timeStamp: ");
	Serial.println(micros());
}
