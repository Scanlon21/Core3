/*
 *	server/zone/managers/gcw/GCWManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "GCWManager.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/objects/building/BuildingObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/player/PlayerObject.h"

/*
 *	GCWManagerStub
 */

enum {RPC_INITIALIZE__ = 6,RPC_START__,RPC_LOADFACTIONSTRUCTURES__STRING_,RPC_REGISTERGCWBASE__BUILDINGOBJECT_BOOL_,RPC_UNREGISTERGCWBASE__BUILDINGOBJECT_,RPC_PERFORMGCWTASKS__,RPC_STARTVULNERABILITY__BUILDINGOBJECT_,RPC_ENDVULNERABILITY__BUILDINGOBJECT_,RPC_ISBASEVULNERABLE__BUILDINGOBJECT_,RPC_ISBANDIDENTIFIED__BUILDINGOBJECT_,RPC_ISUPLINKJAMMED__BUILDINGOBJECT_,RPC_ISSHUTDOWNSEQUENCESTARTED__BUILDINGOBJECT_,RPC_ISSECURITYTERMSLICED__BUILDINGOBJECT_,RPC_ISPOWEROVERLOADED__BUILDINGOBJECT_,RPC_RESETVULNERABILITY__CREATUREOBJECT_BUILDINGOBJECT_,RPC_SENDBASEDEFENSESTATUS__CREATUREOBJECT_BUILDINGOBJECT_,RPC_DOBASEDESTRUCTION__BUILDINGOBJECT_,RPC_SENDRESETVERIFICATION__CREATUREOBJECT_BUILDINGOBJECT_,RPC_SENDJAMUPLINKMENU__CREATUREOBJECT_BUILDINGOBJECT_,RPC_VERIFYUPLINKBAND__CREATUREOBJECT_BUILDINGOBJECT_INT_,RPC_STARTSLICE__CREATUREOBJECT_BUILDINGOBJECT_,RPC_SENDDNASAMPLEMENU__CREATUREOBJECT_BUILDINGOBJECT_,RPC_COMPLETESECURITYSLICE__TANGIBLEOBJECT_,RPC_FAILSECURITYSLICE__TANGIBLEOBJECT_,RPC_ISTERMINALDAMAGED__TANGIBLEOBJECT_,RPC_ISDNASAMPLED__BUILDINGOBJECT_,RPC_REPAIRTERMINAL__CREATUREOBJECT_TANGIBLEOBJECT_,RPC_ABORTSHUTDOWNSEQUENCE__CREATUREOBJECT_BUILDINGOBJECT_,RPC_PROCESSDNASAMPLE__CREATUREOBJECT_BUILDINGOBJECT_INT_,RPC_HANDLEPOWERREGULATORSWITCH__CREATUREOBJECT_BUILDINGOBJECT_INT_,RPC_SENDPOWERREGULATORCONTROLS__CREATUREOBJECT_BUILDINGOBJECT_,RPC_GETDNAHASH__STRING_,RPC_SCHEDULEBASEDESTRUCTION__BUILDINGOBJECT_,};

GCWManager::GCWManager(Zone* zne) : ManagedService(DummyConstructorParameter::instance()) {
	GCWManagerImplementation* _implementation = new GCWManagerImplementation(zne);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("GCWManager");
}

GCWManager::GCWManager(DummyConstructorParameter* param) : ManagedService(param) {
	_setClassName("GCWManager");
}

GCWManager::~GCWManager() {
}



void GCWManager::initialize() {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZE__);

		method.executeWithVoidReturn();
	} else
		_implementation->initialize();
}

void GCWManager::start() {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_START__);

		method.executeWithVoidReturn();
	} else
		_implementation->start();
}

void GCWManager::loadFactionStructures(const String& zoneName) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_LOADFACTIONSTRUCTURES__STRING_);
		method.addAsciiParameter(zoneName);

		method.executeWithVoidReturn();
	} else
		_implementation->loadFactionStructures(zoneName);
}

void GCWManager::registerGCWBase(BuildingObject* building, bool initializeBase) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_REGISTERGCWBASE__BUILDINGOBJECT_BOOL_);
		method.addObjectParameter(building);
		method.addBooleanParameter(initializeBase);

		method.executeWithVoidReturn();
	} else
		_implementation->registerGCWBase(building, initializeBase);
}

