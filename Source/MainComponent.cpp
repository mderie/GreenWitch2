/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"
#include "exprtk.hpp"
#include "ConfigurationFiles.hpp"
#include "CommonStuffs.hpp"

// Juce framework GUI methods

//==============================================================================
MainComponent::MainComponent()
{
	logThis("Session start", Target::misc);

    setSize (600, 400);

	// Header

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
	cboDeviceIn0.setBounds(20, 40, 60, 16);
	cboDeviceIn0.setName("cboDeviceIn0");
	addAndMakeVisible(cboDeviceIn0);

	chkMuteIn0.addListener(this);
	cboDeviceIn0.setBounds(100, 40, 20, 16);
	cboDeviceIn0.setName("chkMuteIn0");
	addAndMakeVisible(chkMuteIn0);

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

	cboTargetIn0.addListener(this);
	cboTargetIn0.setBounds(20 + 220, 40, 60, 16);
	cboTargetIn0.setName("cboTargetIn0");
	addAndMakeVisible(cboTargetIn0);

	chkReverseIn0.addListener(this);
	chkReverseIn0.setBounds(20 + 280, 40, 20, 16);
	chkReverseIn0.setName("chkReverseIn0");
	addAndMakeVisible(chkReverseIn0);

	chkDropSysexIn0.addListener(this);
	chkDropSysexIn0.setBounds(20 + 320, 40, 20, 16);
	chkDropSysexIn0.setName("chkDropSysexIn0");
	addAndMakeVisible(chkDropSysexIn0);

	// Line 1

	cboDeviceIn1.addListener(this);
	cboDeviceIn1.setBounds(20, 70, 60, 16);
	cboDeviceIn1.setName("cboDeviceIn1");
	addAndMakeVisible(cboDeviceIn1);

	chkMuteIn1.addListener(this);
	cboDeviceIn1.setBounds(100, 70, 20, 16);
	cboDeviceIn1.setName("chkMuteIn1");
	addAndMakeVisible(chkMuteIn1);

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

	cboTargetIn1.addListener(this);
	cboTargetIn1.setBounds(20 + 220, 70, 80, 16);
	cboTargetIn1.setName("cboTargetIn1");
	addAndMakeVisible(cboTargetIn1);

	chkReverseIn1.addListener(this);
	chkReverseIn1.setBounds(20 + 280, 70, 20, 16);
	chkReverseIn1.setName("chkReverseIn1");
	addAndMakeVisible(chkReverseIn1);

	chkDropSysexIn1.addListener(this);
	chkDropSysexIn1.setBounds(20 + 320, 70, 20, 16);
	chkDropSysexIn1.setName("chkDropSysexIn1");
	addAndMakeVisible(chkDropSysexIn1);

	// OUT

	// Line 0

	cboDeviceOut0.addListener(this);
	cboDeviceOut0.setBounds(20 + 400, 40, 80, 16);
	cboDeviceOut0.setName("cboDeviceOut0");
	addAndMakeVisible(cboDeviceOut0);

	chkMuteOut0.addListener(this);
	chkMuteOut0.setBounds(500, 40, 20, 16);
	chkMuteOut0.setName("chkMuteOut0");
	addAndMakeVisible(chkMuteOut0);

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

	cboDeviceOut1.addListener(this);
	cboDeviceOut1.setBounds(20 + 400, 70, 80, 16);
	cboDeviceOut1.setName("cboDeviceOut1");
	addAndMakeVisible(cboDeviceOut1);

	chkMuteOut1.addListener(this);
	chkMuteOut1.setBounds(500, 40, 70, 16);
	chkMuteOut1.setName("chkMuteOut1");
	addAndMakeVisible(chkMuteOut1);

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

	// Footer

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

	openAllMidiDevices(); //TODO: Review this !
	cboDeviceIn0.addItem(NO_DEVICE, 1); // Id's start always at 1
	cboDeviceIn1.addItem(NO_DEVICE, 1);
	for (int i = 0; i < m_midiInputDeviceNames.size(); i++)
	{
		cboDeviceIn0.addItem(m_midiInputDeviceNames[i], i + 2);
		cboDeviceIn1.addItem(m_midiInputDeviceNames[i], i + 2);
		//TODO: the other lines
	}
	// Doesn't work :(
	//cboDeviceIn0.setSelectedId(1); 
	// Not better... Too early ?
	cboDeviceIn0.setText(NO_DEVICE);
	cboDeviceIn1.setSelectedId(1);

	cboTargetIn0.addItem(NO_DEVICE, 1);
	cboTargetIn1.addItem(NO_DEVICE, 1);
	for (int i = 0; i < m_midiOutputDeviceNames.size(); i++)
	{
		cboTargetIn0.addItem(m_midiOutputDeviceNames[i], i + 2);
		cboTargetIn1.addItem(m_midiOutputDeviceNames[i], i + 2);
		//TODO: the other lines
	}
	// Doesn't work :(
	//cboTarget0.setSelectedId(1);
	// Not better... Too early ?
	cboTargetIn0.setSelectedItemIndex(0);
	cboTargetIn1.setSelectedId(1);

	cboDeviceOut0.addItem(NO_DEVICE, 1);
	cboDeviceOut1.addItem(NO_DEVICE, 1);
	for (int i = 0; i < m_midiOutputDeviceNames.size(); i++)
	{
		cboDeviceOut0.addItem(m_midiOutputDeviceNames[i], i + 2);
		cboDeviceOut1.addItem(m_midiOutputDeviceNames[i], i + 2);
		//TODO: the other lines
	}
	// Doesn't work :(
	//cboDeviceOut0.setSelectedId(1);
	// Not better... Too early ?
	cboDeviceOut0.setSelectedItemIndex(1);
	cboDeviceOut1.setSelectedId(1);

	// Need to inherit from ComboBox ?
	//cboDeviceOut0.focusGained = ? ;

	tryRestoreLastSession();

	showPage(0);
}

