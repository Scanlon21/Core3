/*
 *	server/zone/objects/tangible/weapon/WeaponObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "WeaponObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

/*
 *	WeaponObjectStub
 */

WeaponObject::WeaponObject(LuaObject* templateData) : TangibleObject(DummyConstructorParameter::instance()) {
	_impl = new WeaponObjectImplementation(templateData);
	_impl->_setStub(this);
}

WeaponObject::WeaponObject(DummyConstructorParameter* param) : TangibleObject(param) {
}

WeaponObject::~WeaponObject() {
}


void WeaponObject::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((WeaponObjectImplementation*) _impl)->initializeTransientMembers();
}

void WeaponObject::sendBaselinesTo(SceneObject* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((WeaponObjectImplementation*) _impl)->sendBaselinesTo(player);
}

void WeaponObject::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((WeaponObjectImplementation*) _impl)->fillAttributeList(msg, object);
}

bool WeaponObject::isCertifiedFor(PlayerCreature* object) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(object);

		return method.executeWithBooleanReturn();
	} else
		return ((WeaponObjectImplementation*) _impl)->isCertifiedFor(object);
}

void WeaponObject::setCertified(bool cert) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addBooleanParameter(cert);

		method.executeWithVoidReturn();
	} else
		((WeaponObjectImplementation*) _impl)->setCertified(cert);
}

int WeaponObject::getAttackType() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		return method.executeWithSignedIntReturn();
	} else
		return ((WeaponObjectImplementation*) _impl)->getAttackType();
}

bool WeaponObject::isCertified() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		return method.executeWithBooleanReturn();
	} else
		return ((WeaponObjectImplementation*) _impl)->isCertified();
}

/*
 *	WeaponObjectImplementation
 */

WeaponObjectImplementation::WeaponObjectImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}

WeaponObjectImplementation::~WeaponObjectImplementation() {
}


void WeaponObjectImplementation::finalize() {
}

void WeaponObjectImplementation::_initializeImplementation() {
	_setClassHelper(WeaponObjectHelper::instance());

	_serializationHelperMethod();
}

void WeaponObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (WeaponObject*) stub;
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* WeaponObjectImplementation::_getStub() {
	return _this;
}

WeaponObjectImplementation::operator const WeaponObject*() {
	return _this;
}

void WeaponObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void WeaponObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void WeaponObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void WeaponObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void WeaponObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void WeaponObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void WeaponObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void WeaponObjectImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("WeaponObject");

	addSerializableVariable("attackType", &attackType);
	addSerializableVariable("weaponEffect", &weaponEffect);
	addSerializableVariable("weaponEffectIndex", &weaponEffectIndex);
	addSerializableVariable("certified", &certified);
	addSerializableVariable("certificationsRequired", &certificationsRequired);
}

WeaponObjectImplementation::WeaponObjectImplementation(LuaObject* templateData) : TangibleObjectImplementation(templateData) {
	_initializeImplementation();
	// server/zone/objects/tangible/weapon/WeaponObject.idl(68):  loadTemplateData(templateData);
	loadTemplateData(templateData);
	// server/zone/objects/tangible/weapon/WeaponObject.idl(70):  Logger.setLoggingName("WeaponObject");
	Logger::setLoggingName("WeaponObject");
}

void WeaponObjectImplementation::setCertified(bool cert) {
	// server/zone/objects/tangible/weapon/WeaponObject.idl(99):  certified = cert;
	certified = cert;
}

int WeaponObjectImplementation::getAttackType() {
	// server/zone/objects/tangible/weapon/WeaponObject.idl(103):  return attackType;
	return attackType;
}

bool WeaponObjectImplementation::isCertified() {
	// server/zone/objects/tangible/weapon/WeaponObject.idl(107):  return certified;
	return certified;
}

/*
 *	WeaponObjectAdapter
 */

WeaponObjectAdapter::WeaponObjectAdapter(WeaponObjectImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* WeaponObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		sendBaselinesTo((SceneObject*) inv->getObjectParameter());
		break;
	case 8:
		resp->insertBoolean(isCertifiedFor((PlayerCreature*) inv->getObjectParameter()));
		break;
	case 9:
		setCertified(inv->getBooleanParameter());
		break;
	case 10:
		resp->insertSignedInt(getAttackType());
		break;
	case 11:
		resp->insertBoolean(isCertified());
		break;
	default:
		return NULL;
	}

	return resp;
}

void WeaponObjectAdapter::initializeTransientMembers() {
	((WeaponObjectImplementation*) impl)->initializeTransientMembers();
}

void WeaponObjectAdapter::sendBaselinesTo(SceneObject* player) {
	((WeaponObjectImplementation*) impl)->sendBaselinesTo(player);
}

bool WeaponObjectAdapter::isCertifiedFor(PlayerCreature* object) {
	return ((WeaponObjectImplementation*) impl)->isCertifiedFor(object);
}

void WeaponObjectAdapter::setCertified(bool cert) {
	((WeaponObjectImplementation*) impl)->setCertified(cert);
}

int WeaponObjectAdapter::getAttackType() {
	return ((WeaponObjectImplementation*) impl)->getAttackType();
}

bool WeaponObjectAdapter::isCertified() {
	return ((WeaponObjectImplementation*) impl)->isCertified();
}

/*
 *	WeaponObjectHelper
 */

WeaponObjectHelper* WeaponObjectHelper::staticInitializer = WeaponObjectHelper::instance();

WeaponObjectHelper::WeaponObjectHelper() {
	className = "WeaponObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void WeaponObjectHelper::finalizeHelper() {
	WeaponObjectHelper::finalize();
}

DistributedObject* WeaponObjectHelper::instantiateObject() {
	return new WeaponObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* WeaponObjectHelper::instantiateServant() {
	return new WeaponObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* WeaponObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new WeaponObjectAdapter((WeaponObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

