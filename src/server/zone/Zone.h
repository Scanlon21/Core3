/*
 *	server/zone/Zone.h generated by engine3 IDL compiler 0.60
 */

#ifndef ZONE_H_
#define ZONE_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {

class ZoneProcessServerImplementation;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace managers {
namespace structure {

class StructureManager;

} // namespace structure
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::structure;

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {
namespace managers {
namespace planet {

class PlanetManager;

} // namespace planet
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::planet;

#include "server/zone/managers/planet/HeightMap.h"

#include "server/zone/managers/object/ObjectMap.h"

#include "engine/util/QuadTree.h"

#include "engine/util/QuadTreeEntry.h"

#include "system/lang/Time.h"

#include "engine/core/TaskManager.h"

#include "engine/core/ManagedObject.h"

#include "system/lang/System.h"

namespace server {
namespace zone {

class Zone : public ManagedObject {
public:
	Zone(ZoneServer* zserv, ZoneProcessServerImplementation* processor, int zoneid);

	void initializeTransientMembers();

	void insert(QuadTreeEntry* entry);

	void remove(QuadTreeEntry* entry);

	void update(QuadTreeEntry* entry);

	void inRange(QuadTreeEntry* entry, float range);

	void startManagers();

	void stopManagers();

	float getHeight(float x, float y);

	void addSceneObject(SceneObject* object);

	void dropSceneObject(unsigned long long objectID);

	int getZoneID();

	PlanetManager* getPlanetManager();

	ZoneServer* getZoneServer();

	unsigned long long getGalacticTime();

	unsigned int getWeatherID();

	void setWeatherID(unsigned int value);

	void changeWeatherID(int value);

	bool isWeatherEnabled();

	void setWeatherEnabled(bool value);

	void setWeatherWindX(float value);

	void setWeatherWindY(float value);

	float getWeatherWindX();

	float getWeatherWindY();

protected:
	Zone(DummyConstructorParameter* param);

	virtual ~Zone();

	friend class ZoneHelper;
};

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZoneImplementation : public ManagedObjectImplementation, public QuadTree {
	int zoneID;

	ZoneProcessServerImplementation* processor;

	ObjectMap objectMap;

	ManagedReference<PlanetManager* > planetManager;

	ManagedReference<ZoneServer* > server;

	Time galacticTime;

	HeightMap* heightMap;

	float weatherWindX;

	float weatherWindY;

	unsigned int weatherID;

	bool weatherEnabled;

public:
	ZoneImplementation(ZoneServer* zserv, ZoneProcessServerImplementation* processor, int zoneid);

	ZoneImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void insert(QuadTreeEntry* entry);

	void remove(QuadTreeEntry* entry);

	void update(QuadTreeEntry* entry);

	void inRange(QuadTreeEntry* entry, float range);

	void startManagers();

	void stopManagers();

	float getHeight(float x, float y);

	void addSceneObject(SceneObject* object);

	void dropSceneObject(unsigned long long objectID);

	int getZoneID();

	PlanetManager* getPlanetManager();

	ZoneServer* getZoneServer();

	unsigned long long getGalacticTime();

	unsigned int getWeatherID();

	void setWeatherID(unsigned int value);

	void changeWeatherID(int value);

	bool isWeatherEnabled();

	void setWeatherEnabled(bool value);

	void setWeatherWindX(float value);

	void setWeatherWindY(float value);

	float getWeatherWindX();

	float getWeatherWindY();

	Zone* _this;

	operator const Zone*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~ZoneImplementation();

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

	friend class Zone;
};

class ZoneAdapter : public ManagedObjectAdapter {
public:
	ZoneAdapter(ZoneImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void startManagers();

	void stopManagers();

	float getHeight(float x, float y);

	void addSceneObject(SceneObject* object);

	void dropSceneObject(unsigned long long objectID);

	int getZoneID();

	PlanetManager* getPlanetManager();

	ZoneServer* getZoneServer();

	unsigned long long getGalacticTime();

	unsigned int getWeatherID();

	void setWeatherID(unsigned int value);

	void changeWeatherID(int value);

	bool isWeatherEnabled();

	void setWeatherEnabled(bool value);

	void setWeatherWindX(float value);

	void setWeatherWindY(float value);

	float getWeatherWindX();

	float getWeatherWindY();

};

class ZoneHelper : public DistributedObjectClassHelper, public Singleton<ZoneHelper> {
	static ZoneHelper* staticInitializer;

public:
	ZoneHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ZoneHelper>;
};

} // namespace zone
} // namespace server

using namespace server::zone;

#endif /*ZONE_H_*/
