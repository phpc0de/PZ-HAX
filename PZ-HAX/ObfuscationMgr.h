#pragma once
#include <Windows.h>
#include <atomic>
#include <vector>
#include "FrostbiteSDK.h"
typedef DWORD64 QWORD;
typedef QWORD _QWORD;

typedef BYTE _BYTE;
typedef DWORD _DWORD;
typedef WORD _WORD;

template<typename T1, typename T2>
struct pair
{
	T1 first;
	T2 second;
};
template<typename T>
struct hash_node
{
	pair<_QWORD, T*> mValue;
	hash_node<T>* mpNext;
};

template<typename T>
struct hashtable
{
	_QWORD vtable;
	hash_node<T>** mpBucketArray;
	unsigned int mnBucketCount;
	unsigned int mnElementCount;
	//...
};

template<typename T>
struct hashtable_iterator
{
	hash_node<T>* mpNode;
	hash_node<T>** mpBucket;
};

class ObfuscationMgr
{
private:
	static ObfuscationMgr* m_pInstance;
	HANDLE keyThread;

	static DWORD64 FindObfuscationMgr(ObfuscationMgr* om);
	inline bool TestMultiPlayerKey(DWORD64 key);
	DWORD64 GetSecret();
	std::vector<fb::ClientPlayer*> PlayerList;
	std::vector<fb::ClientPlayer*> SpectatorList;
	
public:
	DWORD64 m_pGameObfMgr;
	DWORD ProtectedThread;
	ObfuscationMgr();
	~ObfuscationMgr();
	void CheckKeyStatus();
	fb::ClientPlayer* GetLocalPlayer();
	std::vector<fb::ClientPlayer*>* GetPlayers();
	std::vector<fb::ClientPlayer*>* GetSpectators();
	fb::ClientPlayer* GetPlayerById(DWORD id);
	fb::ClientPlayer* GetSpectatorById(DWORD id);
	DWORD64 GetEntityKey(DWORD64 TypeInfo);
	DWORD64 DecryptPtr(DWORD64 EncryptedPtr, DWORD64 PointerKey);

	static ObfuscationMgr* GetInstance();
};

