#ifndef __MYCONFIGMANAGER_H
#define __MYCONFIGMANAGER_H
#include "stdlib.h"
#include "SimpleIniConfigReader.h"

using namespace LogConfigTime;

class MyConfigManager//: public MiscTimeAndConfig::ConfigManagerBase
{
	// This method is called by init of the base class to read the configuration values.
	virtual bool readConfiguration(char *filename)
	{
		SimpleIniConfigReader *SIreader = new SimpleIniConfigReader(filename);
		ConfigReader *reader = SIreader;

		showInputImage = reader->getBoolValue("Main","showInputImage");
		verboseColorCodedFrame = reader->getBoolValue("Main","verboseColorCodedFrame");
		interactive = reader->getBoolValue("Main","interactive");
		logFileName = reader->getStringValue("Main","logFileName");
		outputFileName = reader->getStringValue("Main","outputFileName");
		cam0FileName = reader->getStringValue("Main","cam0FileName");
		cam1FileName = reader->getStringValue("Main","cam1FileName");
		cam2FileName = reader->getStringValue("Main","cam2FileName");
		camIntrinsicParamsFileName = reader->getStringValue("Main","camIntrinsicParamsFileName");

		return true;
	}

public:
	void init(char *filename)
	{
		readConfiguration(filename);
	}

	// --- Settings
	bool showInputImage;
	bool verboseColorCodedFrame;
	bool interactive;
	std::string logFileName;
	std::string cam0FileName;
	std::string cam1FileName;
	std::string cam2FileName;
	std::string outputFileName;
	std::string camIntrinsicParamsFileName;
};

#endif

