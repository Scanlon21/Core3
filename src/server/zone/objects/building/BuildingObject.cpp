/*
 *	server/zone/objects/building/BuildingObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "BuildingObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/objects/tangible/sign/SignObject.h"

#include "server/zone/objects/tangible/terminal/structure/StructureTerminal.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/Zone.h"

#include "server/zone/templates/SharedObjectTemplate.h"

/*
 *	BuildingObjectStub
 */

BuildingObject::BuildingObject() : StructureObject(DummyConstructorParameter::instance()) {
	BuildingObjectImplementation* _implementation = new BuildingObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

BuildingObject::BuildingObject(DummyConstructorParameter* param) : StructureObject(param) {
}

BuildingObject::~BuildingObject() {
}


void BuildingObject::createCellObjects() {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->createCellObjects();
}

void BuildingObject::destroyObjectFromDatabase(bool destroyContainedObjects) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addBooleanParameter(destroyContainedObjects);

		method.executeWithVoidReturn();
	} else
		_implementation->destroyObjectFromDatabase(destroyContainedObjects);
}

void BuildingObject::loadTemplateData(SharedObjectTemplate* templateData) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void BuildingObject::initializeTransientMembers() {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void BuildingObject::sendContainerObjectsTo(SceneObject* player) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendContainerObjectsTo(player);
}

void BuildingObject::updateCellPermissionsTo(SceneObject* player) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->updateCellPermissionsTo(player);
}

int BuildingObject::notifyStructurePlaced(PlayerCreature* player) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(player);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->notifyStructurePlaced(player);
}

Vector3 BuildingObject::getEjectionPoint() {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getEjectionPoint();
}

void BuildingObject::removeFromZone() {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		method.executeWithVoidReturn();
	} else
		_implementation->removeFromZone();
}

void BuildingObject::notifyInsert(QuadTreeEntry* obj) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->notifyInsert(obj);
}

void BuildingObject::notifyDissapear(QuadTreeEntry* obj) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->notifyDissapear(obj);
}

void BuildingObject::notifyInsertToZone(SceneObject* object) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyInsertToZone(object);
}

void BuildingObject::insert(QuadTreeEntry* obj) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->insert(obj);
}

void BuildingObject::remove(QuadTreeEntry* obj) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->remove(obj);
}

void BuildingObject::update(QuadTreeEntry* obj) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->update(obj);
}

void BuildingObject::inRange(QuadTreeEntry* obj, float range) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->inRange(obj, range);
}

void BuildingObject::sendTo(SceneObject* player, bool doClose) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addObjectParameter(player);
		method.addBooleanParameter(doClose);

		method.executeWithVoidReturn();
	} else
		_implementation->sendTo(player, doClose);
}

void BuildingObject::sendBaselinesTo(SceneObject* player) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendBaselinesTo(player);
}

void BuildingObject::sendDestroyTo(SceneObject* player) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendDestroyTo(player);
}

void BuildingObject::addCell(CellObject* cell) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addObjectParameter(cell);

		method.executeWithVoidReturn();
	} else
		_implementation->addCell(cell);
}

bool BuildingObject::isStaticBuilding() {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isStaticBuilding();
}

CellObject* BuildingObject::getCell(int idx) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addSignedIntParameter(idx);

		return (CellObject*) method.executeWithObjectReturn();
	} else
		return _implementation->getCell(idx);
}

int BuildingObject::getTotalCellNumber() {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getTotalCellNumber();
}

void BuildingObject::setStaticBuilding(bool value) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addBooleanParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setStaticBuilding(value);
}

int BuildingObject::getCurrentNumerOfPlayerItems() {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getCurrentNumerOfPlayerItems();
}

void BuildingObject::onEnter(PlayerCreature* player) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->onEnter(player);
}

void BuildingObject::onExit(PlayerCreature* player) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->onExit(player);
}

bool BuildingObject::isBuildingObject() {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isBuildingObject();
}

bool BuildingObject::isMedicalBuildingObject() {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isMedicalBuildingObject();
}

void BuildingObject::setSignObject(SignObject* sign) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);
		method.addObjectParameter(sign);

		method.executeWithVoidReturn();
	} else
		_implementation->setSignObject(sign);
}

SignObject* BuildingObject::getSignObject() {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);

		return (SignObject*) method.executeWithObjectReturn();
	} else
		return _implementation->getSignObject();
}

bool BuildingObject::isCityHallBuilding() {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isCityHallBuilding();
}

void BuildingObject::setAccessFee(int fee) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);
		method.addSignedIntParameter(fee);

		method.executeWithVoidReturn();
	} else
		_implementation->setAccessFee(fee);
}

int BuildingObject::getAccessFee() {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getAccessFee();
}