MainComponent::~MainComponent()
{
	logThis("Session stop", Target::misc);

	closeAllMidiDevices();
}

void MainComponent::buttonClicked(Button *sender)
{
	std::string controlName = sender->getName().toStdString();
	std::string controlValue = std::to_string((int) sender->getToggleState()); // No automatic bool conversion :(

	// C++20 gives us std::map::contains but in the meantime...
	// Could be != 0 or > 0 See https://stackoverflow.com/questions/1939953/how-to-find-if-a-given-key-exists-in-a-c-stdmap
	if (pageControlValues[m_currentPage].count(controlName) != 0)
	{
		m_sessionChanged = true; // Find another way of working... ?
		pageControlValues[m_currentPage][controlName] = controlValue; // Always save the change
	}

	// Header

	if (sender == &btnOk)
	{
		m_sessionChanged = true;
		txtTarget.setText(txtFormula.getText());
		pageControlValues[m_currentPage][txtTarget.getName().toStdString()] = txtFormula.getText().toStdString();
		return;
	}
	else if (sender == &btnCancel)
	{
		txtFormula.clear();
		return;
	}

	// Line 0

	// Line 1

	// Footer

	if (sender == &btnFirst)
	{
		showPage(0);
		return;
	}
	else if ((sender == &btnPrev) && (m_currentPage > 0))
	{		
		showPage(--m_currentPage);
		return;
	}
	else if ((sender == &btnNext) && (m_currentPage < PAGE_COUNT))
	{
		showPage(++m_currentPage);
		return;
	}
	else if (sender == &btnLast)
	{
		showPage(PAGE_COUNT - 1);
		return;
	}
}

void MainComponent::comboBoxChanged(ComboBox *sender)
{
	std::string controlName = sender->getName().toStdString();
	std::string controlValue = sender->getText().toStdString();
	logThis2("controlName = %s & controlValue = %s", Target::screen, controlName, controlValue);

	//logThis("Step 0", Target::misc);
	//return;
	if (sender == &cboDeviceIn0)
	{
		//Nothing to do ? Hard code the name here ?
	}
	else if (sender == &cboTargetIn0)
	{
		//Nothing to do ?
	}
	else if ((sender == &cboDeviceOut0) || (sender == &cboDeviceOut1)) //TODO: Add || (sender == &cboDeviceOut2) || (sender == &cboDeviceOut3))
	{
		// We have to avoid duplicate in OUT ones...

		if (sender->getSelectedId() == 1)
		{
			// Id value was something else before
			//ReserveOutDevice();
			//ReserveOutDevice();
		}
		else
		{
			// I ?
			//ReserveOutDevice();
			//ReserveOutDevice();
		}
	}
		
	//TODO: the other lines if needed...

	pageControlValues[m_currentPage][controlName] = controlValue; // Always save the change
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

	//TODO: ... ?
}

// User methods

