/*
 *	server/zone/ZoneClientSession.cpp generated by engine3 IDL compiler 0.60
 */

#include "ZoneClientSession.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/ZoneServer.h"

/*
 *	ZoneClientSessionStub
 */

ZoneClientSession::ZoneClientSession(Socket* sock, SocketAddress* addr) : ManagedObject(DummyConstructorParameter::instance()) {
	ZoneClientSessionImplementation* _implementation = new ZoneClientSessionImplementation(sock, addr);
	_impl = _implementation;
	_impl->_setStub(this);
}

ZoneClientSession::ZoneClientSession(DummyConstructorParameter* param) : ManagedObject(param) {
}

ZoneClientSession::~ZoneClientSession() {
}


void ZoneClientSession::disconnect() {
	ZoneClientSessionImplementation* _implementation = (ZoneClientSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->disconnect();
}

void ZoneClientSession::disconnect(bool doLock) {
	ZoneClientSessionImplementation* _implementation = (ZoneClientSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		_implementation->disconnect(doLock);
}

void ZoneClientSession::sendMessage(BasePacket* msg) {
	ZoneClientSessionImplementation* _implementation = (ZoneClientSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(msg);

		method.executeWithVoidReturn();
	} else
		_implementation->sendMessage(msg);
}

void ZoneClientSession::balancePacketCheckupTime() {
	ZoneClientSessionImplementation* _implementation = (ZoneClientSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		method.executeWithVoidReturn();
	} else
		_implementation->balancePacketCheckupTime();
}

void ZoneClientSession::resetPacketCheckupTime() {
	ZoneClientSessionImplementation* _implementation = (ZoneClientSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		method.executeWithVoidReturn();
	} else
		_implementation->resetPacketCheckupTime();
}

void ZoneClientSession::closeConnection(bool lockPlayer, bool doLock) {
	ZoneClientSessionImplementation* _implementation = (ZoneClientSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addBooleanParameter(lockPlayer);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		_implementation->closeConnection(lockPlayer, doLock);
}

void ZoneClientSession::lock(bool doLock) {
	ZoneClientSessionImplementation* _implementation = (ZoneClientSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		_implementation->lock(doLock);
}

void ZoneClientSession::unlock(bool doLock) {
	ZoneClientSessionImplementation* _implementation = (ZoneClientSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		_implementation->unlock(doLock);
}

void ZoneClientSession::info(const String& msg, bool force) {
	ZoneClientSessionImplementation* _implementation = (ZoneClientSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addAsciiParameter(msg);
		method.addBooleanParameter(force);

		method.executeWithVoidReturn();
	} else
		_implementation->info(msg, force);
}

void ZoneClientSession::error(const String& msg) {
	ZoneClientSessionImplementation* _implementation = (ZoneClientSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addAsciiParameter(msg);

		method.executeWithVoidReturn();
	} else
		_implementation->error(msg);
}

void ZoneClientSession::_acquire() {
	ZoneClientSessionImplementation* _implementation = (ZoneClientSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		method.executeWithVoidReturn();
	} else
		_implementation->acquire();
}

void ZoneClientSession::_release() {
	ZoneClientSessionImplementation* _implementation = (ZoneClientSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);

		method.executeWithVoidReturn();
	} else
		_implementation->release();
}

String ZoneClientSession::getAddress() {
	ZoneClientSessionImplementation* _implementation = (ZoneClientSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);

		method.executeWithAsciiReturn(_return_getAddress);
		return _return_getAddress;
	} else
		return _implementation->getAddress();
}

void ZoneClientSession::setPlayer(SceneObject* playerCreature) {
	ZoneClientSessionImplementation* _implementation = (ZoneClientSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addObjectParameter(playerCreature);

		method.executeWithVoidReturn();
	} else
		_implementation->setPlayer(playerCreature);
}

void ZoneClientSession::setSessionKey(unsigned int key) {
	ZoneClientSessionImplementation* _implementation = (ZoneClientSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addUnsignedIntParameter(key);

		method.executeWithVoidReturn();
	} else
		_implementation->setSessionKey(key);
}

void ZoneClientSession::setAccountID(unsigned int id) {
	ZoneClientSessionImplementation* _implementation = (ZoneClientSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addUnsignedIntParameter(id);

		method.executeWithVoidReturn();
	} else
		_implementation->setAccountID(id);
}

SceneObject* ZoneClientSession::getPlayer() {
	ZoneClientSessionImplementation* _implementation = (ZoneClientSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return _implementation->getPlayer();
}

unsigned int ZoneClientSession::getSessionKey() {
	ZoneClientSessionImplementation* _implementation = (ZoneClientSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);

		return method.executeWithUnsignedIntReturn();
	} else
		return _implementation->getSessionKey();
}

unsigned int ZoneClientSession::getAccountID() {
	ZoneClientSessionImplementation* _implementation = (ZoneClientSessionImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);

		return method.executeWithUnsignedIntReturn();
	} else
		return _implementation->getAccountID();
}

DistributedObjectServant* ZoneClientSession::_getImplementation() {
	return _impl;}

void ZoneClientSession::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	ZoneClientSessionImplementation
 */

ZoneClientSessionImplementation::ZoneClientSessionImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}


ZoneClientSessionImplementation::~ZoneClientSessionImplementation() {
}


void ZoneClientSessionImplementation::finalize() {
}

void ZoneClientSessionImplementation::_initializeImplementation() {
	_setClassHelper(ZoneClientSessionHelper::instance());

	_serializationHelperMethod();
}

void ZoneClientSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (ZoneClientSession*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ZoneClientSessionImplementation::_getStub() {
	return _this;
}

ZoneClientSessionImplementation::operator const ZoneClientSession*() {
	return _this;
}

void ZoneClientSessionImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("ZoneClientSession");

	addSerializableVariable("player", &player);
	addSerializableVariable("sessionKey", &sessionKey);
	addSerializableVariable("accountID", &accountID);
	addSerializableVariable("disconnecting", &disconnecting);
}

void ZoneClientSessionImplementation::balancePacketCheckupTime() {
	// server/zone/ZoneClientSession.idl(78):  		BaseClientProxy.balancePacketCheckupTime();
	BaseClientProxy::balancePacketCheckupTime();
}

void ZoneClientSessionImplementation::resetPacketCheckupTime() {
	// server/zone/ZoneClientSession.idl(82):  		BaseClientProxy.resetPacketCheckupTime();
	BaseClientProxy::resetPacketCheckupTime();
}

void ZoneClientSessionImplementation::info(const String& msg, bool force) {
	// server/zone/ZoneClientSession.idl(91):  		Logger.info(msg, force);
	Logger::info(msg, force);
}

void ZoneClientSessionImplementation::error(const String& msg) {
	// server/zone/ZoneClientSession.idl(95):  		Logger.error(msg);
	Logger::error(msg);
}

String ZoneClientSessionImplementation::getAddress() {
	// server/zone/ZoneClientSession.idl(105):  		return BaseClientProxy.getAddress();
	return BaseClientProxy::getAddress();
}

void ZoneClientSessionImplementation::setPlayer(SceneObject* playerCreature) {
	// server/zone/ZoneClientSession.idl(110):  		player 
	if (playerCreature != player){
	// server/zone/ZoneClientSession.idl(111):  
	if (playerCreature == NULL && player != NULL){
	// server/zone/ZoneClientSession.idl(112):  				ZoneServer zoneServer = player.getZoneServer();
	ZoneServer* zoneServer = player->getZoneServer();
	// server/zone/ZoneClientSession.idl(114):  				zoneServer.decreaseOnlinePlayers();
	zoneServer->decreaseOnlinePlayers();
}

	else 	// server/zone/ZoneClientSession.idl(115):  		}
	if (playerCreature != player){
	// server/zone/ZoneClientSession.idl(116):  				ZoneServer zoneServer = playerCreature.getZoneServer();
	ZoneServer* zoneServer = playerCreature->getZoneServer();
	// server/zone/ZoneClientSession.idl(118):  				zoneServer.increaseOnlinePlayers();
	zoneServer->increaseOnlinePlayers();
}
}
	// server/zone/ZoneClientSession.idl(122):  = playerCreature;
	player = playerCreature;
}

void ZoneClientSessionImplementation::setSessionKey(unsigned int key) {
	// server/zone/ZoneClientSession.idl(126):  		sessionKey = key;
	sessionKey = key;
}

void ZoneClientSessionImplementation::setAccountID(unsigned int id) {
	// server/zone/ZoneClientSession.idl(130):  		accountID = id;
	accountID = id;
}

SceneObject* ZoneClientSessionImplementation::getPlayer() {
	// server/zone/ZoneClientSession.idl(134):  		return player;
	return player;
}

unsigned int ZoneClientSessionImplementation::getSessionKey() {
	// server/zone/ZoneClientSession.idl(138):  		return sessionKey;
	return sessionKey;
}

unsigned int ZoneClientSessionImplementation::getAccountID() {
	// server/zone/ZoneClientSession.idl(142):  		return accountID;
	return accountID;
}

/*
 *	ZoneClientSessionAdapter
 */

ZoneClientSessionAdapter::ZoneClientSessionAdapter(ZoneClientSessionImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* ZoneClientSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		disconnect();
		break;
	case 7:
		disconnect(inv->getBooleanParameter());
		break;
	case 8:
		sendMessage((BasePacket*) inv->getObjectParameter());
		break;
	case 9:
		balancePacketCheckupTime();
		break;
	case 10:
		resetPacketCheckupTime();
		break;
	case 11:
		closeConnection(inv->getBooleanParameter(), inv->getBooleanParameter());
		break;
	case 12:
		lock(inv->getBooleanParameter());
		break;
	case 13:
		unlock(inv->getBooleanParameter());
		break;
	case 14:
		info(inv->getAsciiParameter(_param0_info__String_bool_), inv->getBooleanParameter());
		break;
	case 15:
		error(inv->getAsciiParameter(_param0_error__String_));
		break;
	case 16:
		acquire();
		break;
	case 17:
		release();
		break;
	case 18:
		resp->insertAscii(getAddress());
		break;
	case 19:
		setPlayer((SceneObject*) inv->getObjectParameter());
		break;
	case 20:
		setSessionKey(inv->getUnsignedIntParameter());
		break;
	case 21:
		setAccountID(inv->getUnsignedIntParameter());
		break;
	case 22:
		resp->insertLong(getPlayer()->_getObjectID());
		break;
	case 23:
		resp->insertInt(getSessionKey());
		break;
	case 24:
		resp->insertInt(getAccountID());
		break;
	default:
		return NULL;
	}

	return resp;
}