bool BuildingObject::isPublicStructure() {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isPublicStructure();
}

void BuildingObject::setPublicStructure(bool privacy) {
	BuildingObjectImplementation* _implementation = (BuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);
		method.addBooleanParameter(privacy);

		method.executeWithVoidReturn();
	} else
		_implementation->setPublicStructure(privacy);
}

DistributedObjectServant* BuildingObject::_getImplementation() {

	_updated = true;
	return _impl;
}

void BuildingObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	BuildingObjectImplementation
 */

BuildingObjectImplementation::BuildingObjectImplementation(DummyConstructorParameter* param) : StructureObjectImplementation(param) {
	_initializeImplementation();
}


BuildingObjectImplementation::~BuildingObjectImplementation() {
}


void BuildingObjectImplementation::finalize() {
}

void BuildingObjectImplementation::_initializeImplementation() {
	_setClassHelper(BuildingObjectHelper::instance());

	_serializationHelperMethod();
}

void BuildingObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (BuildingObject*) stub;
	StructureObjectImplementation::_setStub(stub);
}

DistributedObjectStub* BuildingObjectImplementation::_getStub() {
	return _this;
}

BuildingObjectImplementation::operator const BuildingObject*() {
	return _this;
}

void BuildingObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void BuildingObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void BuildingObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void BuildingObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void BuildingObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void BuildingObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void BuildingObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void BuildingObjectImplementation::_serializationHelperMethod() {
	StructureObjectImplementation::_serializationHelperMethod();

	_setClassName("BuildingObject");

	addSerializableVariable("cells", &cells);
	addSerializableVariable("totalCellNumber", &totalCellNumber);
	addSerializableVariable("signObject", &signObject);
	addSerializableVariable("deedObjectID", &deedObjectID);
	addSerializableVariable("accessFee", &accessFee);
	addSerializableVariable("publicStructure", &publicStructure);
}

BuildingObjectImplementation::BuildingObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/building/BuildingObject.idl(82):  		Logger.setLoggingName("BuildingObject");
	Logger::setLoggingName("BuildingObject");
	// server/zone/objects/building/BuildingObject.idl(84):  		QuadTree.setSize(-1024, -1024, 1024, 1024);
	QuadTree::setSize(-1024, -1024, 1024, 1024);
	// server/zone/objects/building/BuildingObject.idl(86):  		super.staticObject = false;
	StructureObjectImplementation::staticObject = false;
	// server/zone/objects/building/BuildingObject.idl(88):  		super.containerVolumeLimit = 0xFFFFFFFF;
	StructureObjectImplementation::containerVolumeLimit = 0xFFFFFFFF;
	// server/zone/objects/building/BuildingObject.idl(90):  		super.containerType = 2;
	StructureObjectImplementation::containerType = 2;
	// server/zone/objects/building/BuildingObject.idl(92):  		totalCellNumber = 0;
	totalCellNumber = 0;
	// server/zone/objects/building/BuildingObject.idl(94):  		accessFee = 0;
	accessFee = 0;
	// server/zone/objects/building/BuildingObject.idl(96):  		deedObjectID = 0;
	deedObjectID = 0;
	// server/zone/objects/building/BuildingObject.idl(98):  		publicStructure = true;
	publicStructure = true;
}

void BuildingObjectImplementation::createCellObjects() {
	// server/zone/objects/building/BuildingObject.idl(102):  
	for (	// server/zone/objects/building/BuildingObject.idl(102):  		for (int i = 0;
	int i = 0;
	i < totalCellNumber;
 ++i) {
	// server/zone/objects/building/BuildingObject.idl(103):  			SceneObject newCell = getZoneServer().createObject(0xAD431713, 2);
	SceneObject* newCell = getZoneServer()->createObject(0xAD431713, 2);
	// server/zone/objects/building/BuildingObject.idl(105):  			addCell((CellObject)newCell);
	addCell((CellObject*) newCell);
}
	// server/zone/objects/building/BuildingObject.idl(108):  		updateToDatabase();
	updateToDatabase();
}

int BuildingObjectImplementation::notifyStructurePlaced(PlayerCreature* player) {
	// server/zone/objects/building/BuildingObject.idl(136):  		return 0;
	return 0;
}

bool BuildingObjectImplementation::isStaticBuilding() {
	// server/zone/objects/building/BuildingObject.idl(185):  		return super.staticObject;
	return StructureObjectImplementation::staticObject;
}

CellObject* BuildingObjectImplementation::getCell(int idx) {
	// server/zone/objects/building/BuildingObject.idl(189):  		return cells.get(idx);
	return (&cells)->get(idx);
}

int BuildingObjectImplementation::getTotalCellNumber() {
	// server/zone/objects/building/BuildingObject.idl(193):  		return totalCellNumber;
	return totalCellNumber;
}

