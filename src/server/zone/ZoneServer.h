/*
 *	server/zone/ZoneServer.h generated by engine3 IDL compiler 0.60
 */

#ifndef ZONESERVER_H_
#define ZONESERVER_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

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

class ZoneProcessServerImplementation;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace managers {
namespace object {

class ObjectManager;

} // namespace object
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::object;

namespace server {
namespace zone {
namespace managers {
namespace player {

class PlayerManager;

} // namespace player
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::player;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace chat {

class ChatManager;

} // namespace chat
} // namespace server

using namespace server::chat;

namespace server {
namespace zone {
namespace managers {
namespace objectcontroller {

class ObjectController;

} // namespace objectcontroller
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::objectcontroller;

namespace server {
namespace zone {
namespace managers {
namespace radial {

class RadialManager;

} // namespace radial
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::radial;

namespace server {
namespace zone {
namespace managers {
namespace professions {

class ProfessionManager;

} // namespace professions
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::professions;

namespace server {
namespace zone {
namespace managers {
namespace resource {

class ResourceManager;

} // namespace resource
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::resource;

namespace server {
namespace zone {
namespace managers {
namespace crafting {

class CraftingManager;

} // namespace crafting
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::crafting;

namespace server {
namespace zone {
namespace managers {
namespace loot {

class LootManager;

} // namespace loot
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::loot;

namespace server {
namespace zone {
namespace managers {
namespace bazaar {

class BazaarManager;

} // namespace bazaar
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::bazaar;

namespace server {
namespace zone {
namespace managers {
namespace minigames {

class FishingManager;

} // namespace minigames
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::minigames;

namespace server {
namespace zone {
namespace managers {
namespace mission {

class MissionManager;

} // namespace mission
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::mission;

namespace server {
namespace zone {
namespace managers {
namespace account {

class AccountManager;

} // namespace account
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::account;

namespace server {
namespace zone {
namespace managers {
namespace minigames {

class GamblingManager;

} // namespace minigames
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::minigames;

namespace server {
namespace zone {
namespace managers {
namespace stringid {

class StringIdManager;

} // namespace stringid
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::stringid;

#include "engine/service/proto/BasePacketHandler.h"

#include "engine/service/DatagramServiceThread.h"

#include "engine/service/ServiceHandler.h"

#include "engine/service/ServiceClient.h"

#include "engine/core/ManagedService.h"

#include "engine/core/TaskManager.h"

#include "engine/log/Logger.h"

#include "system/lang/Exception.h"

#include "system/lang/Time.h"

#include "system/util/Vector.h"

#include "system/net/Socket.h"

#include "system/net/SocketAddress.h"

#include "system/net/Packet.h"

#include "system/thread/atomic/AtomicInteger.h"

namespace server {
namespace zone {

class ZoneServer : public ManagedService {
public:
	static const int OFFLINE = 0;

	static const int LOADING = 1;

	static const int ONLINE = 2;

	static const int LOCKED = 3;

	ZoneServer(int processingThreads, int galaxyid = 2);

	void initializeTransientMembers();

	ServiceClient* createConnection(Socket* sock, SocketAddress& addr);

	void initialize();

	void shutdown();

	void startManagers();

	void startZones();

	void stopManagers();

	void start(int p, int mconn = 10);

	void stop();

	void handleMessage(ServiceClient* client, Packet* message);

	bool handleError(ServiceClient* client, Exception& e);

	void addTotalSentPacket(int count);

	void addTotalResentPacket(int count);

	void printInfo(bool forcedLog = true);

	void printEvents();

	SceneObject* getObject(unsigned long long objectID, bool doLock = true);

	SceneObject* createObject(unsigned int templateCRC, int persistenceLevel = 2, unsigned long long objectID = 0);

	SceneObject* createStaticObject(unsigned int templateCRC, unsigned long long objectID = 0);

	void updateObjectToDatabase(SceneObject* object);

	void updateObjectToStaticDatabase(SceneObject* object);

	void destroyObjectFromDatabase(unsigned long long objectID);

	void lock(bool doLock = true);

	void unlock(bool doLock = true);

	void fixScheduler();

	void changeUserCap(int amount = 50);