void ZoneClientSessionAdapter::disconnect() {
	((ZoneClientSessionImplementation*) impl)->disconnect();
}

void ZoneClientSessionAdapter::disconnect(bool doLock) {
	((ZoneClientSessionImplementation*) impl)->disconnect(doLock);
}

void ZoneClientSessionAdapter::sendMessage(BasePacket* msg) {
	((ZoneClientSessionImplementation*) impl)->sendMessage(msg);
}

void ZoneClientSessionAdapter::balancePacketCheckupTime() {
	((ZoneClientSessionImplementation*) impl)->balancePacketCheckupTime();
}

void ZoneClientSessionAdapter::resetPacketCheckupTime() {
	((ZoneClientSessionImplementation*) impl)->resetPacketCheckupTime();
}

void ZoneClientSessionAdapter::closeConnection(bool lockPlayer, bool doLock) {
	((ZoneClientSessionImplementation*) impl)->closeConnection(lockPlayer, doLock);
}

void ZoneClientSessionAdapter::lock(bool doLock) {
	((ZoneClientSessionImplementation*) impl)->lock(doLock);
}

void ZoneClientSessionAdapter::unlock(bool doLock) {
	((ZoneClientSessionImplementation*) impl)->unlock(doLock);
}

void ZoneClientSessionAdapter::info(const String& msg, bool force) {
	((ZoneClientSessionImplementation*) impl)->info(msg, force);
}

