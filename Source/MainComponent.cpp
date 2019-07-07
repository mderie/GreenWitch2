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

	txtFormula.addListener(this);
	txtFormula.setBounds(200, 16, 100, 16);
	addAndMakeVisible(txtFormula);

	btnOk.addListener(this);
	btnOk.setBounds(200 + 100, 16, 16, 16);
	btnOk.setButtonText("Ok"); //TODO: Not meant to be text bug glyph		
	addAndMakeVisible(btnOk);

	btnCancel.addListener(this);	
	btnCancel.setBounds(200 + 100 + 16, 16, 16, 16);
	btnCancel.setButtonText("Cancel");
	addAndMakeVisible(btnCancel);

	lblIn.setBounds(40, 16, 40, 16);
	lblIn.setColour(Label::textColourId, Colour(0, 255, 0));
	lblIn.setText("In", NotificationType::dontSendNotification);
	addAndMakeVisible(lblIn);

	lblOut.setBounds(440, 16, 40, 16);
	lblOut.setColour(Label::textColourId, Colour(0, 255, 0));
	lblOut.setText("Out", NotificationType::dontSendNotification);
	addAndMakeVisible(lblOut);

	cboInO.addListener(this);
	cboInO.setBounds(40, 40, 100, 16);
	addAndMakeVisible(cboInO);

	cboOutO.addListener(this);
	cboOutO.setBounds(40 + 200, 40, 100, 16);
	addAndMakeVisible(cboOutO);

	txtInA0.addListener(this);
	txtInA0.setBounds(40 + 120, 40, 40, 16);
	addAndMakeVisible(txtInA0);

	txtInB0.addListener(this);
	txtInB0.setBounds(40 + 180, 40, 40, 16);
	addAndMakeVisible(txtInB0);

	txtInAB0.addListener(this);
	txtInAB0.setBounds(40 + 120, 80, 100, 16);
	addAndMakeVisible(txtInAB0);

	txtOutA0.addListener(this);
	txtOutA0.setBounds(40 + 320, 40, 40, 16);
	addAndMakeVisible(txtOutA0);

	txtOutB0.addListener(this);
	txtOutB0.setBounds(40 + 380, 40, 40, 16);
	addAndMakeVisible(txtOutB0);

	txtOutAB0.addListener(this);
	txtOutAB0.setBounds(40 + 320, 80, 100, 16);
	addAndMakeVisible(txtOutAB0);	

	openAllMidiDevices();
	for (int i = 0; i < m_midiInputDeviceNames.size(); i++)
	{
		cboInO.addItem(m_midiInputDeviceNames[i], i+1);
	}

	for (int i = 0; i < m_midiOutputDeviceNames.size(); i++)
	{
		cboOutO.addItem(m_midiOutputDeviceNames[i], i + 1);
	}

	tryRestoreLastSession();

	//showPage(0);
}

MainComponent::~MainComponent()
{
	logThis("Session stop", Target::misc);

	closeAllMidiDevices();
}

void MainComponent::showPage(int index)
{
	m_currentPage = index;
	
	cboInO.setText(pageControlValues[index]["cboInO"]);
	txtInA0.setText(pageControlValues[index]["txtInA0"]);
	txtInB0.setText(pageControlValues[index]["txtInB0"]);
	txtInAB0.setText(pageControlValues[index]["txtInAB0"]);

	cboOutO.setText(pageControlValues[index]["cboOutO"]);
	txtOutA0.setText(pageControlValues[index]["txtOutA0"]);
	txtOutB0.setText(pageControlValues[index]["txtOutB0"]);
	txtOutAB0.setText(pageControlValues[index]["txtOutAB0"]);

	//TODO: For the other lines...
}

void MainComponent::handleIncomingMidiMessage(juce::MidiInput* source, const juce::MidiMessage& message)
{	
	std::stringstream ss;
	const juce::uint8* p = message.getRawData();
	for (int i = 0; i < message.getRawDataSize(); i++) // Although it should be 3 bytes all the time
	{
		ss << std::hex << static_cast<int>(*(p + i)) << std::endl;
	}
	logThis2("Incomming message from device %s : %s", Target::midi, source->getName(), ss.str());

	//if (...)
	{
		//TODO: ...
	}	
}

void MainComponent::backupCurrentSession()
{
	//TODO: ...
}

void MainComponent::tryRestoreLastSession()
{
	String filePath = File::getCurrentWorkingDirectory().getFullPathName(); //TODO: Review this...
	ConfigurationFile cf(filePath.toStdString() + PATH_SEPARATOR + "GreenWitch2.ini");
	//TODO: ...

	m_sessionChanged = false;
}

void MainComponent::openAllMidiDevices()
{
	m_midiInputDeviceNames = juce::MidiInput::getDevices();
	for (int i = 0; i < m_midiInputDeviceNames.size(); i++)
	{
		m_mids.push_back(juce::MidiInput::openDevice(i, this));
		m_mids[i]->start();
	}
	
	m_midiOutputDeviceNames = juce::MidiOutput::getDevices();
	for (int i = 0; i < m_midiOutputDeviceNames.size(); i++)
	{
		m_mods.push_back(juce::MidiOutput::openDevice(i));
		//m_mods[i]->start();
	}

	// Not available for Windaube ! See LoopMidi as third party free replacement http://www.tobias-erichsen.de/software.html
	// MidiInput::createNewDevice(...)
}

void MainComponent::closeAllMidiDevices()
{
	for (int i = 0; i < m_mids.size(); i++)
	{
		m_mids[i]->stop();
		delete m_mids[i];
	}

	for (int i = 0; i < m_midiOutputDeviceNames.size(); i++)
	{
		//m_mods[i]->stop();
		delete m_mods[i];
	}
}

void MainComponent::buttonClicked(Button *sender)
{
	if (sender == &btnOk)
	{
		m_sessionChanged = true;
		txtTarget.setText(txtFormula.getText());
		pageControlValues[m_currentPage][txtTarget.getName().toStdString()] = txtFormula.getText().toStdString();
	}
	else if (sender == &btnCancel)
	{
		txtFormula.clear();
	}
	else if (sender == &btnFirst)
	{
		showPage(0);
	}
	else if ((sender == &btnPrev) && (m_currentPage > 0))
	{		
		showPage(--m_currentPage);
	}
	else if ((sender == &btnNext) && (m_currentPage < PAGE_COUNT))
	{
		showPage(++m_currentPage);
	}
	else if (sender == &btnLast)
	{
		showPage(PAGE_COUNT - 1);
	}
}

void MainComponent::comboBoxChanged(ComboBox *sender)
{
	//logThis("Step 0", Target::misc);
	//return;
	if (sender == &cboInO)
	{
		//Nothing to do ?
	}
	else if (sender == &cboOutO)
	{
		//Nothing to do ?
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
