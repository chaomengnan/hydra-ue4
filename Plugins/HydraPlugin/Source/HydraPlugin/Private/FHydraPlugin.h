#pragma once

class DataCollector;
class HydraDelegate;

class FHydraPlugin : public IHydraPlugin
{
public:
	/** IModuleInterface implementation */
	void StartupModule();
	void ShutdownModule();

	/** To subscribe to event calls, only supports one listener for now */
	void SetDelegate(HydraDelegate* newDelegate);

	/** Call this in your class Tick to update information */
	void HydraTick(float DeltaTime);

private:
	DataCollector *collector;
	void* DLLHandle;
};