void GCWManager::unregisterGCWBase(BuildingObject* building) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UNREGISTERGCWBASE__BUILDINGOBJECT_);
		method.addObjectParameter(building);

		method.executeWithVoidReturn();
	} else
		_implementation->unregisterGCWBase(building);
}

void GCWManager::performGCWTasks() {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_PERFORMGCWTASKS__);

		method.executeWithVoidReturn();
	} else
		_implementation->performGCWTasks();
}

void GCWManager::startVulnerability(BuildingObject* building) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_STARTVULNERABILITY__BUILDINGOBJECT_);
		method.addObjectParameter(building);

		method.executeWithVoidReturn();
	} else
		_implementation->startVulnerability(building);
}

void GCWManager::endVulnerability(BuildingObject* building) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ENDVULNERABILITY__BUILDINGOBJECT_);
		method.addObjectParameter(building);

		method.executeWithVoidReturn();
	} else
		_implementation->endVulnerability(building);
}

bool GCWManager::isBaseVulnerable(BuildingObject* building) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISBASEVULNERABLE__BUILDINGOBJECT_);
		method.addObjectParameter(building);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isBaseVulnerable(building);
}

bool GCWManager::isBandIdentified(BuildingObject* building) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISBANDIDENTIFIED__BUILDINGOBJECT_);
		method.addObjectParameter(building);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isBandIdentified(building);
}

bool GCWManager::isUplinkJammed(BuildingObject* building) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISUPLINKJAMMED__BUILDINGOBJECT_);
		method.addObjectParameter(building);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isUplinkJammed(building);
}

bool GCWManager::isShutdownSequenceStarted(BuildingObject* building) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISSHUTDOWNSEQUENCESTARTED__BUILDINGOBJECT_);
		method.addObjectParameter(building);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isShutdownSequenceStarted(building);
}

bool GCWManager::isSecurityTermSliced(BuildingObject* building) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISSECURITYTERMSLICED__BUILDINGOBJECT_);
		method.addObjectParameter(building);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isSecurityTermSliced(building);
}

bool GCWManager::isPowerOverloaded(BuildingObject* building) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISPOWEROVERLOADED__BUILDINGOBJECT_);
		method.addObjectParameter(building);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isPowerOverloaded(building);
}

void GCWManager::resetVulnerability(CreatureObject* creature, BuildingObject* building) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_RESETVULNERABILITY__CREATUREOBJECT_BUILDINGOBJECT_);
		method.addObjectParameter(creature);
		method.addObjectParameter(building);

		method.executeWithVoidReturn();
	} else
		_implementation->resetVulnerability(creature, building);
}

void GCWManager::sendBaseDefenseStatus(CreatureObject* creature, BuildingObject* building) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDBASEDEFENSESTATUS__CREATUREOBJECT_BUILDINGOBJECT_);
		method.addObjectParameter(creature);
		method.addObjectParameter(building);

		method.executeWithVoidReturn();
	} else
		_implementation->sendBaseDefenseStatus(creature, building);
}

void GCWManager::doBaseDestruction(BuildingObject* building) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DOBASEDESTRUCTION__BUILDINGOBJECT_);
		method.addObjectParameter(building);

		method.executeWithVoidReturn();
	} else
		_implementation->doBaseDestruction(building);
}

void GCWManager::sendResetVerification(CreatureObject* creature, BuildingObject* building) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDRESETVERIFICATION__CREATUREOBJECT_BUILDINGOBJECT_);
		method.addObjectParameter(creature);
		method.addObjectParameter(building);

		method.executeWithVoidReturn();
	} else
		_implementation->sendResetVerification(creature, building);
}

void GCWManager::sendJamUplinkMenu(CreatureObject* creature, BuildingObject* building) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDJAMUPLINKMENU__CREATUREOBJECT_BUILDINGOBJECT_);
		method.addObjectParameter(creature);
		method.addObjectParameter(building);

		method.executeWithVoidReturn();
	} else
		_implementation->sendJamUplinkMenu(creature, building);
}