void ZoneClientSessionAdapter::error(const String& msg) {
	((ZoneClientSessionImplementation*) impl)->error(msg);
}

void ZoneClientSessionAdapter::acquire() {
	((ZoneClientSessionImplementation*) impl)->acquire();
}

void ZoneClientSessionAdapter::release() {
	((ZoneClientSessionImplementation*) impl)->release();
}

String ZoneClientSessionAdapter::getAddress() {
	return ((ZoneClientSessionImplementation*) impl)->getAddress();
}

void ZoneClientSessionAdapter::setPlayer(SceneObject* playerCreature) {
	((ZoneClientSessionImplementation*) impl)->setPlayer(playerCreature);
}

void ZoneClientSessionAdapter::setSessionKey(unsigned int key) {
	((ZoneClientSessionImplementation*) impl)->setSessionKey(key);
}

void ZoneClientSessionAdapter::setAccountID(unsigned int id) {
	((ZoneClientSessionImplementation*) impl)->setAccountID(id);
}

SceneObject* ZoneClientSessionAdapter::getPlayer() {
	return ((ZoneClientSessionImplementation*) impl)->getPlayer();
}

unsigned int ZoneClientSessionAdapter::getSessionKey() {
	return ((ZoneClientSessionImplementation*) impl)->getSessionKey();
}

unsigned int ZoneClientSessionAdapter::getAccountID() {
	return ((ZoneClientSessionImplementation*) impl)->getAccountID();
}

/*
 *	ZoneClientSessionHelper
 */

ZoneClientSessionHelper* ZoneClientSessionHelper::staticInitializer = ZoneClientSessionHelper::instance();

ZoneClientSessionHelper::ZoneClientSessionHelper() {
	className = "ZoneClientSession";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ZoneClientSessionHelper::finalizeHelper() {
	ZoneClientSessionHelper::finalize();
}

DistributedObject* ZoneClientSessionHelper::instantiateObject() {
	return new ZoneClientSession(DummyConstructorParameter::instance());
}

DistributedObjectServant* ZoneClientSessionHelper::instantiateServant() {
	return new ZoneClientSessionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ZoneClientSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ZoneClientSessionAdapter((ZoneClientSessionImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

