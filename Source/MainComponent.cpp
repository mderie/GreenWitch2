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

	// Common top

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

	// IN

	// Line 0

	cboDeviceIn0.addListener(this);
	cboDeviceIn0.setBounds(20, 40, 80, 16);
	cboDeviceIn0.setName("cboDeviceIn0");
	addAndMakeVisible(cboDeviceIn0);

	txtInA0.addListener(this);
	txtInA0.setBounds(20 + 120, 40, 40, 16);
	addAndMakeVisible(txtInA0);

	txtInB0.addListener(this);
	txtInB0.setBounds(20 + 180, 40, 40, 16);
	addAndMakeVisible(txtInB0);

	txtInAB0.addListener(this);
	txtInAB0.setBounds(20 + 120, 60, 80, 16);
	addAndMakeVisible(txtInAB0);

	//TODO: CD & EF

	cboOperationIn0.addListener(this);
	cboOperationIn0.setBounds(20 + 220, 40, 80, 16);
	cboOperationIn0.addItem("Merge to xxx", 1);
	cboOperationIn0.addItem("Mute", 2);
	cboOperationIn0.setName("cboOperationIn0");
	addAndMakeVisible(cboOperationIn0);

	// Line 1

	cboDeviceIn1.addListener(this);
	cboDeviceIn1.setBounds(20, 70, 80, 16);
	cboDeviceIn1.setName("cboDeviceIn1");
	addAndMakeVisible(cboDeviceIn1);

	txtInA1.addListener(this);
	txtInA1.setBounds(20 + 120, 70, 40, 16);
	addAndMakeVisible(txtInA1);

	txtInB1.addListener(this);
	txtInB1.setBounds(20 + 180, 70, 40, 16);
	addAndMakeVisible(txtInB1);

	txtInAB1.addListener(this);
	txtInAB1.setBounds(20 + 120, 90, 80, 16);
	addAndMakeVisible(txtInAB1);

	//TODO: CD & EF

	cboOperationIn1.addListener(this);
	cboOperationIn1.setBounds(20 + 220, 70, 80, 16);
	cboOperationIn1.addItem("Merge to xxx", 1);
	cboOperationIn1.addItem("Mute", 2);
	cboOperationIn1.setName("cboOperationIn1");
	addAndMakeVisible(cboOperationIn1);

	// OUT

	// Line 0

	cboOperationOut0.addListener(this);
	cboOperationOut0.setBounds(20 + 300, 40, 80, 16);
	cboOperationOut0.addItem("Dup from xxx", 1);
	cboOperationOut0.addItem("Mute", 2);
	cboOperationOut0.setName("cboOperationOut0");
	addAndMakeVisible(cboOperationOut0);

	cboDeviceOut0.addListener(this);
	cboDeviceOut0.setBounds(20 + 400, 40, 80, 16);
	cboDeviceOut0.setName("cboDeviceOut0");
	addAndMakeVisible(cboDeviceOut0);

	txtOutA0.addListener(this);
	txtOutA0.setBounds(20 + 500, 40, 40, 16);
	addAndMakeVisible(txtOutA0);

	txtOutB0.addListener(this);
	txtOutB0.setBounds(20 + 560, 40, 40, 16);
	addAndMakeVisible(txtOutB0);

	txtOutAB0.addListener(this);
	txtOutAB0.setBounds(20 + 560, 60, 40, 16);
	addAndMakeVisible(txtOutAB0);

	//TODO: CD & EF

	// Line 1

	cboOperationOut1.addListener(this);
	cboOperationOut1.setBounds(20 + 300, 70, 80, 16);
	cboOperationOut1.addItem("Dup from xxx", 1);
	cboOperationOut1.addItem("Mute", 2);
	cboOperationOut1.setName("cboOperationOut1");
	addAndMakeVisible(cboOperationOut1);

	cboDeviceOut1.addListener(this);
	cboDeviceOut1.setBounds(20 + 400, 70, 80, 16);
	cboDeviceOut1.setName("cboDeviceOut1");
	addAndMakeVisible(cboDeviceOut1);

	txtOutA1.addListener(this);
	txtOutA1.setBounds(20 + 500, 70, 40, 16);
	addAndMakeVisible(txtOutA1);

	txtOutB1.addListener(this);
	txtOutB1.setBounds(20 + 560, 70, 40, 16);
	addAndMakeVisible(txtOutB1);

	txtOutAB1.addListener(this);
	txtOutAB1.setBounds(20 + 560, 90, 40, 16);
	addAndMakeVisible(txtOutAB1);

	//TODO: CD & EF

	// Common bottom

	btnFirst.addListener(this);
	btnFirst.setBounds(20, 300, 16, 16);
	btnFirst.setButtonText("First");
	addAndMakeVisible(btnFirst);

	btnPrev.addListener(this);
	btnPrev.setBounds(40, 300, 16, 16);
	btnPrev.setButtonText("Prev");
	addAndMakeVisible(btnPrev);

	btnNext.addListener(this);
	btnNext.setBounds(20 + 400, 300, 16, 16);
	btnNext.setButtonText("Next");
	addAndMakeVisible(btnNext);

	btnLast.addListener(this);
	btnLast.setBounds(20 + 420, 300, 16, 16);
	btnLast.setButtonText("Last");
	addAndMakeVisible(btnLast);

	openAllMidiDevices();
	for (int i = 0; i < m_midiInputDeviceNames.size(); i++)
	{
		cboDeviceIn0.addItem(m_midiInputDeviceNames[i], i + 1);
		cboDeviceIn1.addItem(m_midiInputDeviceNames[i], i + 1);
	}

	for (int i = 0; i < m_midiOutputDeviceNames.size(); i++)
	{
		cboDeviceOut0.addItem(m_midiOutputDeviceNames[i], i + 1);
		cboDeviceOut1.addItem(m_midiOutputDeviceNames[i], i + 1);
	}

	tryRestoreLastSession();

	showPage(0);
}