void GCWManager::verifyUplinkBand(CreatureObject* creature, BuildingObject* building, int band) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_VERIFYUPLINKBAND__CREATUREOBJECT_BUILDINGOBJECT_INT_);
		method.addObjectParameter(creature);
		method.addObjectParameter(building);
		method.addSignedIntParameter(band);

		method.executeWithVoidReturn();
	} else
		_implementation->verifyUplinkBand(creature, building, band);
}

void GCWManager::startSlice(CreatureObject* creature, BuildingObject* building) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_STARTSLICE__CREATUREOBJECT_BUILDINGOBJECT_);
		method.addObjectParameter(creature);
		method.addObjectParameter(building);

		method.executeWithVoidReturn();
	} else
		_implementation->startSlice(creature, building);
}

void GCWManager::sendDNASampleMenu(CreatureObject* creature, BuildingObject* building) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDDNASAMPLEMENU__CREATUREOBJECT_BUILDINGOBJECT_);
		method.addObjectParameter(creature);
		method.addObjectParameter(building);

		method.executeWithVoidReturn();
	} else
		_implementation->sendDNASampleMenu(creature, building);
}

void GCWManager::completeSecuritySlice(TangibleObject* securityTerminal) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_COMPLETESECURITYSLICE__TANGIBLEOBJECT_);
		method.addObjectParameter(securityTerminal);

		method.executeWithVoidReturn();
	} else
		_implementation->completeSecuritySlice(securityTerminal);
}

void GCWManager::failSecuritySlice(TangibleObject* securityTerminal) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_FAILSECURITYSLICE__TANGIBLEOBJECT_);
		method.addObjectParameter(securityTerminal);

		method.executeWithVoidReturn();
	} else
		_implementation->failSecuritySlice(securityTerminal);
}

bool GCWManager::isTerminalDamaged(TangibleObject* securityTerminal) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISTERMINALDAMAGED__TANGIBLEOBJECT_);
		method.addObjectParameter(securityTerminal);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isTerminalDamaged(securityTerminal);
}

bool GCWManager::isDNASampled(BuildingObject* building) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISDNASAMPLED__BUILDINGOBJECT_);
		method.addObjectParameter(building);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isDNASampled(building);
}

void GCWManager::repairTerminal(CreatureObject* creature, TangibleObject* securityTerminal) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_REPAIRTERMINAL__CREATUREOBJECT_TANGIBLEOBJECT_);
		method.addObjectParameter(creature);
		method.addObjectParameter(securityTerminal);

		method.executeWithVoidReturn();
	} else
		_implementation->repairTerminal(creature, securityTerminal);
}

void GCWManager::abortShutdownSequence(CreatureObject* creature, BuildingObject* building) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ABORTSHUTDOWNSEQUENCE__CREATUREOBJECT_BUILDINGOBJECT_);
		method.addObjectParameter(creature);
		method.addObjectParameter(building);

		method.executeWithVoidReturn();
	} else
		_implementation->abortShutdownSequence(creature, building);
}

void GCWManager::processDNASample(CreatureObject* creature, BuildingObject* building, int indx) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_PROCESSDNASAMPLE__CREATUREOBJECT_BUILDINGOBJECT_INT_);
		method.addObjectParameter(creature);
		method.addObjectParameter(building);
		method.addSignedIntParameter(indx);

		method.executeWithVoidReturn();
	} else
		_implementation->processDNASample(creature, building, indx);
}

void GCWManager::handlePowerRegulatorSwitch(CreatureObject* creature, BuildingObject* building, int indx) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEPOWERREGULATORSWITCH__CREATUREOBJECT_BUILDINGOBJECT_INT_);
		method.addObjectParameter(creature);
		method.addObjectParameter(building);
		method.addSignedIntParameter(indx);

		method.executeWithVoidReturn();
	} else
		_implementation->handlePowerRegulatorSwitch(creature, building, indx);
}

void GCWManager::sendPowerRegulatorControls(CreatureObject* creature, BuildingObject* building) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDPOWERREGULATORCONTROLS__CREATUREOBJECT_BUILDINGOBJECT_);
		method.addObjectParameter(creature);
		method.addObjectParameter(building);

		method.executeWithVoidReturn();
	} else
		_implementation->sendPowerRegulatorControls(creature, building);
}

