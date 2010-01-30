/*
 *	server/zone/objects/tangible/terminal/bazaar/BazaarTerminal.cpp generated by engine3 IDL compiler 0.60
 */

#include "BazaarTerminal.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

/*
 *	BazaarTerminalStub
 */

BazaarTerminal::BazaarTerminal(LuaObject* templateData) : Terminal(DummyConstructorParameter::instance()) {
	_impl = new BazaarTerminalImplementation(templateData);
	_impl->_setStub(this);
}

BazaarTerminal::BazaarTerminal(DummyConstructorParameter* param) : Terminal(param) {
}

BazaarTerminal::~BazaarTerminal() {
}


void BazaarTerminal::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((BazaarTerminalImplementation*) _impl)->initializeTransientMembers();
}

int BazaarTerminal::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return ((BazaarTerminalImplementation*) _impl)->handleObjectMenuSelect(player, selectedID);
}

void BazaarTerminal::setBazaarRegion(const String& region) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addAsciiParameter(region);

		method.executeWithVoidReturn();
	} else
		((BazaarTerminalImplementation*) _impl)->setBazaarRegion(region);
}

String BazaarTerminal::getBazaarRegion() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		method.executeWithAsciiReturn(_return_getBazaarRegion);
		return _return_getBazaarRegion;
	} else
		return ((BazaarTerminalImplementation*) _impl)->getBazaarRegion();
}

/*
 *	BazaarTerminalImplementation
 */

BazaarTerminalImplementation::BazaarTerminalImplementation(DummyConstructorParameter* param) : TerminalImplementation(param) {
	_initializeImplementation();
}

BazaarTerminalImplementation::~BazaarTerminalImplementation() {
	BazaarTerminalImplementation::finalize();
}


void BazaarTerminalImplementation::_initializeImplementation() {
	_setClassHelper(BazaarTerminalHelper::instance());

	_serializationHelperMethod();
}

void BazaarTerminalImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (BazaarTerminal*) stub;
	TerminalImplementation::_setStub(stub);
}

DistributedObjectStub* BazaarTerminalImplementation::_getStub() {
	return _this;
}

BazaarTerminalImplementation::operator const BazaarTerminal*() {
	return _this;
}

void BazaarTerminalImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void BazaarTerminalImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void BazaarTerminalImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void BazaarTerminalImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void BazaarTerminalImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void BazaarTerminalImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void BazaarTerminalImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void BazaarTerminalImplementation::_serializationHelperMethod() {
	TerminalImplementation::_serializationHelperMethod();

	_setClassName("BazaarTerminal");

	addSerializableVariable("bazaarRegion", &bazaarRegion);
}

BazaarTerminalImplementation::BazaarTerminalImplementation(LuaObject* templateData) : TerminalImplementation((templateData)) {
	_initializeImplementation();
	// server/zone/objects/tangible/terminal/bazaar/BazaarTerminal.idl(59):  Logger.setLoggingName("BazaarTerminal");
	Logger::setLoggingName("BazaarTerminal");
}

void BazaarTerminalImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/terminal/bazaar/BazaarTerminal.idl(63):  super.initializeTransientMembers();
	TerminalImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/terminal/bazaar/BazaarTerminal.idl(65):  Logger.setLoggingName("BazaarTerminal");
	Logger::setLoggingName("BazaarTerminal");
}

int BazaarTerminalImplementation::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	// server/zone/objects/tangible/terminal/bazaar/BazaarTerminal.idl(75):  return 0;
	return 0;
}

void BazaarTerminalImplementation::setBazaarRegion(const String& region) {
	// server/zone/objects/tangible/terminal/bazaar/BazaarTerminal.idl(79):  bazaarRegion = region;
	bazaarRegion = region;
}

String BazaarTerminalImplementation::getBazaarRegion() {
	// server/zone/objects/tangible/terminal/bazaar/BazaarTerminal.idl(83):  return bazaarRegion;
	return bazaarRegion;
}

/*
 *	BazaarTerminalAdapter
 */

BazaarTerminalAdapter::BazaarTerminalAdapter(BazaarTerminalImplementation* obj) : TerminalAdapter(obj) {
}

Packet* BazaarTerminalAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case 8:
		setBazaarRegion(inv->getAsciiParameter(_param0_setBazaarRegion__String_));
		break;
	case 9:
		resp->insertAscii(getBazaarRegion());
		break;
	default:
		return NULL;
	}

	return resp;
}

void BazaarTerminalAdapter::initializeTransientMembers() {
	((BazaarTerminalImplementation*) impl)->initializeTransientMembers();
}

int BazaarTerminalAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((BazaarTerminalImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

void BazaarTerminalAdapter::setBazaarRegion(const String& region) {
	((BazaarTerminalImplementation*) impl)->setBazaarRegion(region);
}

String BazaarTerminalAdapter::getBazaarRegion() {
	return ((BazaarTerminalImplementation*) impl)->getBazaarRegion();
}

/*
 *	BazaarTerminalHelper
 */

BazaarTerminalHelper* BazaarTerminalHelper::staticInitializer = BazaarTerminalHelper::instance();

BazaarTerminalHelper::BazaarTerminalHelper() {
	className = "BazaarTerminal";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void BazaarTerminalHelper::finalizeHelper() {
	BazaarTerminalHelper::finalize();
}

DistributedObject* BazaarTerminalHelper::instantiateObject() {
	return new BazaarTerminal(DummyConstructorParameter::instance());
}

DistributedObjectServant* BazaarTerminalHelper::instantiateServant() {
	return new BazaarTerminalImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* BazaarTerminalHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new BazaarTerminalAdapter((BazaarTerminalImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

