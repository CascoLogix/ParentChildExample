/** 
 *  ParentClassC.h
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


#ifndef PARENT_CLASS_C_H
#define PARENT_CLASS_C_H

 
#include <Arduino.h>			// For Serial.print()
#include <stdint.h>
 
 
class ParentClassC {
public:
	ParentClassC();				// Constructor
	~ParentClassC();			// Destructor
	void begin();				// A public function named 'begin'
	void foo1();				// A public function named 'foo1'
	void fooZ();				// A public function named 'fooX'
	
private:
	void timeStamp();			// A private function named 'timeStamp'
};

#endif // PARENT_CLASS_C_H