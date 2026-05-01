#include "includes.h"

namespace SupportLayerHook {
  inline void(*customSetup)(CCLayerColor*);
  void customSetupH(CCLayerColor* self) {
    auto mainLayer = static_cast<CCLayer*>(self->getChildren()->objectAtIndex(0));
    SupportLayerHook::customSetup(self);

    auto director = CCDirector::sharedDirector();
    auto winSize = director->getWinSize();

    auto label = CCLabelBMFont::create("Nala's 1.8 GDPS Extension. Made by Pololak.", "chatFont.fnt");
    label->setPosition(winSize.width / 2.f, director->getScreenBottom() + 10.f);
    label->setScale(.8f);
    label->setOpacity(50);
    mainLayer->addChild(label, 10);
  }
}

namespace LevelToolsHook {
  inline const char*(*getAudioTitle)(int);
  const char* getAudioTitleH(int id) {
    switch (id) {
      case -1: return "Practice: Stay Inside Me";
      case 0: return "Stereo Madness";
      case 1: return "Back On Track";
      case 2: return "Polargeist";
      case 3: return "Dry Out";
      case 4: return "Base After Base";
      case 5: return "Cant Let Go";
      case 6: return "Jumper";
      case 7: return "Time Machine";
      case 8: return "Cycles";
      case 9: return "xStep";
      case 10: return "Clutterfunk";
      case 11: return "Theory Of Everything";
      case 12: return "Electroman Adventures";
      case 13: return "Clubstep";
      case 14: return "Electrodynamix";
      case 15: return "Hexagon Force";
      // New songs
      case 16: return "The Beginning of Time";
      case 17: return "Leaving Leafwood Forest";
      case 18: return "Solar Wind";
      case 19: return "Chaoz Airflow";
      case 20: return "Ultimate Destruction";
      case 21: return "Milky Ways";
      case 22: return "Race Around The World";
      case 23: return "Insomnia (F-777 Remix)";
      case 24: return "Glittering Shores";
      case 25: return "Forsaken Neon";
      case 26: return "Fisher Price";
      case 27: return "Betrayal Of Fate";
      case 28: return "Endgame";
      case 29: return "Robotic Nightmares";
      case 30: return "I Like Your Face";
      case 31: return "Chaoz Impact";
      default: return "Unknown";
    }
  }

  inline const char*(*nameForArtist)(int);
  const char* nameForArtistH(int id) {
    switch (id) {
      case 0: return "DJVI";
      case 1: return "Waterflame";
      case 2: return "OcularNebula";
      case 3: return "ForeverBound";
      case 4: return "Step";
      case 5: return "DJ-Nate";
      case 6: return "Bossfight";
      case 7: return "Jumper";
      case 8: return "ParagonX9";
      case 9: return "TMM43";
      case 10: return "FijiWiji";
      case 11: return "Dimrain47";
      case 12: return "MacMelto";
      case 13: return "Goukisan";
      case 14: return "Xtrullor";
      default: return " ";
    }
  }

  inline const char*(*ngURLForArtist)(int);
  const char* ngURLForArtistH(int id) {
    switch (id) {
      case 0: return "http://djvi.newgrounds.com/";
      case 1: return "http://waterflame.newgrounds.com/";
      case 2: return "http://ocularnebula.newgrounds.com/";
      case 3: return "http://foreverbound.newgrounds.com/";
      case 4: return "http://step.newgrounds.com/";
      case 5: return "http://dj-nate.newgrounds.com/";
      case 6: return "http://bossfight.newgrounds.com/";
      case 7: return "http://jumper.newgrounds.com/";
      case 8: return "http://paragonx9.newgrounds.com/";
      case 9: return "http://tmm43.newgrounds.com/";
      case 10: return "http://f-777.newgrounds.com/";
      case 11: return "http://dimrain47.newgrounds.com/";
      case 12: return "http://macmelto.newgrounds.com/";
      case 13: return "http://goukisan.newgrounds.com/";
      case 14: return "http://xtrullor.newgrounds.com/";
      default: return 0;
    }
  }

