/** 
 *  ChildClass.h
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


#ifndef CHILD_CLASS_H
#define CHILD_CLASS_H

 
#include <Arduino.h>			// For Serial.print()
#include <stdint.h>
#include <ParentClassA.h>
#include <ParentClassB.h>
#include <ParentClassC.h>
 
 
class ChildClass : public ParentClassA,
				   public ParentClassB,
				   public ParentClassC {
public:
	ChildClass();				// Constructor
	~ChildClass();				// Destructor
	void begin();				// A public function named 'begin'
	void foo1();				// A public function named 'foo1'
	void foo2();				// A public function named 'foo2'
	using ParentClassA::fooX;	// A public function in ParentClassA called 'fooX' exposed directly to ChildClass
	using ParentClassB::fooY;	// A public function in ParentClassB called 'fooY' exposed directly to ChildClass
	using ParentClassC::fooZ;	// A public function in ParentClassC called 'fooZ' exposed directly to ChildClass
	
private:
	void timeStamp();			// A private function named 'timeStamp'
};

#endif // CHILD_CLASS_H