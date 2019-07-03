/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

#include <map>

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

	Label lblIN, lblOut;
	TextEditor txtFormula;
	TextEditor txtInA0, txtInB0, txtInAB0, txtOutA0, txtOutB0, txtOutAB0; // 16 lines from 0 to F
	ComboBox cboInO, cboOutO;
	TextButton btnOk, btnCancel;

	// How many off them ? No limit... Use array !
	MidiInput* m_midiInput = nullptr;
	MidiOutput* m_midiOutput = nullptr;
	std::map<std::string, MidiInput*> mis;
	std::map<std::string, MidiOutput*> mos;

	void MainComponent::restoreLastSession();
	void MainComponent::backupCurrentSession();
	
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
