/** 
 *  ParentClassA.cpp
 *  
 *  This is an example parent class that will help illustrate how to create 
 *  the basic skeletal structure of a class that can be used for writing code 
 *  libraries for the Arduino.
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


#include <ParentClassA.h>	


// Constructor
ParentClassA::ParentClassA()
{
	this->timeStamp();
	Serial.println("ParentClassA ctor");
}


// Destructor
ParentClassA::~ParentClassA()
{
	Serial.println("ParentClassA dtor");
	this->timeStamp();
}


// begin
void ParentClassA::begin()
{
	Serial.println("ParentClassA begin");
}


// foo1
void ParentClassA::foo1()
{
	Serial.println("ParentClassA foo1");
}


// foo2
void ParentClassA::fooX()
{
	Serial.println("ParentClassA foo2");
}


// timeStamp
void ParentClassA::timeStamp()
{
	Serial.print("ParentClassA timeStamp: ");
	Serial.println(micros());
}