  inline const char*(*urlForAudio)(int);
  const char* urlForAudioH(int id) {
    switch (id) {
      case -1: return "http://www.youtube.com/watch?v=5Epc1Beme90";
      case 0: return "http://www.youtube.com/watch?v=JhKyKEDxo8Q";
      case 1: return "http://www.youtube.com/watch?v=N9vDTYZpqXM";
      case 2: return "http://www.youtube.com/watch?v=4W28wWWxKuQ";
      case 3: return "http://www.youtube.com/watch?v=FnXabH2q2A0";
      case 4: return "http://www.youtube.com/watch?v=TZULkgQPHt0";
      case 5: return "http://www.youtube.com/watch?v=fLnF-QnR1Zw";
      case 6: return "http://www.youtube.com/watch?v=ZXHO4AN_49Q";
      case 7: return "http://www.youtube.com/watch?v=zZ1L9JD6l0g";
      case 8: return "http://www.youtube.com/watch?v=KDdvGZn6Gfs";
      case 9: return "http://www.youtube.com/watch?v=PSvYfVGyQfw";
      case 10: return "http://www.youtube.com/watch?v=D5uJOpItgNg";
      case 11: return "http://www.newgrounds.com/audio/listen/354826";
      case 12: return "http://www.youtube.com/watch?v=Pb6KyewC_Vg";
      case 13: return "http://www.newgrounds.com/audio/listen/396093";
      case 14: return "http://www.newgrounds.com/audio/listen/368392";
      case 15: return "http://www.youtube.com/watch?v=afwK743PL2Y";
      case 16: return "http://www.newgrounds.com/audio/listen/98933";
      case 17: return "http://www.youtube.com/watch?v=g1isQVgBHDQ";
      case 18: return "http://www.newgrounds.com/audio/listen/493898";
      case 19: return "http://www.youtube.com/watch?v=KIqJo_Iqhxs";
      case 20: return "http://www.newgrounds.com/audio/listen/134270";
      case 21: return "http://www.youtube.com/watch?v=_5w8SJ3yVsc";
      case 22: return "http://www.youtube.com/watch?v=0X2OpQAR4xY";
      case 23: return "http://www.youtube.com/watch?v=swjNjuSIwx0";
      case 24: return "http://www.youtube.com/watch?v=kiSX-yZZ3I8";
      case 25: return "http://www.youtube.com/watch?v=ol665FJEqCQ";
      case 26: return "http://www.youtube.com/watch?v=8xnNsWl5QrA";
      case 27: return "http://www.newgrounds.com/audio/listen/137492";
      case 28: return "http://www.youtube.com/watch?v=lrpS69H1RRU";
      case 29: return "http://www.newgrounds.com/audio/listen/444332";
      case 30: return "http://www.youtube.com/watch?v=ej4vS7nu-so";
      case 31: return "http://www.youtube.com/watch?v=BvAnA5XRrUE";
      default: return 0;
    }
  }

  inline const char*(*getAudioFileName)(int);
  const char* getAudioFileNameH(int id) {
    switch (id) {
      case 0: return "StereoMadness.mp3";
      case 2: return "Polargeist.mp3";
      case 3: return "DryOut.mp3";
      case 4: return "BaseAfterBase.mp3";
      case 5: return "CantLetGo.mp3";
      case 6: return "Jumper.mp3";
      case 7: return "TimeMachine.mp3";
      case 8: return "Cycles.mp3";
      case 9: return "xStep.mp3";
      case 10: return "Clutterfunk.mp3";
      case 11: return "TheoryOfEverything.mp3";
      case 12: return "Electroman.mp3";
      case 13: return "Clubstep.mp3";
      case 14: return "Electrodynamix.mp3";
      case 15: return "HexagonForce.mp3";
      case 16: return "BeginningOfTime.mp3";
      case 17: return "LeavingLeafwood.mp3";
      case 18: return "SolarWind.mp3";
      case 19: return "ChaozAirflow.mp3";
      case 20: return "UltimateDestruction.mp3";
      case 21: return "MilkyWays.mp3";
      case 22: return "RaceAroundTheWorld.mp3";
      case 23: return "Insomnia.mp3";
      case 24: return "GlitteringShores.mp3";
      case 25: return "ForsakenNeon.mp3";
      case 26: return "FisherPrice.mp3";
      case 27: return "BetrayalOfFate.mp3";
      case 28: return "Endgame.mp3";
      case 29: return "RoboticNightmares.mp3";
      case 30: return "ILikeYourFace.mp3";
      case 31: return "ChaozImpact.mp3";
      default: return "BackOnTrack.mp3";
    }
  }

  inline int(*artistForAudio)(int);
  int artistForAudioH(int id) {
    int artistIdx[32] = {3, 0, 4, 0, 0, 0, 1, 1, 0, 0, 1, 5, 1, 5, 5, 1, 5, 6, 7, 8, 9, 6, 1, 10, 2, 11, 12, 13, 1, 5, 14, 8};
    if (id == -1) return 2;
    if (id > 31) return 0;
    return artistIdx[id];
  }
}

void ApplyHooks() {
  HOOK("_ZN10LevelTools13getAudioTitleEi", LevelToolsHook::getAudioTitleH, LevelToolsHook::getAudioTitle);
  HOOK("_ZN10LevelTools13nameForArtistEi", LevelToolsHook::nameForArtistH, LevelToolsHook::nameForArtist);
  HOOK("_ZN10LevelTools14artistForAudioEi", LevelToolsHook::artistForAudioH, LevelToolsHook::artistForAudio);
  HOOK("_ZN10LevelTools11urlForAudioEi", LevelToolsHook::urlForAudioH, LevelToolsHook::urlForAudio);
  HOOK("_ZN10LevelTools16getAudioFileNameEi", LevelToolsHook::getAudioFileNameH, LevelToolsHook::getAudioFileName);
  HOOK("_ZN10LevelTools14ngURLForArtistEi", LevelToolsHook::ngURLForArtistH, LevelToolsHook::ngURLForArtist);

  HOOK("_ZN12SupportLayer11customSetupEv", SupportLayerHook::customSetupH, SupportLayerHook::customSetup);
}

void ApplyPatches() {
	PatchManager tmp;

  tmp.addPatch("libcocos2dcpp.so", 0x1d47e8, "1f 28");
  tmp.addPatch("libcocos2dcpp.so", 0x1d479c, "1f 29");
  tmp.addPatch("libcocos2dcpp.so", 0x1d47a0, "1f 21");
  tmp.addPatch("libcocos2dcpp.so", 0x2036fc, "20 2d");

	tmp.Modify();
}

void loader() {
	ApplyHooks();
  ApplyPatches();
}

JNIEXPORT jint JNI_OnLoad(JavaVM *vm, void *reserved)
{
	loader();
	return JNI_VERSION_1_6;
}   