void MainComponent::showPage(int index)
{
	m_currentPage = index;

	// Line 0

	cboDeviceIn0.setText(pageControlValues[index]["cboDeviceIn0"]);
	txtInA0.setText(pageControlValues[index]["txtInA0"]);
	txtInB0.setText(pageControlValues[index]["txtInB0"]);
	txtInAB0.setText(pageControlValues[index]["txtInAB0"]);
	cboTargetIn0.setText(pageControlValues[index]["cboTargetIn0"]);
	cboDeviceOut0.setText(pageControlValues[index]["cboDeviceOut0"]);
	txtOutA0.setText(pageControlValues[index]["txtOutA0"]);
	txtOutB0.setText(pageControlValues[index]["txtOutB0"]);
	txtOutAB0.setText(pageControlValues[index]["txtOutAB0"]);

	//TODO: For the other lines... And CD & EF !

	chkInAB0.setToggleState(std::stoi(pageControlValues[index]["chkInAB0"]) == 1, false);
	chkInCD0.setToggleState(std::stoi(pageControlValues[index]["chkInCD0"]) == 1, false);
	chkInEF0.setToggleState(std::stoi(pageControlValues[index]["chkInEF0"]) == 1, false);
	chkOutAB0.setToggleState(std::stoi(pageControlValues[index]["chkOutAB0"]) == 1, false);
	chkOutCD0.setToggleState(std::stoi(pageControlValues[index]["chkOutCD0"]) == 1, false);
	chkOutEF0.setToggleState(std::stoi(pageControlValues[index]["chkOutEF0"]) == 1, false);
	chkReverseIn0.setToggleState(std::stoi(pageControlValues[index]["chkReverseIn0"]) == 1, false);
	chkDropSysexIn0.setToggleState(std::stoi(pageControlValues[index]["chkDropSysexIn0"]) == 1, false);
	chkMuteIn0.setToggleState(std::stoi(pageControlValues[index]["chkMuteIn0"]) == 1, false);
	chkMuteOut0.setToggleState(std::stoi(pageControlValues[index]["chkMuteOut0"]) == 1, false);

	// Line 1

	cboDeviceIn1.setText(pageControlValues[index]["cboDeviceIn1"]);
	txtInA1.setText(pageControlValues[index]["txtInA1"]);
	txtInB1.setText(pageControlValues[index]["txtInB1"]);
	txtInAB1.setText(pageControlValues[index]["txtInAB1"]);
	cboTargetIn1.setText(pageControlValues[index]["cboTargetIn1"]);
	cboDeviceOut1.setText(pageControlValues[index]["cboDeviceOut1"]);
	txtOutA1.setText(pageControlValues[index]["txtOutA1"]);
	txtOutB1.setText(pageControlValues[index]["txtOutB1"]);
	txtOutAB1.setText(pageControlValues[index]["txtOutAB1"]);

	//TODO: For the other lines... And CD & EF !

	chkInAB1.setToggleState(std::stoi(pageControlValues[index]["chkInAB1"]) == 1, false);
	chkInCD1.setToggleState(std::stoi(pageControlValues[index]["chkInCD1"]) == 1, false);
	chkInEF1.setToggleState(std::stoi(pageControlValues[index]["chkInEF1"]) == 1, false);
	chkOutAB1.setToggleState(std::stoi(pageControlValues[index]["chkOutAB1"]) == 1, false);
	chkOutCD1.setToggleState(std::stoi(pageControlValues[index]["chkOutCD1"]) == 1, false);
	chkOutEF1.setToggleState(std::stoi(pageControlValues[index]["chkOutEF1"]) == 1, false);
	chkReverseIn1.setToggleState(std::stoi(pageControlValues[index]["chkReverseIn1"]) == 1, false);
	chkDropSysexIn1.setToggleState(std::stoi(pageControlValues[index]["chkDropSysexIn1"]) == 1, false);
	chkMuteIn1.setToggleState(std::stoi(pageControlValues[index]["chkMuteIn1"]) == 1, false);
	chkMuteOut1.setToggleState(std::stoi(pageControlValues[index]["chkMuteOut1"]) == 1, false);
}

