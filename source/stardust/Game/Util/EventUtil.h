#pragma once

namespace MR 
{
	bool isOnGameEventFlagNormalEnding();
	bool isOnGameEventFlag120PowerStarsEnding();

	void explainFlyingMarioIfAtFirst();

	bool isOnGameEventFlagFlyingMarioAtFirst();

	void onGameEventFlagFlyingMarioAtFirst();

	bool isGalaxyDarkCometAppearInCurrentStage();
	bool isGalaxyQuickCometAppearInCurrentStage();
	bool isGalaxyPurpleCometAppearInCurrentStage();
	bool isGalaxyHorrorCometAppearInCurrentStage(); // always false
	bool isGalaxyRainbowCometAppearInCurrentStage(); // always false
}