MainComponent::~MainComponent()
{
	logThis("Session stop", Target::misc);

	closeAllMidiDevices();
}

void MainComponent::showPage(int index)
{
	m_currentPage = index;
	
	cboDeviceIn0.setText(pageControlValues[index]["cboDeviceIn0"]);	
	txtInA0.setText(pageControlValues[index]["txtInA0"]);
	txtInB0.setText(pageControlValues[index]["txtInB0"]);
	txtInAB0.setText(pageControlValues[index]["txtInAB0"]);
	cboOperationIn0.setText(pageControlValues[index]["cboOperationIn0"]);
	cboOperationOut0.setText(pageControlValues[index]["cboOperationOut0"]);
	cboDeviceOut0.setText(pageControlValues[index]["cboDeviceOut0"]);	
	txtOutA0.setText(pageControlValues[index]["txtOutA0"]);
	txtOutB0.setText(pageControlValues[index]["txtOutB0"]);
	txtOutAB0.setText(pageControlValues[index]["txtOutAB0"]);

	//TODO: For the other lines... And CD & EF !

	cboDeviceIn1.setText(pageControlValues[index]["cboDeviceIn1"]);
	txtInA1.setText(pageControlValues[index]["txtInA1"]);
	txtInB1.setText(pageControlValues[index]["txtInB1"]);
	txtInAB1.setText(pageControlValues[index]["txtInAB1"]);
	cboOperationIn1.setText(pageControlValues[index]["cboOperationIn1"]);
	cboOperationOut1.setText(pageControlValues[index]["cboOperationOut1"]);
	cboDeviceOut1.setText(pageControlValues[index]["cboDeviceOut1"]);
	txtOutA1.setText(pageControlValues[index]["txtOutA1"]);
	txtOutB1.setText(pageControlValues[index]["txtOutB1"]);
	txtOutAB1.setText(pageControlValues[index]["txtOutAB1"]);
}

void MainComponent::handleIncomingMidiMessage(juce::MidiInput* source, const juce::MidiMessage& message)
{	
	std::stringstream ss;
	const juce::uint8* p = message.getRawData();
	for (int i = 0; i < message.getRawDataSize(); i++) // Although it should be 3 bytes all the time
	{
		//TODO : Fill in all the nibbles here... midiNibbleXx
		ss << std::hex << static_cast<int>(*(p + i)) << std::endl;
	}
	logThis2("Incomming message from device %s : %s", Target::midi, source->getName(), ss.str());

	for (int i = 0; i < PAGE_COUNT; i++)
	{
		for (int j = 0; j < ROW_COUNT; j++)
		{ 			
			std::string midn = pageControlValues[i][std::string("cboDeviceIn") + std::to_string(j)];
			if (midn == source->getName()) // Or std::stoi ?-)
			{
				std::string modn = pageControlValues[i][std::string("cboDeviceOut") + std::to_string(j)];
				if (modn != "")
				{
					// ApplyFilter();
					// ApplyFormula();
					
					m_mods[m_midiOutputDeviceNames.indexOf(modn)]->sendMessageNow(message);
				}
			}
		}
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

	// Not available for Windaube ! See LoopMidi as free third party replacement http://www.tobias-erichsen.de/software.html
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
	if (sender == &cboDeviceIn0)
	{
		//Nothing to do ? Hard code the name here ?
	}
	else if (sender == &cboOperationIn0)
	{
		//Nothing to do ?
	}
	else if (sender == &cboOperationOut0)
	{
		//Nothing to do ?
	}
	else if (sender == &cboDeviceOut0)
	{
		//Nothing to do ?
	}
		
	//TODO: the other lines

	std::string controlName = sender->getName().toStdString();
	std::string controlValue = sender->getText().toStdString();
	logThis2("controlName = %s & controlValue = %s", Target::screen, controlName, controlValue);
	pageControlValues[m_currentPage][controlName] = controlValue;
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
