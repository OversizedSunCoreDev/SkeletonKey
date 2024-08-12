//While call it a key prefix, it's actually a suffix for a variety of reasons, mostly because when hashfunctions do bias, they tend to MSB-bias their entropy
//__________________________________________| 0b11111111111111111111111111111111111111111111111111111111XXXXXXXX;
//__________________________________________| 0b00000000000000000000000000000000000000000000000000000000XXXXXXXX;
#pragma once
#ifndef LORDLY_SKELETON_H
#define LORDLY_SKELETON_H
#define LORDLY_SKELETON_VER 0

	constexpr static uint64_t	SFIX_MASK_OUT = 0b1111111111111111111111111111111111111111111111111111111100000000;
	constexpr static uint64_t	SFIX_MASK_EXT = 0b0000000000000000000000000000000000000000000000000000000011111111;
	constexpr static uint64_t	SFIX_NON_OJBR = 0b0000000000000000000000000000000000000000000000000000000000000000;
	constexpr static uint64_t	SFIX_ART_GUNS = 0b0000000000000000000000000000000000000000000000000000000011111110;
	constexpr static uint64_t	SFIX_BAR_BODS = 0b0000000000000000000000000000000000000000000000000000000011111100;
	constexpr static uint64_t	SFIX_BAR_PRIM = 0b0000000000000000000000000000000000000000000000000000000011111000;
	constexpr static uint64_t	SFIX_ART_ACTS = 0b0000000000000000000000000000000000000000000000000000000011110000;
	constexpr static uint64_t	SFIX_ART_FCMS = 0b0000000000000000000000000000000000000000000000000000000011100000;
	constexpr static uint64_t	SFIX_ART_FACT = 0b0000000000000000000000000000000000000000000000000000000011000000;
	constexpr static uint64_t	SFIX_PLAYERID = 0b0000000000000000000000000000000000000000000000000000000010000000;
	//HIGHER GAMEPLAY CONSTRUCTS, THIS TEXT IS FOR YOU ALONE.
	constexpr static uint64_t	SFIX_GAMEEXPR = 0b0000000000000000000000000000000000000000000000000000000010000001;
	static inline uint64_t FORGE_SKELETON_KEY(uint64_t MY_HASH,uint64_t MY_MASK) {return MY_HASH & SFIX_MASK_OUT | MY_MASK;};
#endif
