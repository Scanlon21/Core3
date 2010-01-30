/*
 *	server/zone/Zone.cpp generated by engine3 IDL compiler 0.60
 */

#include "Zone.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/managers/structure/StructureManager.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/managers/planet/PlanetManager.h"

/*
 *	ZoneStub
 */

Zone::Zone(ZoneServer* zserv, ZoneProcessServerImplementation* processor, int zoneid) : ManagedObject(DummyConstructorParameter::instance()) {
	_impl = new ZoneImplementation(zserv, processor, zoneid);
	_impl->_setStub(this);
}

Zone::Zone(DummyConstructorParameter* param) : ManagedObject(param) {
}

Zone::~Zone() {
}


void Zone::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((ZoneImplementation*) _impl)->initializeTransientMembers();
}

void Zone::insert(QuadTreeEntry* entry) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((ZoneImplementation*) _impl)->insert(entry);
}

void Zone::remove(QuadTreeEntry* entry) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((ZoneImplementation*) _impl)->remove(entry);
}

void Zone::update(QuadTreeEntry* entry) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((ZoneImplementation*) _impl)->update(entry);
}

void Zone::inRange(QuadTreeEntry* entry, float range) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((ZoneImplementation*) _impl)->inRange(entry, range);
}

void Zone::startManagers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((ZoneImplementation*) _impl)->startManagers();
}

void Zone::stopManagers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		((ZoneImplementation*) _impl)->stopManagers();
}

float Zone::getHeight(float x, float y) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addFloatParameter(x);
		method.addFloatParameter(y);

		return method.executeWithFloatReturn();
	} else
		return ((ZoneImplementation*) _impl)->getHeight(x, y);
}

void Zone::addSceneObject(SceneObject* object) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		((ZoneImplementation*) _impl)->addSceneObject(object);
}

void Zone::dropSceneObject(unsigned long long objectID) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addUnsignedLongParameter(objectID);

		method.executeWithVoidReturn();
	} else
		((ZoneImplementation*) _impl)->dropSceneObject(objectID);
}

int Zone::getZoneID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		return method.executeWithSignedIntReturn();
	} else
		return ((ZoneImplementation*) _impl)->getZoneID();
}

PlanetManager* Zone::getPlanetManager() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		return (PlanetManager*) method.executeWithObjectReturn();
	} else
		return ((ZoneImplementation*) _impl)->getPlanetManager();
}

ZoneServer* Zone::getZoneServer() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		return (ZoneServer*) method.executeWithObjectReturn();
	} else
		return ((ZoneImplementation*) _impl)->getZoneServer();
}

unsigned long long Zone::getGalacticTime() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((ZoneImplementation*) _impl)->getGalacticTime();
}

unsigned int Zone::getWeatherID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((ZoneImplementation*) _impl)->getWeatherID();
}

void Zone::setWeatherID(unsigned int value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addUnsignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		((ZoneImplementation*) _impl)->setWeatherID(value);
}

void Zone::changeWeatherID(int value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		((ZoneImplementation*) _impl)->changeWeatherID(value);
}

bool Zone::isWeatherEnabled() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);

		return method.executeWithBooleanReturn();
	} else
		return ((ZoneImplementation*) _impl)->isWeatherEnabled();
}

void Zone::setWeatherEnabled(bool value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addBooleanParameter(value);

		method.executeWithVoidReturn();
	} else
		((ZoneImplementation*) _impl)->setWeatherEnabled(value);
}

void Zone::setWeatherWindX(float value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		((ZoneImplementation*) _impl)->setWeatherWindX(value);
}

void Zone::setWeatherWindY(float value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		((ZoneImplementation*) _impl)->setWeatherWindY(value);
}

float Zone::getWeatherWindX() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);

		return method.executeWithFloatReturn();
	} else
		return ((ZoneImplementation*) _impl)->getWeatherWindX();
}

float Zone::getWeatherWindY() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);

		return method.executeWithFloatReturn();
	} else
		return ((ZoneImplementation*) _impl)->getWeatherWindY();
}

/*
 *	ZoneImplementation
 */

ZoneImplementation::ZoneImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}

ZoneImplementation::~ZoneImplementation() {
	ZoneImplementation::finalize();
}


void ZoneImplementation::finalize() {
}