	int getConnectionCount();

	void increaseOnlinePlayers();

	void decreaseOnlinePlayers();

	void increaseTotalDeletedPlayers();

	int getGalaxyID();

	String getServerName();

	bool isServerLocked();

	bool isServerOnline();

	bool isServerOffline();

	bool isServerLoading();

	int getServerState();

	Zone* getZone(int index);

	int getZoneCount();

	int getMaxPlayers();

	int getTotalPlayers();

	int getDeletedPlayers();

	PlayerManager* getPlayerManager();

	ChatManager* getChatManager();

	ObjectController* getObjectController();

	MissionManager* getMissionManager();

	RadialManager* getRadialManager();

	ResourceManager* getResourceManager();

	CraftingManager* getCraftingManager();

	LootManager* getLootManager();

	BazaarManager* getBazaarManager();

	FishingManager* getFishingManager();

	GamblingManager* getGamblingManager();

	AccountManager* getAccountManager();

	ProfessionManager* getProfessionManager();

	Time* getStartTimestamp();

	void setServerName(const String& servername);

	void setGalaxyID(int galaxyid);

	void setServerState(int state);

	void setServerStateLocked();

	void setServerStateOnline();

	void loadMessageoftheDay();

	void changeMessageoftheDay(const String& newMOTD);

	String getMessageoftheDay();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ZoneServer(DummyConstructorParameter* param);

	virtual ~ZoneServer();

	String _return_getMessageoftheDay;
	String _return_getServerName;