String GCWManager::getDNAHash(const String& usersample) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETDNAHASH__STRING_);
		method.addAsciiParameter(usersample);

		String _return_getDNAHash;
		method.executeWithAsciiReturn(_return_getDNAHash);
		return _return_getDNAHash;
	} else
		return _implementation->getDNAHash(usersample);
}

void GCWManager::scheduleBaseDestruction(BuildingObject* building) {
	GCWManagerImplementation* _implementation = static_cast<GCWManagerImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SCHEDULEBASEDESTRUCTION__BUILDINGOBJECT_);
		method.addObjectParameter(building);

		method.executeWithVoidReturn();
	} else
		_implementation->scheduleBaseDestruction(building);
}

DistributedObjectServant* GCWManager::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

void GCWManager::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	GCWManagerImplementation
 */

GCWManagerImplementation::GCWManagerImplementation(DummyConstructorParameter* param) : ManagedServiceImplementation(param) {
	_initializeImplementation();
}


GCWManagerImplementation::~GCWManagerImplementation() {
}


void GCWManagerImplementation::finalize() {
}

void GCWManagerImplementation::_initializeImplementation() {
	_setClassHelper(GCWManagerHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void GCWManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<GCWManager*>(stub);
	ManagedServiceImplementation::_setStub(stub);
}

DistributedObjectStub* GCWManagerImplementation::_getStub() {
	return _this.get();
}

GCWManagerImplementation::operator const GCWManager*() {
	return _this.get();
}

void GCWManagerImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void GCWManagerImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void GCWManagerImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void GCWManagerImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void GCWManagerImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void GCWManagerImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void GCWManagerImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void GCWManagerImplementation::_serializationHelperMethod() {
	ManagedServiceImplementation::_serializationHelperMethod();

	_setClassName("GCWManager");

}

void GCWManagerImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(GCWManagerImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool GCWManagerImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ManagedServiceImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "GCWManager.zone") {
		TypeInfo<ManagedReference<Zone* > >::parseFromBinaryStream(&zone, stream);
		return true;
	}


	return false;
}

void GCWManagerImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = GCWManagerImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int GCWManagerImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ManagedServiceImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "GCWManager.zone";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedReference<Zone* > >::toBinaryStream(&zone, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 1;
}

String GCWManagerImplementation::getDNAHash(const String& usersample) {
	Locker _locker(_this.get());
	// server/zone/managers/gcw/GCWManager.idl():  		return dnaHash.get(usersample);
	return (&dnaHash)->get(usersample);
}

void GCWManagerImplementation::addDNAHash(const String& usersample, const String& systemsample) {
	Locker _locker(_this.get());
	// server/zone/managers/gcw/GCWManager.idl():  		dnaHash.put(usersample, systemsample);
	(&dnaHash)->put(usersample, systemsample);
}

bool GCWManagerImplementation::hasBase(BuildingObject* building) {
	Locker _locker(_this.get());
	// server/zone/managers/gcw/GCWManager.idl():  		return gcwBaseList.contains(building);
	return (&gcwBaseList)->contains(building);
}

bool GCWManagerImplementation::dropBase(BuildingObject* building) {
	Locker _locker(_this.get());
	// server/zone/managers/gcw/GCWManager.idl():  		return gcwBaseList.drop(building);
	return (&gcwBaseList)->drop(building);
}

void GCWManagerImplementation::addBase(BuildingObject* building) {
	Locker _locker(_this.get());
	// server/zone/managers/gcw/GCWManager.idl():  		gcwBaseList.put(building);
	(&gcwBaseList)->put(building);
}

BuildingObject* GCWManagerImplementation::getBase(int indx) {
	Locker _locker(_this.get());
	// server/zone/managers/gcw/GCWManager.idl():  		return gcwBaseList.get(indx);
	return (&gcwBaseList)->get(indx);
}

bool GCWManagerImplementation::hasStartTask(unsigned long long id) {
	Locker _locker(_this.get());
	// server/zone/managers/gcw/GCWManager.idl():  		return gcwStartTasks.contains(id);
	return (&gcwStartTasks)->contains(id);
}

