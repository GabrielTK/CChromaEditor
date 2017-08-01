#pragma once

#include "ChromaSDKPluginTypes.h"
#include "AnimationBase.h"

namespace ChromaSDK
{
	class Animation2D : public AnimationBase
	{
	public:
		Animation2D();
		void Reset();
		EChromaSDKDevice2DEnum GetDevice();
		bool SetDevice(EChromaSDKDevice2DEnum device);
		std::vector<FChromaSDKColorFrame2D>& GetFrames();
		int GetFrameCount();
		float GetDuration(int index);
		void Load();
		void Unload();
		void Play();
		void Stop();
		void Update(float deltaTime);
	private:
		EChromaSDKDevice2DEnum _mDevice;
		std::vector<FChromaSDKColorFrame2D> _mFrames;
	};
}