void ZoneImplementation::_initializeImplementation() {
	_setClassHelper(ZoneHelper::instance());

	_serializationHelperMethod();
}

void ZoneImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (Zone*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ZoneImplementation::_getStub() {
	return _this;
}

ZoneImplementation::operator const Zone*() {
	return _this;
}

void ZoneImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ZoneImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ZoneImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ZoneImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ZoneImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ZoneImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ZoneImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ZoneImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("Zone");

	addSerializableVariable("zoneID", &zoneID);
	addSerializableVariable("objectMap", &objectMap);
	addSerializableVariable("planetManager", &planetManager);
	addSerializableVariable("server", &server);
	addSerializableVariable("galacticTime", &galacticTime);
	addSerializableVariable("weatherWindX", &weatherWindX);
	addSerializableVariable("weatherWindY", &weatherWindY);
	addSerializableVariable("weatherID", &weatherID);
	addSerializableVariable("weatherEnabled", &weatherEnabled);
}

void ZoneImplementation::addSceneObject(SceneObject* object) {
	// server/zone/Zone.idl(114):  objectMap.put(object.getObjectID(), object);
	(&objectMap)->put(object->getObjectID(), object);
}

void ZoneImplementation::dropSceneObject(unsigned long long objectID) {
	// server/zone/Zone.idl(118):  objectMap.remove(objectID);
	(&objectMap)->remove(objectID);
}

int ZoneImplementation::getZoneID() {
	// server/zone/Zone.idl(123):  return zoneID;
	return zoneID;
}

PlanetManager* ZoneImplementation::getPlanetManager() {
	// server/zone/Zone.idl(129):  return planetManager;
	return planetManager;
}

ZoneServer* ZoneImplementation::getZoneServer() {
	// server/zone/Zone.idl(133):  return server;
	return server;
}

unsigned long long ZoneImplementation::getGalacticTime() {
	// server/zone/Zone.idl(137):  return galacticTime.miliDifference() / 1000;
	return (&galacticTime)->miliDifference() / 1000;
}

unsigned int ZoneImplementation::getWeatherID() {
	// server/zone/Zone.idl(141):  return weatherID;
	return weatherID;
}

void ZoneImplementation::setWeatherID(unsigned int value) {
	// server/zone/Zone.idl(145):  weatherID = value;
	weatherID = value;
}

void ZoneImplementation::changeWeatherID(int value) {
	// server/zone/Zone.idl(149):  weatherID 
	if (weatherID == 0 && value < 0){
	// server/zone/Zone.idl(150):  weatherID = 0;
	weatherID = 0;
	// server/zone/Zone.idl(151):  return;
	return;
}
	// server/zone/Zone.idl(154):  += value;
	weatherID += value;
	// server/zone/Zone.idl(156):  }
	if (weatherID > 4){
	// server/zone/Zone.idl(157):  weatherID = 4;
	weatherID = 4;
	// server/zone/Zone.idl(158):  return;
	return;
}
}

bool ZoneImplementation::isWeatherEnabled() {
	// server/zone/Zone.idl(163):  return weatherEnabled;
	return weatherEnabled;
}

void ZoneImplementation::setWeatherEnabled(bool value) {
	// server/zone/Zone.idl(167):  weatherEnabled = value;
	weatherEnabled = value;
}

void ZoneImplementation::setWeatherWindX(float value) {
	// server/zone/Zone.idl(171):  weatherWindX = value;
	weatherWindX = value;
}

void ZoneImplementation::setWeatherWindY(float value) {
	// server/zone/Zone.idl(175):  weatherWindY = value;
	weatherWindY = value;
}

float ZoneImplementation::getWeatherWindX() {
	// server/zone/Zone.idl(179):  return weatherWindX;
	return weatherWindX;
}

float ZoneImplementation::getWeatherWindY() {
	// server/zone/Zone.idl(183):  return weatherWindY;
	return weatherWindY;
}

/*
 *	ZoneAdapter
 */

