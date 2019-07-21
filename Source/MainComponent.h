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
#define NO_DEVICE "<nothing>"
#define CSTOI(x) (x.size() == 0 ? 0 : std::stoi(x)) // Check stoi !-)

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
	virtual void textEditorTextChanged(TextEditor &sender) override; // Oddly enough it is not *sender...
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

	// Header

	Label lblDeviceIn, lblMuteIn, lblTarget, lblReverse, lblDropSysex, lblDeviceOut, lblMuteOut;
	Label lblAIn, lblBIn, lblCIn, lblDIn, lblEIn, lblFIn, lblAOut, lblBOut, lblCOut, lblDOut, lblEOut, lblFOut;

	//Label lblIn, lblOut;
	//TextEditor txtFormula, txtTarget;
	//TextButton btnOk, btnCancel;

	// Each line looks like the following (where xxx[ ] is a checkbox, yyy[] is a combobox & zzz is a textbox) :
	// DeviceIn[] Mute[ ] A    B   C    D   E    F   Target[] Reverse[ ] DropSysex[ ] DeviceOut Mute[ ] A    B   C    D   E    F
	//                    AB[ ] AB CD[ ] CD EF[ ] EF                                                    AB[ ] AB CD[ ] CD EF[ ] EF

	// Line 0

	TextEditor txtInA0, txtInB0, txtInAB0, txtInC0, txtInD0, txtInCD0, txtInE0, txtInF0, txtInEF0;
	TextEditor txtOutA0, txtOutB0, txtOutAB0, txtOutC0, txtOutD0, txtOutCD0, txtOutE0, txtOutF0, txtOutEF0;
	ComboBox cboDeviceIn0;
	ComboBox cboTargetIn0; // Optional merge out 
	ComboBox cboDeviceOut0;
	ToggleButton chkInAB0, chkInCD0, chkInEF0;
	ToggleButton chkOutAB0, chkOutCD0, chkOutEF0;
	ToggleButton chkReverseIn0; // Negate the filter
	ToggleButton chkDropSysexIn0; // Tell if we should drop them or forward them
	ToggleButton chkMuteIn0, chkMuteOut0;

	// Line 1

	TextEditor txtInA1, txtInB1, txtInAB1, txtInC1, txtInD1, txtInCD1, txtInE1, txtInF1, txtInEF1;
	TextEditor txtOutA1, txtOutB1, txtOutAB1, txtOutC1, txtOutD1, txtOutCD1, txtOutE1, txtOutF1, txtOutEF1;
	ComboBox cboDeviceIn1;
	ComboBox cboTargetIn1;
	ComboBox cboDeviceOut1;
	ToggleButton chkInAB1, chkInCD1, chkInEF1;
	ToggleButton chkOutAB1, chkOutCD1, chkOutEF1;
	ToggleButton chkReverseIn1;
	ToggleButton chkDropSysexIn1;
	ToggleButton chkMuteIn1, chkMuteOut1;

	// Line 2

	TextEditor txtInA2, txtInB2, txtInAB2, txtInC2, txtInD2, txtInCD2, txtInE2, txtInF2, txtInEF2;
	TextEditor txtOutA2, txtOutB2, txtOutAB2, txtOutC2, txtOutD2, txtOutCD2, txtOutE2, txtOutF2, txtOutEF2;
	ComboBox cboDeviceIn2;
	ComboBox cboTargetIn2;
	ComboBox cboDeviceOut2;
	ToggleButton chkInAB2, chkInCD2, chkInEF2;
	ToggleButton chkOutAB2, chkOutCD2, chkOutEF2;
	ToggleButton chkReverseIn2;
	ToggleButton chkDropSysexIn2;
	ToggleButton chkMuteIn2, chkMuteOut2;

	// Line 3

	TextEditor txtInA3, txtInB3, txtInAB3, txtInC3, txtInD3, txtInCD3, txtInE3, txtInF3, txtInEF3;
	TextEditor txtOutA3, txtOutB3, txtOutAB3, txtOutC3, txtOutD3, txtOutCD3, txtOutE3, txtOutF3, txtOutEF3;
	ComboBox cboDeviceIn3;
	ComboBox cboTargetIn3;
	ComboBox cboDeviceOut3;
	ToggleButton chkInAB3, chkInCD3, chkInEF3;
	ToggleButton chkOutAB3, chkOutCD3, chkOutEF3;
	ToggleButton chkReverseIn3;
	ToggleButton chkDropSysexIn3;
	ToggleButton chkMuteIn3, chkMuteOut3;

	// Footer

	TextButton btnFirst, btnPrev, btnNext, btnLast; //TODO: Change this to ImageButton (ImageButton btn...;) Then put the associated resource

	juce::StringArray m_midiInputDeviceNames;
	juce::StringArray m_midiInputDeviceNamesAvail;
	juce::StringArray m_midiInputDeviceNamesInUse;
	juce::StringArray m_midiOutputDeviceNames;
	juce::StringArray m_midiOutputDeviceNamesAvail;
	juce::StringArray m_midiOutputDeviceNamesInUse;

	std::vector<MidiInput*> m_mids; // Must be in the same order as above
	std::vector<MidiOutput*> m_mods;

	// All the content value of the Buttons, ComboBoxes & TextEditors... A bit duplicate but more handy due to the pages
	// Moreover, we don't have to store the associated pointer to control to find it back
	std::map<int, std::map<std::string, std::string> > pageControlValues; // Page -> Control name -> Control value

	int m_currentPage;
	bool m_sessionChanged;
	
	// well, we asssume here that we can process each message one at time without threading issue...
	byte midiInByte0;
	byte midiInHighNibble0; 
	byte midiInLowNibble0;
	byte midiInByte1;
	byte midiInHighNibble1;
	byte midiInLowNibble1;
	byte midiInByte2;
	byte midiInHighNibble2;
	byte midiInLowNibble2;

	byte midiOutByte0;
	byte midiOutHighNibble0;
	byte midiOutLowNibble0;
	byte midiOutByte1;
	byte midiOutHighNibble1;
	byte midiOutLowNibble1;
	byte midiOutByte2;
	byte midiOutHighNibble2;
	byte midiOutLowNibble2;

	void tryRestoreLastSession();
	void backupCurrentSession();
	void openAllMidiDevices();
	void closeAllMidiDevices();
	void showPage(int index);
	// KO void ahu(int *p, q);
	void ReserveOutDevice(const std::string &deviceName); // One out line is associated to this device
	void RestoreOutDevice(const std::string &deviceName); // The device can now be used somewhere else

	bool filter(int page, int row);
	void process(int pageIn, int rowIn, int pageOut, int rowOut);
	std::string dump(const juce::MidiMessage &mm);
	bool compare(const std::string &filterValue, byte currentValue);
	void transform(int page, int row);
	juce::MidiMessage generate(int page, int row);

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
