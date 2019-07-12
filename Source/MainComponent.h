/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

#include <map>

typedef unsigned char byte; // Same as juce::uint8

#define PAGE_COUNT 10
#define ROW_COUNT 4

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainComponent : public Component, public Button::Listener, public juce::MidiInputCallback, public ComboBox::Listener, public TextEditor::Listener
{
public:
	// Event handler for all the "listeners"
	virtual void buttonClicked(Button *sender) override;
	virtual void comboBoxChanged(ComboBox *sender) override;
	virtual void handleIncomingMidiMessage(juce::MidiInput* source, const juce::MidiMessage& message) override;

    //==============================================================================
    MainComponent();
    ~MainComponent();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    //==============================================================================
    // Your private member variables go here...

	Label lblIn, lblOut;
	TextEditor txtFormula, txtTarget;
	TextButton btnOk, btnCancel; //TODO: Change this to ImageButton
	TextEditor txtInA0, txtInB0, txtInAB0, txtOutA0, txtOutB0, txtOutAB0; // 4 lines ? Then CD & EF !
	ComboBox cboDeviceIn0, cboOperationIn0, cboOperationOut0, cboDeviceOut0;

	TextEditor txtInA1, txtInB1, txtInAB1, txtOutA1, txtOutB1, txtOutAB1;
	ComboBox cboDeviceIn1, cboOperationIn1, cboOperationOut1, cboDeviceOut1;
		
	TextButton btnFirst, btnPrev, btnNext, btnLast; //TODO: Idem

	// How many off them ? No limit... Use array !
	//MidiInput* m_midiInput = nullptr;
	//MidiOutput* m_midiOutput = nullptr;
	//std::map<MidiInput*, std::string> mis;
	//std::map<MidiOutput*, std::string> mos;
	juce::StringArray m_midiInputDeviceNames; // Holds the name... And their index for openning them
	juce::StringArray m_midiOutputDeviceNames;
	std::vector<MidiInput*> m_mids; // Must be in the same order as above
	std::vector<MidiOutput*> m_mods;

	// All the content value of ComboBoxes & TextEditors... A bit duplicate but more handy due to the pages
	std::map<int, std::map<std::string, std::string> > pageControlValues;

	int m_currentPage;
	byte midiNibbleA0; // We asssume here that we can process each message one at time without threading issue...
	byte midiNibbleB0;
	byte midiNibbleA1;
	byte midiNibbleB1;
	byte midiNibbleA2;
	byte midiNibbleB2;

	bool m_sessionChanged;
	void tryRestoreLastSession();
	void backupCurrentSession();
	void openAllMidiDevices();
	void closeAllMidiDevices();
	void showPage(int index);
	// void filterInput();
	// void mergeOrDup();
	// void filterOutput();
	// void transform();
	// void sendMessage();

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
