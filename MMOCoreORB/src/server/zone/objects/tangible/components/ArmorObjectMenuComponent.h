/*
 * ArmorColorMenuComponent.h
 *
 *  Created on: 2/4/2013
 *      Author: bluree
 *		Credits: TA & Valk
 */

#ifndef ARMOROBJECTMENUCOMPONENT_H_
#define ARMOROBJECTMENUCOMPONENT_H_
 
#include "WearableObjectMenuComponent.h"

class ArmorObjectMenuComponent : public WearableObjectMenuComponent {
public:

	/**
	 * Fills the radial options, needs to be overriden
	 * @pre { this object is locked }
	 * @post { this object is locked, menuResponse is complete}
	 * @param menuResponse ObjectMenuResponse that will be sent to the client
	 */
	virtual void fillObjectMenuResponse(SceneObject* sceneObject, ObjectMenuResponse* menuResponse, CreatureObject* player);

	/**
	 * Handles the radial selection sent by the client, must be overriden by inherited objects
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @param player PlayerCreature that selected the option
	 * @param selectedID selected menu id
	 * @returns 0 if successfull
	 */
	virtual int handleObjectMenuSelect(SceneObject* sceneObject, CreatureObject* player, byte selectedID);

};

#endif /* ARMOROBJECTMENUCOMPONENT_H_ */