	friend class ZoneServerHelper;
};

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZoneServerImplementation : public ManagedServiceImplementation, public ServiceHandler, public Logger {
	DatagramServiceThread* datagramService;

	BasePacketHandler* phandler;

	ZoneProcessServerImplementation* processor;

	int procThreadCount;

	Vector<ManagedReference<Zone* > > zones;

	ObjectManager* objectManager;

	ManagedReference<PlayerManager* > playerManager;

	ManagedReference<ChatManager* > chatManager;

	ManagedReference<RadialManager* > radialManager;

	ManagedReference<ResourceManager* > resourceManager;

	ManagedReference<CraftingManager* > craftingManager;

	ManagedReference<LootManager* > lootManager;

	ManagedReference<BazaarManager* > bazaarManager;

	ManagedReference<MissionManager* > missionManager;

	ManagedReference<FishingManager* > fishingManager;

	ManagedReference<GamblingManager* > gamblingManager;

	ManagedReference<AccountManager* > accountManager;

	StringIdManager* stringIdManager;

	int totalSentPackets;

	int totalResentPackets;

	AtomicInteger currentPlayers;

	AtomicInteger maximumPlayers;

	AtomicInteger totalPlayers;

	AtomicInteger totalDeletedPlayers;

	int serverState;

	String name;

	String messageoftheDay;

	int galaxyID;

	Time startTimestamp;

public:
	static const int OFFLINE = 0;

	static const int LOADING = 1;

	static const int ONLINE = 2;

	static const int LOCKED = 3;

	ZoneServerImplementation(int processingThreads, int galaxyid = 2);

	ZoneServerImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	ServiceClient* createConnection(Socket* sock, SocketAddress& addr);

	void initialize();

	void shutdown();

	void startManagers();

	void startZones();

	void stopManagers();

	void start(int p, int mconn = 10);

	void stop();

	void handleMessage(ServiceClient* client, Packet* message);

	bool handleError(ServiceClient* client, Exception& e);

	void addTotalSentPacket(int count);

	void addTotalResentPacket(int count);

	void printInfo(bool forcedLog = true);

	void printEvents();

	SceneObject* getObject(unsigned long long objectID, bool doLock = true);

	SceneObject* createObject(unsigned int templateCRC, int persistenceLevel = 2, unsigned long long objectID = 0);

	SceneObject* createStaticObject(unsigned int templateCRC, unsigned long long objectID = 0);

	void updateObjectToDatabase(SceneObject* object);

	void updateObjectToStaticDatabase(SceneObject* object);

	void destroyObjectFromDatabase(unsigned long long objectID);

	void lock(bool doLock = true);

	void unlock(bool doLock = true);

	void fixScheduler();

	void changeUserCap(int amount = 50);

	int getConnectionCount();

	void increaseOnlinePlayers();

	void decreaseOnlinePlayers();

	void increaseTotalDeletedPlayers();

	int getGalaxyID();

	String getServerName();

	bool isServerLocked();

	bool isServerOnline();

	bool isServerOffline();

	bool isServerLoading();

	int getServerState();

	Zone* getZone(int index);

	int getZoneCount();

	int getMaxPlayers();

	int getTotalPlayers();

	int getDeletedPlayers();

	PlayerManager* getPlayerManager();

	ChatManager* getChatManager();

	ObjectController* getObjectController();

	MissionManager* getMissionManager();

	RadialManager* getRadialManager();

	ResourceManager* getResourceManager();

	CraftingManager* getCraftingManager();

	LootManager* getLootManager();

	BazaarManager* getBazaarManager();

	FishingManager* getFishingManager();

	GamblingManager* getGamblingManager();

	AccountManager* getAccountManager();

	ProfessionManager* getProfessionManager();

	Time* getStartTimestamp();

	void setServerName(const String& servername);

	void setGalaxyID(int galaxyid);

	void setServerState(int state);

	void setServerStateLocked();

	void setServerStateOnline();

	void loadMessageoftheDay();

	void changeMessageoftheDay(const String& newMOTD);

	String getMessageoftheDay();

	ZoneServer* _this;

	operator const ZoneServer*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~ZoneServerImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();

	friend class ZoneServer;
};

class ZoneServerAdapter : public ManagedServiceAdapter {
public:
	ZoneServerAdapter(ZoneServerImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void initialize();

	void shutdown();

	void startManagers();

	void startZones();

	void stopManagers();

	void start(int p, int mconn);

	void stop();

	void addTotalSentPacket(int count);

	void addTotalResentPacket(int count);

	void printInfo(bool forcedLog);

	void printEvents();

	SceneObject* getObject(unsigned long long objectID, bool doLock);

	SceneObject* createObject(unsigned int templateCRC, int persistenceLevel, unsigned long long objectID);

	SceneObject* createStaticObject(unsigned int templateCRC, unsigned long long objectID);

	void updateObjectToDatabase(SceneObject* object);

	void updateObjectToStaticDatabase(SceneObject* object);

	void destroyObjectFromDatabase(unsigned long long objectID);

	void lock(bool doLock);

	void unlock(bool doLock);

	void fixScheduler();

	void changeUserCap(int amount);

	int getConnectionCount();

	void increaseOnlinePlayers();

	void decreaseOnlinePlayers();

	void increaseTotalDeletedPlayers();

	int getGalaxyID();

	String getServerName();

	bool isServerLocked();

	bool isServerOnline();

	bool isServerOffline();

	bool isServerLoading();

	int getServerState();

	Zone* getZone(int index);

	int getZoneCount();

	int getMaxPlayers();

	int getTotalPlayers();

	int getDeletedPlayers();

	PlayerManager* getPlayerManager();

	ChatManager* getChatManager();

	ObjectController* getObjectController();

	MissionManager* getMissionManager();

	RadialManager* getRadialManager();

	ResourceManager* getResourceManager();

	CraftingManager* getCraftingManager();

	LootManager* getLootManager();

	BazaarManager* getBazaarManager();

	FishingManager* getFishingManager();

	GamblingManager* getGamblingManager();

	AccountManager* getAccountManager();

	void setServerName(const String& servername);

	void setGalaxyID(int galaxyid);

	void setServerState(int state);

	void setServerStateLocked();

	void setServerStateOnline();

	void loadMessageoftheDay();

	void changeMessageoftheDay(const String& newMOTD);

	String getMessageoftheDay();

protected:
	String _param0_setServerName__String_;
	String _param0_changeMessageoftheDay__String_;
};

class ZoneServerHelper : public DistributedObjectClassHelper, public Singleton<ZoneServerHelper> {
	static ZoneServerHelper* staticInitializer;

public:
	ZoneServerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ZoneServerHelper>;
};

} // namespace zone
} // namespace server

using namespace server::zone;

#endif /*ZONESERVER_H_*/