void MainComponent::handleIncomingMidiMessage(juce::MidiInput* source, const juce::MidiMessage& message)
{
	if (message.getRawDataSize() > 3)
	{
		return; // Probably SYSEX... Just ignore it for now, later we could even discard them :)
	}

	//TODO: We'll see later for message of size 2 (Care ! See : http://midi.teragonaudio.com/tech/midispec/run.htm )

	std::stringstream ss;
	const juce::uint8* p = message.getRawData();

	for (int i = 0; i < message.getRawDataSize(); i++) // Although it should be 3 bytes all the time
	{
		if (i == 0)
		{
			midiInByte0 = (*(p + 0));
			midiInHighNibble0 = (*(p + 0)) >> 4;
			midiInLowNibble0 = (*(p + 0)) & 0x0F;
		}

		if (i == 1)
		{
			midiInByte1 = (*(p + 1));
			midiInHighNibble1 = (*(p + 1)) >> 4;
			midiInLowNibble1 = (*(p + 1)) & 0x0F;
		}

		if (i == 2)
		{
			midiInByte2 = (*(p + 2));
			midiInHighNibble2 = (*(p + 2)) >> 4;
			midiInLowNibble2 = (*(p + 2)) & 0x0F;
		}

		ss << std::hex << static_cast<int>(*(p + i)) << std::endl;
	}
	logThis2("Incomming message from device %s : %s", Target::midi, source->getName(), ss.str());

	for (int i = 0; i < PAGE_COUNT; i++)
	{
		for (int j = 0; j < ROW_COUNT; j++)
		{
			std::string midn = pageControlValues[i][std::string("cboDeviceIn") + std::to_string(j)]; // Or std::stoi ?-)
			if (midn == source->getName())
			{
				std::string modn = pageControlValues[i][std::string("cboDeviceOut") + std::to_string(j)];
				if (modn == "")
				{
					modn = pageControlValues[i][std::string("cboTarget") + std::to_string(j)];
					if (modn != "")
					{
						//TODO: Same case as below ? Merge...
					}
				}
				else
				{
					// ApplyFilter();
					// ApplyFormula();
					transform(i, j);
					juce::MidiMessage msg();

					m_mods[m_midiOutputDeviceNames.indexOf(modn)]->sendMessageNow(message);
				}
			}
		}
	}
}

void MainComponent::transform(int page, int row)
{
	std::string s = std::to_string(row);
	std::string formula;

	typedef exprtk::symbol_table<double> symbol_table_t;
	typedef exprtk::expression<double> expression_t;
	typedef exprtk::parser<double> parser_t;

	symbol_table_t symbol_table;
	expression_t expression;
	parser_t parser;

	// The lib does not work well with byte only algebra... 
	// Care: had to add /bigobj to the project C/C++ compile option at the command line !
	double a, b, ab, c, d, cd, e, f, ef;
	// OK but potentially misleading : int *p, q;
	a = midiInHighNibble0;
	b = midiInLowNibble0;
	ab = midiInByte0;
	c = midiInHighNibble1;
	d = midiInLowNibble1;
	cd = midiInByte1;
	e = midiInHighNibble2;
	f = midiInLowNibble2;
	ef = midiInByte2;

	symbol_table.add_variable("A", a);
	symbol_table.add_variable("B", b);
	symbol_table.add_variable("AB", ab);
	symbol_table.add_variable("C", c);
	symbol_table.add_variable("D", d);
	symbol_table.add_variable("CD", cd);
	symbol_table.add_variable("E", e);
	symbol_table.add_variable("F", f);
	symbol_table.add_variable("EF", ef);
	expression.register_symbol_table(symbol_table);

	formula = pageControlValues[page][std::string("txtOutA") + s];
	if (formula.size() > 0)
	{
		if (parser.compile(formula, expression))
		{
			midiOutHighNibble0 = static_cast<byte>(expression.value());
		}
	}
	formula = pageControlValues[page][std::string("txtOutB") + s];
	if (formula.size() > 0)
	{
		if (parser.compile(formula, expression))
		{
			midiOutLowNibble0 = static_cast<byte>(expression.value());
		}
	}
	formula = pageControlValues[page][std::string("txtOutAB") + s];
	if (formula.size() > 0)
	{
		if (parser.compile(formula, expression))
		{
			midiOutByte0 = static_cast<byte>(expression.value());
		}
	}

	//TODO: And CD & EF !
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

//TODO: Change this and open only the devices in use in the combo boxes...
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

//void MainComponent::ReserveOutDevice(const std::string &deviceName, const std::string &senderName)
void MainComponent::ReserveOutDevice(const std::string &deviceName)
{
	/*
	for (int i = 0; i < PAGE_COUNT; i++)
	{
		for (int j = 0; j < ROW_COUNT; j++)
		{
			
			if (pageControlValues[i]["cboDeviceOut" + std::to_string(j)])
		}
	}
	*/

	m_midiOutputDeviceNamesAvail.removeString(deviceName);
	m_midiOutputDeviceNamesInUse.add(deviceName);
}

void MainComponent::RestoreOutDevice(const std::string &deviceName)
{
	m_midiOutputDeviceNamesAvail.add(deviceName);
	m_midiOutputDeviceNamesInUse.removeString(deviceName);
}