void BuildingObjectImplementation::setStaticBuilding(bool value) {
	// server/zone/objects/building/BuildingObject.idl(197):  		super.staticObject = value;
	StructureObjectImplementation::staticObject = value;
}

void BuildingObjectImplementation::onExit(PlayerCreature* player) {
}

bool BuildingObjectImplementation::isBuildingObject() {
	// server/zone/objects/building/BuildingObject.idl(225):  		return true;
	return true;
}

bool BuildingObjectImplementation::isMedicalBuildingObject() {
	// server/zone/objects/building/BuildingObject.idl(229):  		return false;
	return false;
}

void BuildingObjectImplementation::setSignObject(SignObject* sign) {
	// server/zone/objects/building/BuildingObject.idl(233):  		signObject = sign;
	signObject = sign;
}

SignObject* BuildingObjectImplementation::getSignObject() {
	// server/zone/objects/building/BuildingObject.idl(237):  		return signObject;
	return signObject;
}

bool BuildingObjectImplementation::isCityHallBuilding() {
	// server/zone/objects/building/BuildingObject.idl(241):  		return false;
	return false;
}

void BuildingObjectImplementation::setAccessFee(int fee) {
	// server/zone/objects/building/BuildingObject.idl(245):  		accessFee = fee;
	accessFee = fee;
}

int BuildingObjectImplementation::getAccessFee() {
	// server/zone/objects/building/BuildingObject.idl(249):  		return accessFee;
	return accessFee;
}

bool BuildingObjectImplementation::isPublicStructure() {
	// server/zone/objects/building/BuildingObject.idl(253):  		return publicStructure;
	return publicStructure;
}

void BuildingObjectImplementation::setPublicStructure(bool privacy) {
	// server/zone/objects/building/BuildingObject.idl(257):  		publicStructure = privacy;
	publicStructure = privacy;
}

/*
 *	BuildingObjectAdapter
 */

BuildingObjectAdapter::BuildingObjectAdapter(BuildingObjectImplementation* obj) : StructureObjectAdapter(obj) {
}

