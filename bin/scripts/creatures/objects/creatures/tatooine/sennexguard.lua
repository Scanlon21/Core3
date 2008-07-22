--Copyright (C) 2007 <SWGEmu>
 
--This File is part of Core3.
 
--This program is free software; you can redistribute 
--it and/or modify it under the terms of the GNU Lesser 
--General Public License as published by the Free Software
--Foundation; either version 2 of the License, 
--or (at your option) any later version.
 
--This program is distributed in the hope that it will be useful, 
--but WITHOUT ANY WARRANTY; without even the implied warranty of 
--MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
--See the GNU Lesser General Public License for
--more details.
 
--You should have received a copy of the GNU Lesser General 
--Public License along with this program; if not, write to
--the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 
--Linking Engine3 statically or dynamically with other modules 
--is making a combined work based on Engine3. 
--Thus, the terms and conditions of the GNU Lesser General Public License 
--cover the whole combination.
 
--In addition, as a special exception, the copyright holders of Engine3 
--give you permission to combine Engine3 program with free software 
--programs or libraries that are released under the GNU LGPL and with 
--code included in the standard release of Core3 under the GNU LGPL 
--license (or modified versions of such code, with unchanged license). 
--You may copy and distribute such a system following the terms of the 
--GNU LGPL for Engine3 and the licenses of the other code concerned, 
--provided that you include the source code of that other code when 
--and as the GNU LGPL requires distribution of source code.
 
--Note that people who make modified versions of Engine3 are not obligated 
--to grant this special exception for their modified versions; 
--it is their choice whether to do so. The GNU Lesser General Public License 
--gives permission to release a modified version without this exception; 
--this exception also makes it possible to release a modified version 
--which carries forward this exception.
sennexguard = Creature:new {
	objectName = "sennexguard", -- name of the lua Object
	
	name = "Sennex guard",
	objectCRC = 2453845306,
	socialGroup = "sennex",
	named = TRUE,

	level = 32,
	
	combatFlags = ATTACKABLE_FLAG + ENEMY_FLAG + AGGRESSIVE_FLAG,

	health= 8700,
	strength = 1000,
	constitution = 1000,

	action = 8700,
	quickness = 1000,
	stamina = 1000,

	mind = 8700,
	focus = 1000,
	willpower = 1000,

	height = 1,

	armor = 1,
	kinetic = 0,
	energy = 0,
	electricity = 30,
	stun = 0,
	blast = 0,
	heat = 30,
	cold = 0,
	acid = 5,
	lightSaber = 0,

	accuracy = 300,

	skills = { "sennexattack1", "sennexattack2", "sennexattack3", "sennexattack4", "sennexattack5" },
	respawnTimer = 300, 
}

Creatures:addCreature(sennexguard, 2453845306) --- Add to global creature table
