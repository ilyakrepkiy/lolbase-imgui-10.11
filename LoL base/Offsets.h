#pragma once
#define TARGET_GAMEVERSION "Version 10.10.320.3039 [PUBLIC]"  // 

#define oNetClient 0x34E7C2C // 												8B 0D ? ? ? ? 85 C9 74 07 8B 01 6A 01 FF 50 08 8B	
#define oChatClientPtr 0x1C41660 //												8B 0D ? ? ? ? 0F 43 44 24 ? 52 50 E8 ? ? ? ? E8 
#define oObjManager 0x1C43C74 //												8B 0D ? ? ? ? E8 ? ? ? ? FF 77						//
#define oZoomClass 0x34DE390 //													A3 ? ? ? ? 83 FA 10 72 32							//
#define oGameInfo 0x34DFC14 // 													A1 ? ? ? ? 83 78 08 02 0F 94 C0
#define oHudInstance 0x1C43CB0 // 												8B 0D ? ? ? ? 6A 00 8B 49 34 E8 ? ? ? ? B0         //
#define oRenderer 0x35074C8 // 													8B 15 ? ? ? ? 83 EC 08 F3
#define oUnderMouseObject 0x2890918 // 											8B 0D ? ? ? ? 89 0D 
#define oD3DRenderer 0x350A0EC // 												A1 ? ? ? ? 89 54 24 18 
#define oWorldToScreen 0x94CC40 // 												83 EC 10 56 E8 ? ? ? ? 8B 08 
#define oLocalPlayer 0x34E63D0 //												A1 ?? ?? ?? ?? 85 C0 74 07 05 ?? ?? ?? ?? EB 02 33 C0 56  //
#define oGameTime 0x34DEB2C // 													F3 0F 11 05 ? ? ? ? 8B 49							//
#define oGetFirstObject 0x2B31C0    //8B 41 14 8B 51 18
#define oGetNextObject 0x2B3F70    //E8 ? ? ? ? 8B F0 85 F6 75 E4
// FUNCTIONS
#define oCastSpell 0x504110 
#define oDrawCircle 0x513580 
#define oGetBasicAttack 0x173810 
#define oGetAttackCastDelay 0x2AE920 
#define oGetAttackDelay 0x2AEA20 
#define oGetPing 0x33BF70// 													E8 ? ? ? ? 8B 4F 2C 85 C9 0F
#define oPingInstance 0x34E7C2C //												8B 0D ? ? ? ? 85 C9 74 07 8B 01 6A 01 FF 50 08 8B
#define oGetSpellState 0x4F80E0 // 												E8 ? ? ? ? 8B F8 8B CB 89  						//	
#define oIsTargetable 0x1E5740 //												56 8B F1 E8 ? ? ? ? 84 C0 74 2E 
#define oIsAlive 0x1B0760 // 													56 8B F1 8B 06 8B 80 ? ? ? ? FF D0 84 C0 74 19		//
#define oIsBaron 0x184EE0 //													56 E8 ? ? ? ? 68 ? ? ? ? 8B 30 
#define oIsTurret 0x1C1C60 // 													E8 ? ? ? ? 83 C4 04 84 C0 74 09 5F					//
#define oIsInhib 0x1C18F0 // 													E8 ? ? ? ? 83 C4 04 84 C0 74 38					//
#define oIsHero 0x1C1A70 // 													E8 ? ? ? ? 83 C4 04 84 C0 74 2B 57				//
#define oIsMinion 0x1C1AB0 // 													E8 ? ? ? ? 83 C4 04 84 C0 74 4A 8B 45				//
#define oIsDragon 0x183240 //  													83 EC 10 A1 ? ? ? ? 33 C4 89 44 24 0C 56 E8		//
#define oIsMissile 0x1C1AD0 //											   		E8 ? ? ? ? 83 C4 04 84 C0 74 1C FF					//
#define oIsNexus 0x1C19F0 //													E8 ? ? ? ? 83 C4 04 84 C0 0F 95 C0 C3 CC 8A
#define oIsNotWall 0x8CFD20 // 													E8 ? ? ? ? 33 C9 83 C4 0C 84						//
#define oIsTroy 0xA6E830  //// 
#define oIssueOrder 0x184F90 // 												81 EC ? ? ? ? 56 57 8B F9 C7						//
#define oPrintChat 0x1BB149C //		//not update											may be wrong

//CObject
#define oObjIndex 0x20
#define oObjTeam 0x4C
#define oObjName 0x6C
#define oObjNetworkID 0xCC
#define oObjPos 0x1D8
#define oObjVisibility 0x39C
#define oObjHealth 0xF88
#define oObjArmor 0x1468
#define oObjBaseAtk 0x1434
#define oObjBonusAtk 0x13B4
#define oObjMoveSpeed 0x147C
#define oObjAtkRange 0x1484
#define oObjBuffMgr 0x2320
#define oObjSpellBook 0x2AD8
#define oObjChampionName 0x358C
#define oObjLevel 0x4EA4

//
#define objectArray 0x14