Packet* BuildingObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		createCellObjects();
		break;
	case 7:
		destroyObjectFromDatabase(inv->getBooleanParameter());
		break;
	case 8:
		initializeTransientMembers();
		break;
	case 9:
		sendContainerObjectsTo((SceneObject*) inv->getObjectParameter());
		break;
	case 10:
		updateCellPermissionsTo((SceneObject*) inv->getObjectParameter());
		break;
	case 11:
		resp->insertSignedInt(notifyStructurePlaced((PlayerCreature*) inv->getObjectParameter()));
		break;
	case 12:
		removeFromZone();
		break;
	case 13:
		notifyInsertToZone((SceneObject*) inv->getObjectParameter());
		break;
	case 14:
		sendTo((SceneObject*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 15:
		sendBaselinesTo((SceneObject*) inv->getObjectParameter());
		break;
	case 16:
		sendDestroyTo((SceneObject*) inv->getObjectParameter());
		break;
	case 17:
		addCell((CellObject*) inv->getObjectParameter());
		break;
	case 18:
		resp->insertBoolean(isStaticBuilding());
		break;
	case 19:
		resp->insertLong(getCell(inv->getSignedIntParameter())->_getObjectID());
		break;
	case 20:
		resp->insertSignedInt(getTotalCellNumber());
		break;
	case 21:
		setStaticBuilding(inv->getBooleanParameter());
		break;
	case 22:
		resp->insertSignedInt(getCurrentNumerOfPlayerItems());
		break;
	case 23:
		onEnter((PlayerCreature*) inv->getObjectParameter());
		break;
	case 24:
		onExit((PlayerCreature*) inv->getObjectParameter());
		break;
	case 25:
		resp->insertBoolean(isBuildingObject());
		break;
	case 26:
		resp->insertBoolean(isMedicalBuildingObject());
		break;
	case 27:
		setSignObject((SignObject*) inv->getObjectParameter());
		break;
	case 28:
		resp->insertLong(getSignObject()->_getObjectID());
		break;
	case 29:
		resp->insertBoolean(isCityHallBuilding());
		break;
	case 30:
		setAccessFee(inv->getSignedIntParameter());
		break;
	case 31:
		resp->insertSignedInt(getAccessFee());
		break;
	case 32:
		resp->insertBoolean(isPublicStructure());
		break;
	case 33:
		setPublicStructure(inv->getBooleanParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void BuildingObjectAdapter::createCellObjects() {
	((BuildingObjectImplementation*) impl)->createCellObjects();
}

void BuildingObjectAdapter::destroyObjectFromDatabase(bool destroyContainedObjects) {
	((BuildingObjectImplementation*) impl)->destroyObjectFromDatabase(destroyContainedObjects);
}

void BuildingObjectAdapter::initializeTransientMembers() {
	((BuildingObjectImplementation*) impl)->initializeTransientMembers();
}

void BuildingObjectAdapter::sendContainerObjectsTo(SceneObject* player) {
	((BuildingObjectImplementation*) impl)->sendContainerObjectsTo(player);
}

void BuildingObjectAdapter::updateCellPermissionsTo(SceneObject* player) {
	((BuildingObjectImplementation*) impl)->updateCellPermissionsTo(player);
}

int BuildingObjectAdapter::notifyStructurePlaced(PlayerCreature* player) {
	return ((BuildingObjectImplementation*) impl)->notifyStructurePlaced(player);
}

void BuildingObjectAdapter::removeFromZone() {
	((BuildingObjectImplementation*) impl)->removeFromZone();
}

void BuildingObjectAdapter::notifyInsertToZone(SceneObject* object) {
	((BuildingObjectImplementation*) impl)->notifyInsertToZone(object);
}

void BuildingObjectAdapter::sendTo(SceneObject* player, bool doClose) {
	((BuildingObjectImplementation*) impl)->sendTo(player, doClose);
}

void BuildingObjectAdapter::sendBaselinesTo(SceneObject* player) {
	((BuildingObjectImplementation*) impl)->sendBaselinesTo(player);
}

void BuildingObjectAdapter::sendDestroyTo(SceneObject* player) {
	((BuildingObjectImplementation*) impl)->sendDestroyTo(player);
}

void BuildingObjectAdapter::addCell(CellObject* cell) {
	((BuildingObjectImplementation*) impl)->addCell(cell);
}

bool BuildingObjectAdapter::isStaticBuilding() {
	return ((BuildingObjectImplementation*) impl)->isStaticBuilding();
}

CellObject* BuildingObjectAdapter::getCell(int idx) {
	return ((BuildingObjectImplementation*) impl)->getCell(idx);
}

int BuildingObjectAdapter::getTotalCellNumber() {
	return ((BuildingObjectImplementation*) impl)->getTotalCellNumber();
}

void BuildingObjectAdapter::setStaticBuilding(bool value) {
	((BuildingObjectImplementation*) impl)->setStaticBuilding(value);
}

int BuildingObjectAdapter::getCurrentNumerOfPlayerItems() {
	return ((BuildingObjectImplementation*) impl)->getCurrentNumerOfPlayerItems();
}

void BuildingObjectAdapter::onEnter(PlayerCreature* player) {
	((BuildingObjectImplementation*) impl)->onEnter(player);
}

void BuildingObjectAdapter::onExit(PlayerCreature* player) {
	((BuildingObjectImplementation*) impl)->onExit(player);
}

bool BuildingObjectAdapter::isBuildingObject() {
	return ((BuildingObjectImplementation*) impl)->isBuildingObject();
}

bool BuildingObjectAdapter::isMedicalBuildingObject() {
	return ((BuildingObjectImplementation*) impl)->isMedicalBuildingObject();
}

void BuildingObjectAdapter::setSignObject(SignObject* sign) {
	((BuildingObjectImplementation*) impl)->setSignObject(sign);
}

SignObject* BuildingObjectAdapter::getSignObject() {
	return ((BuildingObjectImplementation*) impl)->getSignObject();
}

bool BuildingObjectAdapter::isCityHallBuilding() {
	return ((BuildingObjectImplementation*) impl)->isCityHallBuilding();
}

void BuildingObjectAdapter::setAccessFee(int fee) {
	((BuildingObjectImplementation*) impl)->setAccessFee(fee);
}

int BuildingObjectAdapter::getAccessFee() {
	return ((BuildingObjectImplementation*) impl)->getAccessFee();
}

bool BuildingObjectAdapter::isPublicStructure() {
	return ((BuildingObjectImplementation*) impl)->isPublicStructure();
}

void BuildingObjectAdapter::setPublicStructure(bool privacy) {
	((BuildingObjectImplementation*) impl)->setPublicStructure(privacy);
}

/*
 *	BuildingObjectHelper
 */

BuildingObjectHelper* BuildingObjectHelper::staticInitializer = BuildingObjectHelper::instance();

BuildingObjectHelper::BuildingObjectHelper() {
	className = "BuildingObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void BuildingObjectHelper::finalizeHelper() {
	BuildingObjectHelper::finalize();
}

DistributedObject* BuildingObjectHelper::instantiateObject() {
	return new BuildingObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* BuildingObjectHelper::instantiateServant() {
	return new BuildingObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* BuildingObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new BuildingObjectAdapter((BuildingObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

