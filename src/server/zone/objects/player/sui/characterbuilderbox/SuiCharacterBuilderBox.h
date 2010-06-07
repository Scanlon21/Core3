/*
 *	server/zone/objects/player/sui/characterbuilderbox/SuiCharacterBuilderBox.h generated by engine3 IDL compiler 0.60
 */

#ifndef SUICHARACTERBUILDERBOX_H_
#define SUICHARACTERBUILDERBOX_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerCreature;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

#include "server/zone/objects/tangible/terminal/characterbuilder/CharacterBuilderMenuNode.h"

#include "server/zone/objects/player/sui/listbox/SuiListBox.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {
namespace characterbuilderbox {

class SuiCharacterBuilderBox : public SuiListBox {
public:
	SuiCharacterBuilderBox(PlayerCreature* player, CharacterBuilderMenuNode* root);

	BaseMessage* generateMessage();

	CharacterBuilderMenuNode* getCurrentNode();

	void setCurrentNode(CharacterBuilderMenuNode* node);

	bool isCharacterBuilderBox();

protected:
	SuiCharacterBuilderBox(DummyConstructorParameter* param);

	virtual ~SuiCharacterBuilderBox();

	friend class SuiCharacterBuilderBoxHelper;
};

} // namespace characterbuilderbox
} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui::characterbuilderbox;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sui {
namespace characterbuilderbox {

class SuiCharacterBuilderBoxImplementation : public SuiListBoxImplementation {
protected:
	CharacterBuilderMenuNode* rootNode;

	CharacterBuilderMenuNode* currentNode;

public:
	SuiCharacterBuilderBoxImplementation(PlayerCreature* player, CharacterBuilderMenuNode* root);

	SuiCharacterBuilderBoxImplementation(DummyConstructorParameter* param);

	BaseMessage* generateMessage();

	CharacterBuilderMenuNode* getCurrentNode();

	void setCurrentNode(CharacterBuilderMenuNode* node);

	bool isCharacterBuilderBox();

	SuiCharacterBuilderBox* _this;

	operator const SuiCharacterBuilderBox*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~SuiCharacterBuilderBoxImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();

	friend class SuiCharacterBuilderBox;
};

class SuiCharacterBuilderBoxAdapter : public SuiListBoxAdapter {
public:
	SuiCharacterBuilderBoxAdapter(SuiCharacterBuilderBoxImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	BaseMessage* generateMessage();

	bool isCharacterBuilderBox();

};

class SuiCharacterBuilderBoxHelper : public DistributedObjectClassHelper, public Singleton<SuiCharacterBuilderBoxHelper> {
	static SuiCharacterBuilderBoxHelper* staticInitializer;

public:
	SuiCharacterBuilderBoxHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<SuiCharacterBuilderBoxHelper>;
};

} // namespace characterbuilderbox
} // namespace sui
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sui::characterbuilderbox;

#endif /*SUICHARACTERBUILDERBOX_H_*/