bool GCWManagerImplementation::addStartTask(unsigned long long id, Reference<Task*> newTask) {
	Locker _locker(_this.get());
	// server/zone/managers/gcw/GCWManager.idl():  	return 
	if (!(&gcwStartTasks)->contains(id)){
	// server/zone/managers/gcw/GCWManager.idl():  			return gcwStartTasks.put(id, newTask);
	return (&gcwStartTasks)->put(id, newTask);
}
	// server/zone/managers/gcw/GCWManager.idl():  	return false;
	return false;
}

Reference<Task*> GCWManagerImplementation::getStartTask(unsigned long long id) {
	Locker _locker(_this.get());
	// server/zone/managers/gcw/GCWManager.idl():  		return gcwStartTasks.get(id);
	return (&gcwStartTasks)->get(id);
}

bool GCWManagerImplementation::dropStartTask(unsigned long long id) {
	Locker _locker(_this.get());
	// server/zone/managers/gcw/GCWManager.idl():  		return gcwStartTasks.drop(id);
	return (&gcwStartTasks)->drop(id);
}

bool GCWManagerImplementation::hasEndTask(unsigned long long id) {
	Locker _locker(_this.get());
	// server/zone/managers/gcw/GCWManager.idl():  		return gcwEndTasks.contains(id);
	return (&gcwEndTasks)->contains(id);
}

bool GCWManagerImplementation::addEndTask(unsigned long long id, Reference<Task*> newTask) {
	Locker _locker(_this.get());
	// server/zone/managers/gcw/GCWManager.idl():  		return 
	if (!(&gcwEndTasks)->contains(id)){
	// server/zone/managers/gcw/GCWManager.idl():  			return	gcwEndTasks.put(id, newTask);
	return (&gcwEndTasks)->put(id, newTask);
}
	// server/zone/managers/gcw/GCWManager.idl():  		return false;
	return false;
}

Reference<Task*> GCWManagerImplementation::getEndTask(unsigned long long id) {
	Locker _locker(_this.get());
	// server/zone/managers/gcw/GCWManager.idl():  		return gcwEndTasks.get(id);
	return (&gcwEndTasks)->get(id);
}

bool GCWManagerImplementation::dropEndTask(unsigned long long id) {
	Locker _locker(_this.get());
	// server/zone/managers/gcw/GCWManager.idl():  		return gcwEndTasks.drop(id);
	return (&gcwEndTasks)->drop(id);
}

bool GCWManagerImplementation::hasDestroyTask(unsigned long long id) {
	Locker _locker(_this.get());
	// server/zone/managers/gcw/GCWManager.idl():  		return gcwDestroyTasks.contains(id);
	return (&gcwDestroyTasks)->contains(id);
}

bool GCWManagerImplementation::addDestroyTask(unsigned long long id, Reference<Task*> newTask) {
	Locker _locker(_this.get());
	// server/zone/managers/gcw/GCWManager.idl():  		return 
	if (!(&gcwDestroyTasks)->contains(id)){
	// server/zone/managers/gcw/GCWManager.idl():  			return	gcwDestroyTasks.put(id, newTask);
	return (&gcwDestroyTasks)->put(id, newTask);
}
	// server/zone/managers/gcw/GCWManager.idl():  		return false;
	return false;
}

Reference<Task*> GCWManagerImplementation::getDestroyTask(unsigned long long id) {
	Locker _locker(_this.get());
	// server/zone/managers/gcw/GCWManager.idl():  		return gcwDestroyTasks.get(id);
	return (&gcwDestroyTasks)->get(id);
}

bool GCWManagerImplementation::dropDestroyTask(unsigned long long id) {
	Locker _locker(_this.get());
	// server/zone/managers/gcw/GCWManager.idl():  		return gcwDestroyTasks.drop(id);
	return (&gcwDestroyTasks)->drop(id);
}