ZoneAdapter::ZoneAdapter(ZoneImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* ZoneAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		startManagers();
		break;
	case 8:
		stopManagers();
		break;
	case 9:
		resp->insertFloat(getHeight(inv->getFloatParameter(), inv->getFloatParameter()));
		break;
	case 10:
		addSceneObject((SceneObject*) inv->getObjectParameter());
		break;
	case 11:
		dropSceneObject(inv->getUnsignedLongParameter());
		break;
	case 12:
		resp->insertSignedInt(getZoneID());
		break;
	case 13:
		resp->insertLong(getPlanetManager()->_getObjectID());
		break;
	case 14:
		resp->insertLong(getZoneServer()->_getObjectID());
		break;
	case 15:
		resp->insertLong(getGalacticTime());
		break;
	case 16:
		resp->insertInt(getWeatherID());
		break;
	case 17:
		setWeatherID(inv->getUnsignedIntParameter());
		break;
	case 18:
		changeWeatherID(inv->getSignedIntParameter());
		break;
	case 19:
		resp->insertBoolean(isWeatherEnabled());
		break;
	case 20:
		setWeatherEnabled(inv->getBooleanParameter());
		break;
	case 21:
		setWeatherWindX(inv->getFloatParameter());
		break;
	case 22:
		setWeatherWindY(inv->getFloatParameter());
		break;
	case 23:
		resp->insertFloat(getWeatherWindX());
		break;
	case 24:
		resp->insertFloat(getWeatherWindY());
		break;
	default:
		return NULL;
	}

	return resp;
}

void ZoneAdapter::initializeTransientMembers() {
	((ZoneImplementation*) impl)->initializeTransientMembers();
}

void ZoneAdapter::startManagers() {
	((ZoneImplementation*) impl)->startManagers();
}

void ZoneAdapter::stopManagers() {
	((ZoneImplementation*) impl)->stopManagers();
}

float ZoneAdapter::getHeight(float x, float y) {
	return ((ZoneImplementation*) impl)->getHeight(x, y);
}

void ZoneAdapter::addSceneObject(SceneObject* object) {
	((ZoneImplementation*) impl)->addSceneObject(object);
}

void ZoneAdapter::dropSceneObject(unsigned long long objectID) {
	((ZoneImplementation*) impl)->dropSceneObject(objectID);
}

int ZoneAdapter::getZoneID() {
	return ((ZoneImplementation*) impl)->getZoneID();
}

PlanetManager* ZoneAdapter::getPlanetManager() {
	return ((ZoneImplementation*) impl)->getPlanetManager();
}

ZoneServer* ZoneAdapter::getZoneServer() {
	return ((ZoneImplementation*) impl)->getZoneServer();
}

unsigned long long ZoneAdapter::getGalacticTime() {
	return ((ZoneImplementation*) impl)->getGalacticTime();
}

unsigned int ZoneAdapter::getWeatherID() {
	return ((ZoneImplementation*) impl)->getWeatherID();
}

void ZoneAdapter::setWeatherID(unsigned int value) {
	((ZoneImplementation*) impl)->setWeatherID(value);
}

void ZoneAdapter::changeWeatherID(int value) {
	((ZoneImplementation*) impl)->changeWeatherID(value);
}

bool ZoneAdapter::isWeatherEnabled() {
	return ((ZoneImplementation*) impl)->isWeatherEnabled();
}

void ZoneAdapter::setWeatherEnabled(bool value) {
	((ZoneImplementation*) impl)->setWeatherEnabled(value);
}

void ZoneAdapter::setWeatherWindX(float value) {
	((ZoneImplementation*) impl)->setWeatherWindX(value);
}

void ZoneAdapter::setWeatherWindY(float value) {
	((ZoneImplementation*) impl)->setWeatherWindY(value);
}

float ZoneAdapter::getWeatherWindX() {
	return ((ZoneImplementation*) impl)->getWeatherWindX();
}

float ZoneAdapter::getWeatherWindY() {
	return ((ZoneImplementation*) impl)->getWeatherWindY();
}

/*
 *	ZoneHelper
 */

ZoneHelper* ZoneHelper::staticInitializer = ZoneHelper::instance();

ZoneHelper::ZoneHelper() {
	className = "Zone";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ZoneHelper::finalizeHelper() {
	ZoneHelper::finalize();
}

DistributedObject* ZoneHelper::instantiateObject() {
	return new Zone(DummyConstructorParameter::instance());
}

DistributedObjectServant* ZoneHelper::instantiateServant() {
	return new ZoneImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ZoneHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ZoneAdapter((ZoneImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

