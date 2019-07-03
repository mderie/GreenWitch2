/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"
#include "exprtk.hpp"
#include "ConfigurationFiles.hpp"
#include "CommonStuffs.hpp"

//==============================================================================
MainComponent::MainComponent()
{
	logThis("Session start", Target::misc);

    setSize (600, 400);

	restoreLastSession();
}

MainComponent::~MainComponent()
{
	logThis("Session stop", Target::misc);

	if (m_midiInput != nullptr)
	{
		m_midiInput->stop();
		delete m_midiInput;
	}

	if (m_midiOutput != nullptr)
	{
		// Needed ?
		//midiOutput->stop();
		delete m_midiOutput;
	}
}

void MainComponent::handleIncomingMidiMessage(juce::MidiInput* source, const juce::MidiMessage& message)
{	
	std::stringstream ss;
	const juce::uint8* p = message.getRawData();
	for (int i = 0; i < message.getRawDataSize(); i++) // Should be 3 bytes all the time
	{
		ss << std::hex << static_cast<int>(*(p + i)) << std::endl;
	}
	logThis2("Incomming message from device TODO : %s", Target::midi, ss.str());

	//TODO: ...
}

void MainComponent::backupCurrentSession()
{
	//TODO: ...
}

void MainComponent::restoreLastSession()
{
	String filePath = File::getCurrentWorkingDirectory().getFullPathName();
	ConfigurationFile cf(filePath.toStdString() + PATH_SEPARATOR + "GreenWitch2.ini");
	//TODO: ...
}

void MainComponent::buttonClicked(Button *sender)
{
	if (sender == &btnOk)
	{
	}
	else if (sender == &btnCancel)
	{
	}
}

void MainComponent::comboBoxChanged(ComboBox *sender)
{
	//logThis("Step 0", Target::misc);
	//return;
	if (sender == &cboInO)
	{
	}
	else if (sender == &cboOutO)
	{
	}
}
//==============================================================================
void MainComponent::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

	//TODO: Work on transparancy ! And On full screen stretch ? See event resized below :)

	/*
    g.setFont (Font (16.0f));
    g.setColour (Colours::white);
    g.drawText ("Hello World!", getLocalBounds(), Justification::centred, true);
	*/

	Image background = juce::ImageCache::getFromMemory(BinaryData::background_jpg, BinaryData::background_jpgSize);
	g.drawImageAt(background, 0, 0);
}

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}