/*
 *	GCWManagerAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


GCWManagerAdapter::GCWManagerAdapter(GCWManager* obj) : ManagedServiceAdapter(obj) {
}

void GCWManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZE__:
		{
			initialize();
		}
		break;
	case RPC_START__:
		{
			start();
		}
		break;
	case RPC_LOADFACTIONSTRUCTURES__STRING_:
		{
			String zoneName; 
			loadFactionStructures(inv->getAsciiParameter(zoneName));
		}
		break;
	case RPC_REGISTERGCWBASE__BUILDINGOBJECT_BOOL_:
		{
			registerGCWBase(static_cast<BuildingObject*>(inv->getObjectParameter()), inv->getBooleanParameter());
		}
		break;
	case RPC_UNREGISTERGCWBASE__BUILDINGOBJECT_:
		{
			unregisterGCWBase(static_cast<BuildingObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_PERFORMGCWTASKS__:
		{
			performGCWTasks();
		}
		break;
	case RPC_STARTVULNERABILITY__BUILDINGOBJECT_:
		{
			startVulnerability(static_cast<BuildingObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_ENDVULNERABILITY__BUILDINGOBJECT_:
		{
			endVulnerability(static_cast<BuildingObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_ISBASEVULNERABLE__BUILDINGOBJECT_:
		{
			resp->insertBoolean(isBaseVulnerable(static_cast<BuildingObject*>(inv->getObjectParameter())));
		}
		break;
	case RPC_ISBANDIDENTIFIED__BUILDINGOBJECT_:
		{
			resp->insertBoolean(isBandIdentified(static_cast<BuildingObject*>(inv->getObjectParameter())));
		}
		break;
	case RPC_ISUPLINKJAMMED__BUILDINGOBJECT_:
		{
			resp->insertBoolean(isUplinkJammed(static_cast<BuildingObject*>(inv->getObjectParameter())));
		}
		break;
	case RPC_ISSHUTDOWNSEQUENCESTARTED__BUILDINGOBJECT_:
		{
			resp->insertBoolean(isShutdownSequenceStarted(static_cast<BuildingObject*>(inv->getObjectParameter())));
		}
		break;
	case RPC_ISSECURITYTERMSLICED__BUILDINGOBJECT_:
		{
			resp->insertBoolean(isSecurityTermSliced(static_cast<BuildingObject*>(inv->getObjectParameter())));
		}
		break;
	case RPC_ISPOWEROVERLOADED__BUILDINGOBJECT_:
		{
			resp->insertBoolean(isPowerOverloaded(static_cast<BuildingObject*>(inv->getObjectParameter())));
		}
		break;
	case RPC_RESETVULNERABILITY__CREATUREOBJECT_BUILDINGOBJECT_:
		{
			resetVulnerability(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<BuildingObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_SENDBASEDEFENSESTATUS__CREATUREOBJECT_BUILDINGOBJECT_:
		{
			sendBaseDefenseStatus(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<BuildingObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_DOBASEDESTRUCTION__BUILDINGOBJECT_:
		{
			doBaseDestruction(static_cast<BuildingObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_SENDRESETVERIFICATION__CREATUREOBJECT_BUILDINGOBJECT_:
		{
			sendResetVerification(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<BuildingObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_SENDJAMUPLINKMENU__CREATUREOBJECT_BUILDINGOBJECT_:
		{
			sendJamUplinkMenu(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<BuildingObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_VERIFYUPLINKBAND__CREATUREOBJECT_BUILDINGOBJECT_INT_:
		{
			verifyUplinkBand(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<BuildingObject*>(inv->getObjectParameter()), inv->getSignedIntParameter());
		}
		break;
	case RPC_STARTSLICE__CREATUREOBJECT_BUILDINGOBJECT_:
		{
			startSlice(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<BuildingObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_SENDDNASAMPLEMENU__CREATUREOBJECT_BUILDINGOBJECT_:
		{
			sendDNASampleMenu(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<BuildingObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_COMPLETESECURITYSLICE__TANGIBLEOBJECT_:
		{
			completeSecuritySlice(static_cast<TangibleObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_FAILSECURITYSLICE__TANGIBLEOBJECT_:
		{
			failSecuritySlice(static_cast<TangibleObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_ISTERMINALDAMAGED__TANGIBLEOBJECT_:
		{
			resp->insertBoolean(isTerminalDamaged(static_cast<TangibleObject*>(inv->getObjectParameter())));
		}
		break;
	case RPC_ISDNASAMPLED__BUILDINGOBJECT_:
		{
			resp->insertBoolean(isDNASampled(static_cast<BuildingObject*>(inv->getObjectParameter())));
		}
		break;
	case RPC_REPAIRTERMINAL__CREATUREOBJECT_TANGIBLEOBJECT_:
		{
			repairTerminal(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<TangibleObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_ABORTSHUTDOWNSEQUENCE__CREATUREOBJECT_BUILDINGOBJECT_:
		{
			abortShutdownSequence(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<BuildingObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_PROCESSDNASAMPLE__CREATUREOBJECT_BUILDINGOBJECT_INT_:
		{
			processDNASample(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<BuildingObject*>(inv->getObjectParameter()), inv->getSignedIntParameter());
		}
		break;
	case RPC_HANDLEPOWERREGULATORSWITCH__CREATUREOBJECT_BUILDINGOBJECT_INT_:
		{
			handlePowerRegulatorSwitch(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<BuildingObject*>(inv->getObjectParameter()), inv->getSignedIntParameter());
		}
		break;
	case RPC_SENDPOWERREGULATORCONTROLS__CREATUREOBJECT_BUILDINGOBJECT_:
		{
			sendPowerRegulatorControls(static_cast<CreatureObject*>(inv->getObjectParameter()), static_cast<BuildingObject*>(inv->getObjectParameter()));
		}
		break;
	case RPC_GETDNAHASH__STRING_:
		{
			String usersample; 
			resp->insertAscii(getDNAHash(inv->getAsciiParameter(usersample)));
		}
		break;
	case RPC_SCHEDULEBASEDESTRUCTION__BUILDINGOBJECT_:
		{
			scheduleBaseDestruction(static_cast<BuildingObject*>(inv->getObjectParameter()));
		}
		break;
	default:
		throw Exception("Method does not exists");
	}
}

void GCWManagerAdapter::initialize() {
	(static_cast<GCWManager*>(stub))->initialize();
}

void GCWManagerAdapter::start() {
	(static_cast<GCWManager*>(stub))->start();
}

void GCWManagerAdapter::loadFactionStructures(const String& zoneName) {
	(static_cast<GCWManager*>(stub))->loadFactionStructures(zoneName);
}

void GCWManagerAdapter::registerGCWBase(BuildingObject* building, bool initializeBase) {
	(static_cast<GCWManager*>(stub))->registerGCWBase(building, initializeBase);
}

void GCWManagerAdapter::unregisterGCWBase(BuildingObject* building) {
	(static_cast<GCWManager*>(stub))->unregisterGCWBase(building);
}

void GCWManagerAdapter::performGCWTasks() {
	(static_cast<GCWManager*>(stub))->performGCWTasks();
}

void GCWManagerAdapter::startVulnerability(BuildingObject* building) {
	(static_cast<GCWManager*>(stub))->startVulnerability(building);
}

void GCWManagerAdapter::endVulnerability(BuildingObject* building) {
	(static_cast<GCWManager*>(stub))->endVulnerability(building);
}

bool GCWManagerAdapter::isBaseVulnerable(BuildingObject* building) {
	return (static_cast<GCWManager*>(stub))->isBaseVulnerable(building);
}

bool GCWManagerAdapter::isBandIdentified(BuildingObject* building) {
	return (static_cast<GCWManager*>(stub))->isBandIdentified(building);
}

bool GCWManagerAdapter::isUplinkJammed(BuildingObject* building) {
	return (static_cast<GCWManager*>(stub))->isUplinkJammed(building);
}

bool GCWManagerAdapter::isShutdownSequenceStarted(BuildingObject* building) {
	return (static_cast<GCWManager*>(stub))->isShutdownSequenceStarted(building);
}

bool GCWManagerAdapter::isSecurityTermSliced(BuildingObject* building) {
	return (static_cast<GCWManager*>(stub))->isSecurityTermSliced(building);
}

bool GCWManagerAdapter::isPowerOverloaded(BuildingObject* building) {
	return (static_cast<GCWManager*>(stub))->isPowerOverloaded(building);
}

void GCWManagerAdapter::resetVulnerability(CreatureObject* creature, BuildingObject* building) {
	(static_cast<GCWManager*>(stub))->resetVulnerability(creature, building);
}

void GCWManagerAdapter::sendBaseDefenseStatus(CreatureObject* creature, BuildingObject* building) {
	(static_cast<GCWManager*>(stub))->sendBaseDefenseStatus(creature, building);
}

void GCWManagerAdapter::doBaseDestruction(BuildingObject* building) {
	(static_cast<GCWManager*>(stub))->doBaseDestruction(building);
}

void GCWManagerAdapter::sendResetVerification(CreatureObject* creature, BuildingObject* building) {
	(static_cast<GCWManager*>(stub))->sendResetVerification(creature, building);
}

void GCWManagerAdapter::sendJamUplinkMenu(CreatureObject* creature, BuildingObject* building) {
	(static_cast<GCWManager*>(stub))->sendJamUplinkMenu(creature, building);
}

void GCWManagerAdapter::verifyUplinkBand(CreatureObject* creature, BuildingObject* building, int band) {
	(static_cast<GCWManager*>(stub))->verifyUplinkBand(creature, building, band);
}

void GCWManagerAdapter::startSlice(CreatureObject* creature, BuildingObject* building) {
	(static_cast<GCWManager*>(stub))->startSlice(creature, building);
}

void GCWManagerAdapter::sendDNASampleMenu(CreatureObject* creature, BuildingObject* building) {
	(static_cast<GCWManager*>(stub))->sendDNASampleMenu(creature, building);
}

void GCWManagerAdapter::completeSecuritySlice(TangibleObject* securityTerminal) {
	(static_cast<GCWManager*>(stub))->completeSecuritySlice(securityTerminal);
}

void GCWManagerAdapter::failSecuritySlice(TangibleObject* securityTerminal) {
	(static_cast<GCWManager*>(stub))->failSecuritySlice(securityTerminal);
}

bool GCWManagerAdapter::isTerminalDamaged(TangibleObject* securityTerminal) {
	return (static_cast<GCWManager*>(stub))->isTerminalDamaged(securityTerminal);
}

bool GCWManagerAdapter::isDNASampled(BuildingObject* building) {
	return (static_cast<GCWManager*>(stub))->isDNASampled(building);
}

void GCWManagerAdapter::repairTerminal(CreatureObject* creature, TangibleObject* securityTerminal) {
	(static_cast<GCWManager*>(stub))->repairTerminal(creature, securityTerminal);
}

void GCWManagerAdapter::abortShutdownSequence(CreatureObject* creature, BuildingObject* building) {
	(static_cast<GCWManager*>(stub))->abortShutdownSequence(creature, building);
}

void GCWManagerAdapter::processDNASample(CreatureObject* creature, BuildingObject* building, int indx) {
	(static_cast<GCWManager*>(stub))->processDNASample(creature, building, indx);
}

void GCWManagerAdapter::handlePowerRegulatorSwitch(CreatureObject* creature, BuildingObject* building, int indx) {
	(static_cast<GCWManager*>(stub))->handlePowerRegulatorSwitch(creature, building, indx);
}

void GCWManagerAdapter::sendPowerRegulatorControls(CreatureObject* creature, BuildingObject* building) {
	(static_cast<GCWManager*>(stub))->sendPowerRegulatorControls(creature, building);
}

String GCWManagerAdapter::getDNAHash(const String& usersample) {
	return (static_cast<GCWManager*>(stub))->getDNAHash(usersample);
}

void GCWManagerAdapter::scheduleBaseDestruction(BuildingObject* building) {
	(static_cast<GCWManager*>(stub))->scheduleBaseDestruction(building);
}

/*
 *	GCWManagerHelper
 */

GCWManagerHelper* GCWManagerHelper::staticInitializer = GCWManagerHelper::instance();

GCWManagerHelper::GCWManagerHelper() {
	className = "GCWManager";

	Core::getObjectBroker()->registerClass(className, this);
}

void GCWManagerHelper::finalizeHelper() {
	GCWManagerHelper::finalize();
}

DistributedObject* GCWManagerHelper::instantiateObject() {
	return new GCWManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* GCWManagerHelper::instantiateServant() {
	return new GCWManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* GCWManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new GCWManagerAdapter(static_cast<GCWManager*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}
