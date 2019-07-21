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

    setSize (920, 520);

	// Header
/*
	txtFormula.addListener(this);
	txtFormula.setBounds(200, 16, 100, 16);
	txtFormula.setName("txtFormula");
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
*/
	int u = 4;
	int x = u;
	int y = 2*u;
	int w = 10*u;

	lblDeviceIn.setBounds(x, y, 2*w, 4*u);
	lblDeviceIn.setColour(Label::textColourId, Colour(0, 255, 0));
	lblDeviceIn.setText("In", NotificationType::dontSendNotification);
	addAndMakeVisible(lblDeviceIn);

	y += 4*u + 2*u; 

	cboDeviceIn0.addListener(this);
	cboDeviceIn0.setBounds(x, y, 2*w, 4*u);
	cboDeviceIn0.setName("cboDeviceIn0");
	addAndMakeVisible(cboDeviceIn0);

	y += 4*u + 6*u;

	cboDeviceIn1.addListener(this);
	cboDeviceIn1.setBounds(x, y, 2*w, 4*u);
	cboDeviceIn1.setName("cboDeviceIn1");
	addAndMakeVisible(cboDeviceIn1);

	y += 4*u + 6*u;

	cboDeviceIn2.addListener(this);
	cboDeviceIn2.setBounds(x, y, 2*w, 4*u);
	cboDeviceIn2.setName("cboDeviceIn2");
	addAndMakeVisible(cboDeviceIn2);

	y += 4*u + 6*u;

	cboDeviceIn3.addListener(this);
	cboDeviceIn3.setBounds(x, y, 2*w, 4*u);
	cboDeviceIn3.setName("cboDeviceIn3");
	addAndMakeVisible(cboDeviceIn3);

	x += 2*w;
	y = 2*u;

	lblMuteIn.setBounds(x, y, w, 4 * u);
	lblMuteIn.setColour(Label::textColourId, Colour(0, 255, 0));
	lblMuteIn.setText("Mute", NotificationType::dontSendNotification);
	addAndMakeVisible(lblMuteIn);

	y += 4*u + 2*u;

	chkMuteIn0.addListener(this);
	chkMuteIn0.setBounds(x, y, w, 4*u);
	chkMuteIn0.setName("chkMuteIn0");
	addAndMakeVisible(chkMuteIn0);

	y += 4*u + 6*u;

	chkMuteIn1.addListener(this);
	chkMuteIn1.setBounds(x, y, w, 4*u);
	chkMuteIn1.setName("chkMuteIn1");
	addAndMakeVisible(chkMuteIn1);

	y += 4*u + 6*u;

	chkMuteIn2.addListener(this);
	chkMuteIn2.setBounds(x, y, w, 4*u);
	chkMuteIn2.setName("chkMuteIn2");
	addAndMakeVisible(chkMuteIn2);

	y += 4*u + 6*u;

	chkMuteIn3.addListener(this);
	chkMuteIn3.setBounds(x, y, w, 4*u);
	chkMuteIn3.setName("chkMuteIn3");
	addAndMakeVisible(chkMuteIn3);

	x += w;
	y = 2*u;

	lblAIn.setBounds(x, y, w, 4*u);
	lblAIn.setColour(Label::textColourId, Colour(0, 255, 0));
	lblAIn.setText("A", NotificationType::dontSendNotification);
	addAndMakeVisible(lblAIn);

	y += 4*u + 2*u;

	txtInA0.addListener(this);
	txtInA0.setBounds(x, y, w, 4*u);
	txtInA0.setName("txtInA0");
	addAndMakeVisible(txtInA0);

	y += 4*u + 6*u;

	txtInA1.addListener(this);
	txtInA1.setBounds(x, y, w, 4*u);
	txtInA1.setName("txtInA1");
	addAndMakeVisible(txtInA1);

	y += 4*u + 6*u;

	txtInA2.addListener(this);
	txtInA2.setBounds(x, y, w, 4*u);
	txtInA2.setName("txtInA2");
	addAndMakeVisible(txtInA2);

	y += 4*u + 6*u;

	txtInA3.addListener(this);
	txtInA3.setBounds(x, y, w, 4*u);
	txtInA3.setName("txtInA3");
	addAndMakeVisible(txtInA3);

	x += w;
	y = 2*u;

	lblBIn.setBounds(x, y, w, 4*u);
	lblBIn.setColour(Label::textColourId, Colour(0, 255, 0));
	lblBIn.setText("B", NotificationType::dontSendNotification);
	addAndMakeVisible(lblBIn);

	y += 4*u + 2*u;

	txtInB0.addListener(this);
	txtInB0.setBounds(x, y, w, 4*u);
	txtInB0.setName("txtInB0");
	addAndMakeVisible(txtInB0);

	y += 4*u + 6*u;

	txtInB1.addListener(this);
	txtInB1.setBounds(x, y, w, 4*u);
	txtInB1.setName("txtInB1");
	addAndMakeVisible(txtInB1);

	y += 4*u + 6*u;

	txtInB2.addListener(this);
	txtInB2.setBounds(x, y, w, 4*u);
	txtInB2.setName("txtInB2");
	addAndMakeVisible(txtInB2);

	y += 4*u + 6*u;

	txtInB3.addListener(this);
	txtInB3.setBounds(x, y, w, 4*u);
	txtInB3.setName("txtInB3");
	addAndMakeVisible(txtInB3);

	x -= w;
	y = 12*u;

	chkInAB0.addListener(this);
	chkInAB0.setBounds(x, y, w, 4*u);
	chkInAB0.setName("chkInAB0");
	addAndMakeVisible(chkInAB0);

	y += 4*u + 6*u;

	chkInAB1.addListener(this);
	chkInAB1.setBounds(x, y, w, 4*u);
	chkInAB1.setName("chkInAB1");
	addAndMakeVisible(chkInAB1);

	y += 4*u + 6*u;

	chkInAB2.addListener(this);
	chkInAB2.setBounds(x, y, w, 4*u);
	chkInAB2.setName("chkInAB2");
	addAndMakeVisible(chkInAB2);

	y += 4*u + 6*u;

	chkInAB3.addListener(this);
	chkInAB3.setBounds(x, y, w, 4*u);
	chkInAB3.setName("chkInAB3");
	addAndMakeVisible(chkInAB3);

	x += 5*u;
	y = 12*u;

	txtInAB0.addListener(this);
	txtInAB0.setBounds(x, y, 15*u, 4*u);
	txtInAB0.setName("txtInAB0");
	addAndMakeVisible(txtInAB0);

	y += 4*u + 6*u;

	txtInAB1.addListener(this);
	txtInAB1.setBounds(x, y, 15*u, 4*u);
	txtInAB1.setName("txtInAB1");
	addAndMakeVisible(txtInAB1);

	y += 4*u + 6*u;

	txtInAB2.addListener(this);
	txtInAB2.setBounds(x, y, 15*u, 4*u);
	txtInAB2.setName("txtInAB2");
	addAndMakeVisible(txtInAB2);

	y += 4*u + 6*u;

	txtInAB3.addListener(this);
	txtInAB3.setBounds(x, y, 15*u, 4*u);
	txtInAB3.setName("txtInAB3");
	addAndMakeVisible(txtInAB3);

	x += 15*u;
	y = 2*u;

	lblCIn.setBounds(x, y, w, 4*u);
	lblCIn.setColour(Label::textColourId, Colour(0, 255, 0));
	lblCIn.setText("C", NotificationType::dontSendNotification);
	addAndMakeVisible(lblCIn);

	y += 4*u + 2*u;

	txtInC0.addListener(this);
	txtInC0.setBounds(x, y, w, 4*u);
	txtInC0.setName("txtInC0");
	addAndMakeVisible(txtInC0);

	y += 4*u + 6*u;

	txtInC1.addListener(this);
	txtInC1.setBounds(x, y, w, 4*u);
	txtInC1.setName("txtInC1");
	addAndMakeVisible(txtInC1);

	y += 4*u + 6*u;

	txtInC2.addListener(this);
	txtInC2.setBounds(x, y, w, 4*u);
	txtInC2.setName("txtInC2");
	addAndMakeVisible(txtInC2);

	y += 4*u + 6*u;

	txtInC3.addListener(this);
	txtInC3.setBounds(x, y, w, 4*u);
	txtInC3.setName("txtInC3");
	addAndMakeVisible(txtInC3);

	x += w;
	y = 2*u;

	lblDIn.setBounds(x, y, w, 4*u);
	lblDIn.setColour(Label::textColourId, Colour(0, 255, 0));
	lblDIn.setText("D", NotificationType::dontSendNotification);
	addAndMakeVisible(lblDIn);

	y += 4*u + 2*u;

	txtInD0.addListener(this);
	txtInD0.setBounds(x, y, w, 4*u);
	txtInD0.setName("txtInD0");
	addAndMakeVisible(txtInD0);

	y += 4*u + 6*u;

	txtInD1.addListener(this);
	txtInD1.setBounds(x, y, w, 4*u);
	txtInD1.setName("txtInD1");
	addAndMakeVisible(txtInD1);

	y += 4*u + 6*u;

	txtInD2.addListener(this);
	txtInD2.setBounds(x, y, w, 4*u);
	txtInD2.setName("txtInD2");
	addAndMakeVisible(txtInD2);

	y += 4*u + 6*u;

	txtInD3.addListener(this);
	txtInD3.setBounds(x, y, w, 4*u);
	txtInD3.setName("txtInD3");
	addAndMakeVisible(txtInD3);

	x -= w;
	y = 12*u;

	chkInCD0.addListener(this);
	chkInCD0.setBounds(x, y, w, 4*u);
	chkInCD0.setName("chkInCD0");
	addAndMakeVisible(chkInCD0);

	y += 4*u + 6*u;

	chkInCD1.addListener(this);
	chkInCD1.setBounds(x, y, w, 4*u);
	chkInCD1.setName("chkInCD1");
	addAndMakeVisible(chkInCD1);

	y += 4*u + 6*u;

	chkInCD2.addListener(this);
	chkInCD2.setBounds(x, y, w, 4*u);
	chkInCD2.setName("chkInCD2");
	addAndMakeVisible(chkInCD2);

	y += 4*u + 6*u;

	chkInCD3.addListener(this);
	chkInCD3.setBounds(x, y, w, 4*u);
	chkInCD3.setName("chkInCD3");
	addAndMakeVisible(chkInCD3);

	x += 5*u;
	y = 12*u;

	txtInCD0.addListener(this);
	txtInCD0.setBounds(x, y, 15*u, 4*u);
	txtInCD0.setName("txtInCD0");
	addAndMakeVisible(txtInCD0);

	y += 4*u + 6*u;

	txtInCD1.addListener(this);
	txtInCD1.setBounds(x, y, 15*u, 4*u);
	txtInCD1.setName("txtInCD1");
	addAndMakeVisible(txtInCD1);

	y += 4*u + 6*u;

	txtInCD2.addListener(this);
	txtInCD2.setBounds(x, y, 15*u, 4*u);
	txtInCD2.setName("txtInCD2");
	addAndMakeVisible(txtInCD2);

	y += 4*u + 6*u;

	txtInCD3.addListener(this);
	txtInCD3.setBounds(x, y, 15*u, 4*u);
	txtInCD3.setName("txtInCD3");
	addAndMakeVisible(txtInCD3);

	x += 15*u;
	y = 2*u;

	lblEIn.setBounds(x, y, w, 4*u);
	lblEIn.setColour(Label::textColourId, Colour(0, 255, 0));
	lblEIn.setText("E", NotificationType::dontSendNotification);
	addAndMakeVisible(lblEIn);

	y += 4*u + 2*u;

	txtInE0.addListener(this);
	txtInE0.setBounds(x, y, w, 4*u);
	txtInE0.setName("txtInE0");
	addAndMakeVisible(txtInE0);

	y += 4*u + 6*u;

	txtInE1.addListener(this);
	txtInE1.setBounds(x, y, w, 4*u);
	txtInE1.setName("txtInE1");
	addAndMakeVisible(txtInE1);

	y += 4*u + 6*u;

	txtInE2.addListener(this);
	txtInE2.setBounds(x, y, w, 4*u);
	txtInE2.setName("txtInE2");
	addAndMakeVisible(txtInE2);

	y += 4*u + 6*u;

	txtInE3.addListener(this);
	txtInE3.setBounds(x, y, w, 4*u);
	txtInE3.setName("txtInE3");
	addAndMakeVisible(txtInE3);

	x += w;
	y = 2*u;

	lblFIn.setBounds(x, y, w, 4*u);
	lblFIn.setColour(Label::textColourId, Colour(0, 255, 0));
	lblFIn.setText("F", NotificationType::dontSendNotification);
	addAndMakeVisible(lblFIn);

	y += 4*u + 2*u;

	txtInF0.addListener(this);
	txtInF0.setBounds(x, y, w, 4*u);
	txtInF0.setName("txtInF0");
	addAndMakeVisible(txtInF0);

	y += 4*u + 6*u;

	txtInF1.addListener(this);
	txtInF1.setBounds(x, y, w, 4*u);
	txtInF1.setName("txtInF1");
	addAndMakeVisible(txtInF1);

	y += 4*u + 6*u;

	txtInF2.addListener(this);
	txtInF2.setBounds(x, y, w, 4*u);
	txtInF2.setName("txtInF2");
	addAndMakeVisible(txtInF2);

	y += 4*u + 6*u;

	txtInF3.addListener(this);
	txtInF3.setBounds(x, y, w, 4*u);
	txtInF3.setName("txtInF3");
	addAndMakeVisible(txtInF3);

	x -= w;
	y = 12*u;

	chkInEF0.addListener(this);
	chkInEF0.setBounds(x, y, w, 4*u);
	chkInEF0.setName("chkInEF0");
	addAndMakeVisible(chkInEF0);

	y += 4*u + 6*u;

	chkInEF1.addListener(this);
	chkInEF1.setBounds(x, y, w, 4*u);
	chkInEF1.setName("chkInEF1");
	addAndMakeVisible(chkInEF1);

	y += 4*u + 6*u;

	chkInEF2.addListener(this);
	chkInEF2.setBounds(x, y, w, 4*u);
	chkInEF2.setName("chkInEF2");
	addAndMakeVisible(chkInEF2);

	y += 4*u + 6*u;

	chkInEF3.addListener(this);
	chkInEF3.setBounds(x, y, w, 4*u);
	chkInEF3.setName("chkInEF3");
	addAndMakeVisible(chkInEF3);

	x += 5*u;
	y = 12*u;

	txtInEF0.addListener(this);
	txtInEF0.setBounds(x, y, 15*u, 4*u);
	txtInEF0.setName("txtInEF0");
	addAndMakeVisible(txtInEF0);

	y += 4*u + 6*u;

	txtInEF1.addListener(this);
	txtInEF1.setBounds(x, y, 15*u, 4*u);
	txtInEF1.setName("txtInEF1");
	addAndMakeVisible(txtInEF1);

	y += 4*u + 6*u;

	txtInEF2.addListener(this);
	txtInEF2.setBounds(x, y, 15*u, 4*u);
	txtInEF2.setName("txtInEF2");
	addAndMakeVisible(txtInEF2);

	y += 4*u + 6*u;

	txtInEF3.addListener(this);
	txtInEF3.setBounds(x, y, 15*u, 4*u);
	txtInEF3.setName("txtInEF3");
	addAndMakeVisible(txtInEF3);

	x += 2*w;
	y = 2*u;

	lblTarget.setBounds(x, y, 2*w, 4*u); 
	lblTarget.setColour(Label::textColourId, Colour(0, 255, 0));
	lblTarget.setText("Target", NotificationType::dontSendNotification);
	addAndMakeVisible(lblTarget);

	y += 4*u + 2*u;

	cboTargetIn0.addListener(this);
	cboTargetIn0.setBounds(x, y, 2*w, 4*u);
	cboTargetIn0.setName("cboTargetIn0");
	addAndMakeVisible(cboTargetIn0);

	y += 4*u + 6*u;

	cboTargetIn1.addListener(this);
	cboTargetIn1.setBounds(x, y, 2*w, 4*u);
	cboTargetIn1.setName("cboTargetIn1");
	addAndMakeVisible(cboTargetIn1);

	y += 4*u + 6*u;

	cboTargetIn2.addListener(this);
	cboTargetIn2.setBounds(x, y, 2 * w, 4 * u);
	cboTargetIn2.setName("cboTargetIn2");
	addAndMakeVisible(cboTargetIn2);

	y += 4*u + 6*u;

	cboTargetIn3.addListener(this);
	cboTargetIn3.setBounds(x, y, 2 * w, 4 * u);
	cboTargetIn3.setName("cboTargetIn3");
	addAndMakeVisible(cboTargetIn3);

	x += 2*w;
	y = 2*u;

	lblReverse.setBounds(x, y, w + 2*u, 4*u);
	lblReverse.setColour(Label::textColourId, Colour(0, 255, 0));
	lblReverse.setText("Reverse", NotificationType::dontSendNotification);
	addAndMakeVisible(lblReverse);

	y += 4*u + 2*u;

	chkReverseIn0.addListener(this);
	chkReverseIn0.setBounds(x, y, w + 2*u, 4*u);
	chkReverseIn0.setName("chkReverseIn0");
	addAndMakeVisible(chkReverseIn0);

	y += 4*u + 6*u;

	chkReverseIn1.addListener(this);
	chkReverseIn1.setBounds(x, y, w + 2*u, 4*u);
	chkReverseIn1.setName("chkReverseIn1");
	addAndMakeVisible(chkReverseIn1);

	y += 4*u + 6*u;

	chkReverseIn2.addListener(this);
	chkReverseIn2.setBounds(x, y, w + 2 * u, 4 * u);
	chkReverseIn2.setName("chkReverseIn2");
	addAndMakeVisible(chkReverseIn2);

	y += 4*u + 6*u;

	chkReverseIn3.addListener(this);
	chkReverseIn3.setBounds(x, y, w + 2 * u, 4 * u);
	chkReverseIn3.setName("chkReverseIn3");
	addAndMakeVisible(chkReverseIn3);

	x += w + 2*u;
	y = 2*u;

	lblDropSysex.setBounds(x, y, w, 4*u);
	lblDropSysex.setColour(Label::textColourId, Colour(0, 255, 0));
	lblDropSysex.setText("Sysex", NotificationType::dontSendNotification);
	addAndMakeVisible(lblDropSysex);

	y += 4*u + 2*u;

	chkDropSysexIn0.addListener(this);
	chkDropSysexIn0.setBounds(x, y, w, 4*u);
	chkDropSysexIn0.setName("chkDropSysexIn0");
	addAndMakeVisible(chkDropSysexIn0);

	y += 4*u + 6*u;

	chkDropSysexIn1.addListener(this);
	chkDropSysexIn1.setBounds(x, y, w, 4*u);
	chkDropSysexIn1.setName("chkDropSysexIn1");
	addAndMakeVisible(chkDropSysexIn1);

	y += 4*u + 6*u;

	chkDropSysexIn2.addListener(this);
	chkDropSysexIn2.setBounds(x, y, w, 4 * u);
	chkDropSysexIn2.setName("chkDropSysexIn2");
	addAndMakeVisible(chkDropSysexIn2);

	y += 4*u + 6*u;

	chkDropSysexIn3.addListener(this);
	chkDropSysexIn3.setBounds(x, y, w, 4 * u);
	chkDropSysexIn3.setName("chkDropSysexIn3");
	addAndMakeVisible(chkDropSysexIn3);
	
	x += w;
	y = 2*u;

	lblDeviceOut.setBounds(x, y, 2*w, 4*u);
	lblDeviceOut.setColour(Label::textColourId, Colour(0, 255, 0));
	lblDeviceOut.setText("Out", NotificationType::dontSendNotification);
	addAndMakeVisible(lblDeviceOut);

	y += 4*u + 2*u;

	cboDeviceOut0.addListener(this);
	cboDeviceOut0.setBounds(x, y, 2*w, 4*u);
	cboDeviceOut0.setName("cboDeviceOut0");
	addAndMakeVisible(cboDeviceOut0);

	y += 4*u + 6*u;

	cboDeviceOut1.addListener(this);
	cboDeviceOut1.setBounds(x, y, 2*w, 4*u);
	cboDeviceOut1.setName("cboDeviceOut1");
	addAndMakeVisible(cboDeviceOut1);

	y += 4*u + 6*u;

	cboDeviceOut2.addListener(this);
	cboDeviceOut2.setBounds(x, y, 2 * w, 4 * u);
	cboDeviceOut2.setName("cboDeviceOut2");
	addAndMakeVisible(cboDeviceOut2);

	y += 4*u + 6*u;

	cboDeviceOut3.addListener(this);
	cboDeviceOut3.setBounds(x, y, 2 * w, 4 * u);
	cboDeviceOut3.setName("cboDeviceOut3");
	addAndMakeVisible(cboDeviceOut3);

	x += 2*w;
	y = 2*u;

	lblMuteOut.setBounds(x, y, w, 4*u);
	lblMuteOut.setColour(Label::textColourId, Colour(0, 255, 0));
	lblMuteOut.setText("Mute", NotificationType::dontSendNotification);
	addAndMakeVisible(lblMuteOut);

	y += 4*u + 2*u;

	chkMuteOut0.addListener(this);
	chkMuteOut0.setBounds(x, y, w, 4*u);
	chkMuteOut0.setName("chkMuteOut0");
	addAndMakeVisible(chkMuteOut0);

	y += 4*u + 6*u;

	chkMuteOut1.addListener(this);
	chkMuteOut1.setBounds(x, y, w, 4*u);
	chkMuteOut1.setName("chkMuteOut1");
	addAndMakeVisible(chkMuteOut1);

	y += 4*u + 6*u;

	chkMuteOut2.addListener(this);
	chkMuteOut2.setBounds(x, y, w, 4 * u);
	chkMuteOut2.setName("chkMuteOut2");
	addAndMakeVisible(chkMuteOut2);

	y += 4*u + 6*u;

	chkMuteOut3.addListener(this);
	chkMuteOut3.setBounds(x, y, w, 4 * u);
	chkMuteOut3.setName("chkMuteOut3");
	addAndMakeVisible(chkMuteOut3);

	x += w;
	y = 2*u;

	lblAOut.setBounds(x, y, w, 4*u);
	lblAOut.setColour(Label::textColourId, Colour(0, 255, 0));
	lblAOut.setText("A", NotificationType::dontSendNotification);
	addAndMakeVisible(lblAOut);

	y += 4*u + 2*u;

	txtOutA0.addListener(this);
	txtOutA0.setBounds(x, y, w, 4*u);
	txtOutA0.setName("txtOutA0");
	addAndMakeVisible(txtOutA0);

	y += 4*u + 6*u;

	txtOutA1.addListener(this);
	txtOutA1.setBounds(x, y, w, 4*u);
	txtOutA1.setName("txtOutA1");
	addAndMakeVisible(txtOutA1);

	y += 4*u + 6*u;

	txtOutA2.addListener(this);
	txtOutA2.setBounds(x, y, w, 4*u);
	txtOutA2.setName("txtOutA2");
	addAndMakeVisible(txtOutA2);

	y += 4*u + 6*u;

	txtOutA3.addListener(this);
	txtOutA3.setBounds(x, y, w, 4*u);
	txtOutA3.setName("txtOutA3");
	addAndMakeVisible(txtOutA3);

	x += w;
	y = 2*u;

	lblBOut.setBounds(x, y, w, 4*u);
	lblBOut.setColour(Label::textColourId, Colour(0, 255, 0));
	lblBOut.setText("B", NotificationType::dontSendNotification);
	addAndMakeVisible(lblBOut);

	y += 4*u + 2*u;

	txtOutB0.addListener(this);
	txtOutB0.setBounds(x, y, w, 4*u);
	txtOutB0.setName("txtOutB0");
	addAndMakeVisible(txtOutB0);

	y += 4*u + 6*u;

	txtOutB1.addListener(this);
	txtOutB1.setBounds(x, y, w, 4*u);
	txtOutB1.setName("txtOutB1");
	addAndMakeVisible(txtOutB1);

	y += 4*u + 6*u;

	txtOutB2.addListener(this);
	txtOutB2.setBounds(x, y, w, 4*u);
	txtOutB2.setName("txtOutB2");
	addAndMakeVisible(txtOutB2);

	y += 4*u + 6*u;

	txtOutB3.addListener(this);
	txtOutB3.setBounds(x, y, w, 4*u);
	txtOutB3.setName("txtOutB3");
	addAndMakeVisible(txtOutB3);

	x -= w;
	y = 12*u;

	chkOutAB0.addListener(this);
	chkOutAB0.setBounds(x, y, w, 4*u);
	chkOutAB0.setName("chkOutAB0");
	addAndMakeVisible(chkOutAB0);

	y += 4*u + 6*u;

	chkOutAB1.addListener(this);
	chkOutAB1.setBounds(x, y, w, 4*u);
	chkOutAB1.setName("chkOutAB1");
	addAndMakeVisible(chkOutAB1);

	y += 4*u + 6*u;

	chkOutAB2.addListener(this);
	chkOutAB2.setBounds(x, y, w, 4*u);
	chkOutAB2.setName("chkOutAB2");
	addAndMakeVisible(chkOutAB2);

	y += 4*u + 6*u;

	chkOutAB3.addListener(this);
	chkOutAB3.setBounds(x, y, w, 4*u);
	chkOutAB3.setName("chkOutAB3");
	addAndMakeVisible(chkOutAB3);

	x += 5*u;
	y = 12*u;

	txtOutAB0.addListener(this);
	txtOutAB0.setBounds(x, y, 15*u, 4*u);
	txtOutAB0.setName("txtOutAB0");
	addAndMakeVisible(txtOutAB0);

	y += 4*u + 6*u;

	txtOutAB1.addListener(this);
	txtOutAB1.setBounds(x, y, 15*u, 4*u);
	txtOutAB1.setName("txtOutAB1");
	addAndMakeVisible(txtOutAB1);

	y += 4*u + 6*u;

	txtOutAB2.addListener(this);
	txtOutAB2.setBounds(x, y, 15*u, 4*u);
	txtOutAB2.setName("txtOutAB2");
	addAndMakeVisible(txtOutAB2);

	y += 4*u + 6*u;

	txtOutAB3.addListener(this);
	txtOutAB3.setBounds(x, y, 15*u, 4*u);
	txtOutAB3.setName("txtOutAB3");
	addAndMakeVisible(txtOutAB3);

	x += 15*u;
	y = 2*u;

	lblCOut.setBounds(x, y, w, 4*u);
	lblCOut.setColour(Label::textColourId, Colour(0, 255, 0));
	lblCOut.setText("C", NotificationType::dontSendNotification);
	addAndMakeVisible(lblCOut);

	y += 4*u + 2*u;

	txtOutC0.addListener(this);
	txtOutC0.setBounds(x, y, w, 4*u);
	txtOutC0.setName("txtOutC0");
	addAndMakeVisible(txtOutC0);

	y += 4*u + 6*u;

	txtOutC1.addListener(this);
	txtOutC1.setBounds(x, y, w, 4*u);
	txtOutC1.setName("txtOutC1");
	addAndMakeVisible(txtOutC1);

	y += 4*u + 6*u;

	txtOutC2.addListener(this);
	txtOutC2.setBounds(x, y, w, 4*u);
	txtOutC2.setName("txtOutC2");
	addAndMakeVisible(txtOutC2);

	y += 4*u + 6*u;

	txtOutC3.addListener(this);
	txtOutC3.setBounds(x, y, w, 4*u);
	txtOutC3.setName("txtOutC3");
	addAndMakeVisible(txtOutC3);

	x += w;
	y = 2*u;

	lblDOut.setBounds(x, y, w, 4*u);
	lblDOut.setColour(Label::textColourId, Colour(0, 255, 0));
	lblDOut.setText("D", NotificationType::dontSendNotification);
	addAndMakeVisible(lblDOut);

	y += 4*u + 2*u;

	txtOutD0.addListener(this);
	txtOutD0.setBounds(x, y, w, 4*u);
	txtOutD0.setName("txtOutD0");
	addAndMakeVisible(txtOutD0);

	y += 4*u + 6*u;

	txtOutD1.addListener(this);
	txtOutD1.setBounds(x, y, w, 4*u);
	txtOutD1.setName("txtOutD1");
	addAndMakeVisible(txtOutD1);

	y += 4*u + 6*u;

	txtOutD2.addListener(this);
	txtOutD2.setBounds(x, y, w, 4*u);
	txtOutD2.setName("txtOutD2");
	addAndMakeVisible(txtOutD2);

	y += 4*u + 6*u;

	txtOutD3.addListener(this);
	txtOutD3.setBounds(x, y, w, 4*u);
	txtOutD3.setName("txtOutD3");
	addAndMakeVisible(txtOutD3);

	x -= w;
	y = 12*u;

	chkOutCD0.addListener(this);
	chkOutCD0.setBounds(x, y, w, 4*u);
	chkOutCD0.setName("chkOutCD0");
	addAndMakeVisible(chkOutCD0);

	y += 4*u + 6*u;

	chkOutCD1.addListener(this);
	chkOutCD1.setBounds(x, y, w, 4*u);
	chkOutCD1.setName("chkOutCD1");
	addAndMakeVisible(chkOutCD1);

	y += 4*u + 6*u;

	chkOutCD2.addListener(this);
	chkOutCD2.setBounds(x, y, w, 4*u);
	chkOutCD2.setName("chkOutCD2");
	addAndMakeVisible(chkOutCD2);

	y += 4*u + 6*u;

	chkOutCD3.addListener(this);
	chkOutCD3.setBounds(x, y, w, 4*u);
	chkOutCD3.setName("chkOutCD3");
	addAndMakeVisible(chkOutCD3);

	x += 5*u;
	y = 12*u;

	txtOutCD0.addListener(this);
	txtOutCD0.setBounds(x, y, 15*u, 4*u);
	txtOutCD0.setName("txtOutCD0");
	addAndMakeVisible(txtOutCD0);

	y += 4*u + 6*u;

	txtOutCD1.addListener(this);
	txtOutCD1.setBounds(x, y, 15*u, 4*u);
	txtOutCD1.setName("txtOutCD1");
	addAndMakeVisible(txtOutCD1);

	y += 4*u + 6*u;

	txtOutCD2.addListener(this);
	txtOutCD2.setBounds(x, y, 15*u, 4*u);
	txtOutCD2.setName("txtOutCD2");
	addAndMakeVisible(txtOutCD2);

	y += 4*u + 6*u;

	txtOutCD3.addListener(this);
	txtOutCD3.setBounds(x, y, 15*u, 4*u);
	txtOutCD3.setName("txtOutCD3");
	addAndMakeVisible(txtOutCD3);

	x += 15*u;
	y = 2*u;

	lblEOut.setBounds(x, y, w, 4*u);
	lblEOut.setColour(Label::textColourId, Colour(0, 255, 0));
	lblEOut.setText("E", NotificationType::dontSendNotification);
	addAndMakeVisible(lblEOut);

	y += 4*u + 2*u;

	txtOutE0.addListener(this);
	txtOutE0.setBounds(x, y, w, 4*u);
	txtOutE0.setName("txtOutE0");
	addAndMakeVisible(txtOutE0);

	y += 4*u + 6*u;

	txtOutE1.addListener(this);
	txtOutE1.setBounds(x, y, w, 4*u);
	txtOutE1.setName("txtOutE1");
	addAndMakeVisible(txtOutE1);

	y += 4*u + 6*u;

	txtOutE2.addListener(this);
	txtOutE2.setBounds(x, y, w, 4*u);
	txtOutE2.setName("txtOutE2");
	addAndMakeVisible(txtOutE2);

	y += 4*u + 6*u;

	txtOutE3.addListener(this);
	txtOutE3.setBounds(x, y, w, 4*u);
	txtOutE3.setName("txtOutE3");
	addAndMakeVisible(txtOutE3);

	x += w;
	y = 2*u;

	lblFOut.setBounds(x, y, w, 4*u);
	lblFOut.setColour(Label::textColourId, Colour(0, 255, 0));
	lblFOut.setText("F", NotificationType::dontSendNotification);
	addAndMakeVisible(lblFOut);

	y += 4*u + 2*u;

	txtOutF0.addListener(this);
	txtOutF0.setBounds(x, y, w, 4*u);
	txtOutF0.setName("txtOutF0");
	addAndMakeVisible(txtOutF0);

	y += 4*u + 6*u;

	txtOutF1.addListener(this);
	txtOutF1.setBounds(x, y, w, 4*u);
	txtOutF1.setName("txtOutF1");
	addAndMakeVisible(txtOutF1);

	y += 4*u + 6*u;

	txtOutF2.addListener(this);
	txtOutF2.setBounds(x, y, w, 4*u);
	txtOutF2.setName("txtOutF2");
	addAndMakeVisible(txtOutF2);

	y += 4*u + 6*u;

	txtOutF3.addListener(this);
	txtOutF3.setBounds(x, y, w, 4*u);
	txtOutF3.setName("txtOutF3");
	addAndMakeVisible(txtOutF3);

	x -= w;
	y = 12*u;

	chkOutEF0.addListener(this);
	chkOutEF0.setBounds(x, y, w, 4*u);
	chkOutEF0.setName("chkOutEF0");
	addAndMakeVisible(chkOutEF0);

	y += 4*u + 6*u;

	chkOutEF1.addListener(this);
	chkOutEF1.setBounds(x, y, w, 4*u);
	chkOutEF1.setName("chkOutEF1");
	addAndMakeVisible(chkOutEF1);

	y += 4*u + 6*u;

	chkOutEF2.addListener(this);
	chkOutEF2.setBounds(x, y, w, 4*u);
	chkOutEF2.setName("chkOutEF2");
	addAndMakeVisible(chkOutEF2);

	y += 4*u + 6*u;

	chkOutEF3.addListener(this);
	chkOutEF3.setBounds(x, y, w, 4*u);
	chkOutEF3.setName("chkOutEF3");
	addAndMakeVisible(chkOutEF3);

	x += 5*u;
	y = 12*u;

	txtOutEF0.addListener(this);
	txtOutEF0.setBounds(x, y, 15*u, 4*u);
	txtOutEF0.setName("txtOutEF0");
	addAndMakeVisible(txtOutEF0);

	y += 4*u + 6*u;

	txtOutEF1.addListener(this);
	txtOutEF1.setBounds(x, y, 15*u, 4*u);
	txtOutEF1.setName("txtOutEF1");
	addAndMakeVisible(txtOutEF1);

	y += 4*u + 6*u;

	txtOutEF2.addListener(this);
	txtOutEF2.setBounds(x, y, 15*u, 4*u);
	txtOutEF2.setName("txtOutEF2");
	addAndMakeVisible(txtOutEF2);

	y += 4*u + 6*u;

	txtOutEF3.addListener(this);
	txtOutEF3.setBounds(x, y, 15*u, 4*u);
	txtOutEF3.setName("txtOutEF3");
	addAndMakeVisible(txtOutEF3);

	// Footer

	btnFirst.addListener(this);
	btnFirst.setBounds(10, 350, 16, 4*u);
	btnFirst.setButtonText("First");
	addAndMakeVisible(btnFirst);

	btnPrev.addListener(this);
	btnPrev.setBounds(30, 350, 16, 4*u);
	btnPrev.setButtonText("Prev");
	addAndMakeVisible(btnPrev);

	btnNext.addListener(this);
	btnNext.setBounds(880, 350, 16, 4*u);
	btnNext.setButtonText("Next");
	addAndMakeVisible(btnNext);

	btnLast.addListener(this);
	btnLast.setBounds(900, 350, 16, 4*u);
	btnLast.setButtonText("Last");
	addAndMakeVisible(btnLast);
	
	// Ouf enough of controls :)

	openAllMidiDevices(); //TODO: Review this !
	cboDeviceIn0.addItem(NO_DEVICE, 1); // Id's start always at 1
	cboDeviceIn1.addItem(NO_DEVICE, 1);
	cboDeviceIn2.addItem(NO_DEVICE, 1);
	cboDeviceIn3.addItem(NO_DEVICE, 1);
	for (int i = 0; i < m_midiInputDeviceNames.size(); i++)
	{
		cboDeviceIn0.addItem(m_midiInputDeviceNames[i], i + 2);
		cboDeviceIn1.addItem(m_midiInputDeviceNames[i], i + 2);
		cboDeviceIn2.addItem(m_midiInputDeviceNames[i], i + 2);
		cboDeviceIn3.addItem(m_midiInputDeviceNames[i], i + 2);
	}
	// Doesn't work :(
	//cboDeviceIn0.setSelectedId(1); 
	// Not better... Too early ?
	cboDeviceIn0.setText(NO_DEVICE);
	cboDeviceIn1.setSelectedId(1);

	cboTargetIn0.addItem(NO_DEVICE, 1);
	cboTargetIn1.addItem(NO_DEVICE, 1);
	cboTargetIn2.addItem(NO_DEVICE, 1);
	cboTargetIn3.addItem(NO_DEVICE, 1);
	for (int i = 0; i < m_midiOutputDeviceNames.size(); i++)
	{
		cboTargetIn0.addItem(m_midiOutputDeviceNames[i], i + 2);
		cboTargetIn1.addItem(m_midiOutputDeviceNames[i], i + 2);
		cboTargetIn2.addItem(m_midiOutputDeviceNames[i], i + 2);
		cboTargetIn3.addItem(m_midiOutputDeviceNames[i], i + 2);
	}
	// Doesn't work :(
	//cboTarget0.setSelectedId(1);
	// Not better... Too early ?
	cboTargetIn0.setSelectedItemIndex(0);
	cboTargetIn1.setSelectedId(1);

	cboDeviceOut0.addItem(NO_DEVICE, 1);
	cboDeviceOut1.addItem(NO_DEVICE, 1);
	cboDeviceOut2.addItem(NO_DEVICE, 1);
	cboDeviceOut3.addItem(NO_DEVICE, 1);
	for (int i = 0; i < m_midiOutputDeviceNames.size(); i++)
	{
		cboDeviceOut0.addItem(m_midiOutputDeviceNames[i], i + 2);
		cboDeviceOut1.addItem(m_midiOutputDeviceNames[i], i + 2);
		cboDeviceOut2.addItem(m_midiOutputDeviceNames[i], i + 2);
		cboDeviceOut3.addItem(m_midiOutputDeviceNames[i], i + 2);
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
/*
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
*/
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
	logThis2("controlName = %s & controlValue = %s", Target::screen, controlName.c_str(), controlValue.c_str());

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
	else if ((sender == &cboDeviceOut0) || (sender == &cboDeviceOut1) || (sender == &cboDeviceOut2) || (sender == &cboDeviceOut3))
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

void MainComponent::textEditorTextChanged(TextEditor &sender)
{
	std::string controlName = sender.getName().toStdString();
	std::string controlValue = sender.getText().toStdString();
	logThis2("controlName = %s & controlValue = %s", Target::screen, controlName.c_str(), controlValue.c_str());

	pageControlValues[m_currentPage][controlName] = controlValue; // Always save the change
}

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

	// Ok but the image doesn't fit well the window size / orientation
	//Image background = juce::ImageCache::getFromMemory(BinaryData::background_jpg, BinaryData::background_jpgSize);
	//g.drawImageAt(background, 0, 0);
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
	txtInC0.setText(pageControlValues[index]["txtInC0"]);
	txtInD0.setText(pageControlValues[index]["txtInD0"]);
	txtInCD0.setText(pageControlValues[index]["txtInCD0"]);
	txtInE0.setText(pageControlValues[index]["txtInE0"]);
	txtInF0.setText(pageControlValues[index]["txtInF0"]);
	txtInEF0.setText(pageControlValues[index]["txtInEF0"]);
	cboTargetIn0.setText(pageControlValues[index]["cboTargetIn0"]);
	cboDeviceOut0.setText(pageControlValues[index]["cboDeviceOut0"]);
	txtOutA0.setText(pageControlValues[index]["txtOutA0"]);
	txtOutB0.setText(pageControlValues[index]["txtOutB0"]);
	txtOutAB0.setText(pageControlValues[index]["txtOutAB0"]);
	txtOutC0.setText(pageControlValues[index]["txtOutC0"]);
	txtOutD0.setText(pageControlValues[index]["txtOutD0"]);
	txtOutCD0.setText(pageControlValues[index]["txtOutCD0"]);
	txtOutE0.setText(pageControlValues[index]["txtOutE0"]);
	txtOutF0.setText(pageControlValues[index]["txtOutF0"]);
	txtOutEF0.setText(pageControlValues[index]["txtOutEF0"]);

	// Care of std::stoi when string to non int conversion occurs ! See :
	// https://stackoverflow.com/questions/29250531/microsoft-c-exception-stdinvalid-argument-at-memory-location
	chkInAB0.setToggleState(CSTOI(pageControlValues[index]["chkInAB0"]) == 1, false); 
	chkInCD0.setToggleState(CSTOI(pageControlValues[index]["chkInCD0"]) == 1, false);
	chkInEF0.setToggleState(CSTOI(pageControlValues[index]["chkInEF0"]) == 1, false);
	chkOutAB0.setToggleState(CSTOI(pageControlValues[index]["chkOutAB0"]) == 1, false);
	chkOutCD0.setToggleState(CSTOI(pageControlValues[index]["chkOutCD0"]) == 1, false);
	chkOutEF0.setToggleState(CSTOI(pageControlValues[index]["chkOutEF0"]) == 1, false);
	chkReverseIn0.setToggleState(CSTOI(pageControlValues[index]["chkReverseIn0"]) == 1, false);
	chkDropSysexIn0.setToggleState(CSTOI(pageControlValues[index]["chkDropSysexIn0"]) == 1, false);
	chkMuteIn0.setToggleState(CSTOI(pageControlValues[index]["chkMuteIn0"]) == 1, false);
	chkMuteOut0.setToggleState(CSTOI(pageControlValues[index]["chkMuteOut0"]) == 1, false);

	// Line 1

	cboDeviceIn1.setText(pageControlValues[index]["cboDeviceIn1"]);
	txtInA1.setText(pageControlValues[index]["txtInA1"]);
	txtInB1.setText(pageControlValues[index]["txtInB1"]);
	txtInAB1.setText(pageControlValues[index]["txtInAB1"]);
	txtInC1.setText(pageControlValues[index]["txtInC1"]);
	txtInD1.setText(pageControlValues[index]["txtInD1"]);
	txtInCD1.setText(pageControlValues[index]["txtInCD1"]);
	txtInE1.setText(pageControlValues[index]["txtInE1"]);
	txtInF1.setText(pageControlValues[index]["txtInF1"]);
	txtInEF1.setText(pageControlValues[index]["txtInEF1"]);
	cboTargetIn1.setText(pageControlValues[index]["cboTargetIn1"]);
	cboDeviceOut1.setText(pageControlValues[index]["cboDeviceOut1"]);
	txtOutA1.setText(pageControlValues[index]["txtOutA1"]);
	txtOutB1.setText(pageControlValues[index]["txtOutB1"]);
	txtOutAB1.setText(pageControlValues[index]["txtOutAB1"]);
	txtOutC1.setText(pageControlValues[index]["txtOutC1"]);
	txtOutD1.setText(pageControlValues[index]["txtOutD1"]);
	txtOutCD1.setText(pageControlValues[index]["txtOutCD1"]);
	txtOutE1.setText(pageControlValues[index]["txtOutE1"]);
	txtOutF1.setText(pageControlValues[index]["txtOutF1"]);
	txtOutEF1.setText(pageControlValues[index]["txtOutEF1"]);

	chkInAB1.setToggleState(CSTOI(pageControlValues[index]["chkInAB1"]) == 1, false);
	chkInCD1.setToggleState(CSTOI(pageControlValues[index]["chkInCD1"]) == 1, false);
	chkInEF1.setToggleState(CSTOI(pageControlValues[index]["chkInEF1"]) == 1, false);
	chkOutAB1.setToggleState(CSTOI(pageControlValues[index]["chkOutAB1"]) == 1, false);
	chkOutCD1.setToggleState(CSTOI(pageControlValues[index]["chkOutCD1"]) == 1, false);
	chkOutEF1.setToggleState(CSTOI(pageControlValues[index]["chkOutEF1"]) == 1, false);
	chkReverseIn1.setToggleState(CSTOI(pageControlValues[index]["chkReverseIn1"]) == 1, false);
	chkDropSysexIn1.setToggleState(CSTOI(pageControlValues[index]["chkDropSysexIn1"]) == 1, false);
	chkMuteIn1.setToggleState(CSTOI(pageControlValues[index]["chkMuteIn1"]) == 1, false);
	chkMuteOut1.setToggleState(CSTOI(pageControlValues[index]["chkMuteOut1"]) == 1, false);

	cboDeviceIn2.setText(pageControlValues[index]["cboDeviceIn2"]);
	txtInA2.setText(pageControlValues[index]["txtInA2"]);
	txtInB2.setText(pageControlValues[index]["txtInB2"]);
	txtInAB2.setText(pageControlValues[index]["txtInAB2"]);
	txtInC2.setText(pageControlValues[index]["txtInC2"]);
	txtInD2.setText(pageControlValues[index]["txtInD2"]);
	txtInCD2.setText(pageControlValues[index]["txtInCD2"]);
	txtInE2.setText(pageControlValues[index]["txtInE2"]);
	txtInF2.setText(pageControlValues[index]["txtInF2"]);
	txtInEF2.setText(pageControlValues[index]["txtInEF2"]);
	cboTargetIn2.setText(pageControlValues[index]["cboTargetIn2"]);
	cboDeviceOut2.setText(pageControlValues[index]["cboDeviceOut2"]);
	txtOutA2.setText(pageControlValues[index]["txtOutA2"]);
	txtOutB2.setText(pageControlValues[index]["txtOutB2"]);
	txtOutAB2.setText(pageControlValues[index]["txtOutAB2"]);
	txtOutC2.setText(pageControlValues[index]["txtOutC2"]);
	txtOutD2.setText(pageControlValues[index]["txtOutD2"]);
	txtOutCD2.setText(pageControlValues[index]["txtOutCD2"]);
	txtOutE2.setText(pageControlValues[index]["txtOutE2"]);
	txtOutF2.setText(pageControlValues[index]["txtOutF2"]);
	txtOutEF2.setText(pageControlValues[index]["txtOutEF2"]);

	// Care of std::stoi when string to non int conversion occurs ! See :
	// https://stackoverflow.com/questions/29250531/microsoft-c-exception-stdinvalid-argument-at-memory-location
	chkInAB2.setToggleState(CSTOI(pageControlValues[index]["chkInAB2"]) == 1, false);
	chkInCD2.setToggleState(CSTOI(pageControlValues[index]["chkInCD2"]) == 1, false);
	chkInEF2.setToggleState(CSTOI(pageControlValues[index]["chkInEF2"]) == 1, false);
	chkOutAB2.setToggleState(CSTOI(pageControlValues[index]["chkOutAB2"]) == 1, false);
	chkOutCD2.setToggleState(CSTOI(pageControlValues[index]["chkOutCD2"]) == 1, false);
	chkOutEF2.setToggleState(CSTOI(pageControlValues[index]["chkOutEF2"]) == 1, false);
	chkReverseIn2.setToggleState(CSTOI(pageControlValues[index]["chkReverseIn2"]) == 1, false);
	chkDropSysexIn2.setToggleState(CSTOI(pageControlValues[index]["chkDropSysexIn2"]) == 1, false);
	chkMuteIn2.setToggleState(CSTOI(pageControlValues[index]["chkMuteIn2"]) == 1, false);
	chkMuteOut2.setToggleState(CSTOI(pageControlValues[index]["chkMuteOut2"]) == 1, false);

	cboDeviceIn3.setText(pageControlValues[index]["cboDeviceIn3"]);
	txtInA3.setText(pageControlValues[index]["txtInA3"]);
	txtInB3.setText(pageControlValues[index]["txtInB3"]);
	txtInAB3.setText(pageControlValues[index]["txtInAB3"]);
	txtInC3.setText(pageControlValues[index]["txtInC3"]);
	txtInD3.setText(pageControlValues[index]["txtInD3"]);
	txtInCD3.setText(pageControlValues[index]["txtInCD3"]);
	txtInE3.setText(pageControlValues[index]["txtInE3"]);
	txtInF3.setText(pageControlValues[index]["txtInF3"]);
	txtInEF3.setText(pageControlValues[index]["txtInEF3"]);
	cboTargetIn3.setText(pageControlValues[index]["cboTargetIn3"]);
	cboDeviceOut3.setText(pageControlValues[index]["cboDeviceOut3"]);
	txtOutA3.setText(pageControlValues[index]["txtOutA3"]);
	txtOutB3.setText(pageControlValues[index]["txtOutB3"]);
	txtOutAB3.setText(pageControlValues[index]["txtOutAB3"]);
	txtOutC3.setText(pageControlValues[index]["txtOutC3"]);
	txtOutD3.setText(pageControlValues[index]["txtOutD3"]);
	txtOutCD3.setText(pageControlValues[index]["txtOutCD3"]);
	txtOutE3.setText(pageControlValues[index]["txtOutE3"]);
	txtOutF3.setText(pageControlValues[index]["txtOutF3"]);
	txtOutEF3.setText(pageControlValues[index]["txtOutEF3"]);

	// Care of std::stoi when string to non int conversion occurs ! See :
	// https://stackoverflow.com/questions/29250531/microsoft-c-exception-stdinvalid-argument-at-memory-location
	chkInAB3.setToggleState(CSTOI(pageControlValues[index]["chkInAB3"]) == 1, false);
	chkInCD3.setToggleState(CSTOI(pageControlValues[index]["chkInCD3"]) == 1, false);
	chkInEF3.setToggleState(CSTOI(pageControlValues[index]["chkInEF3"]) == 1, false);
	chkOutAB3.setToggleState(CSTOI(pageControlValues[index]["chkOutAB3"]) == 1, false);
	chkOutCD3.setToggleState(CSTOI(pageControlValues[index]["chkOutCD3"]) == 1, false);
	chkOutEF3.setToggleState(CSTOI(pageControlValues[index]["chkOutEF3"]) == 1, false);
	chkReverseIn3.setToggleState(CSTOI(pageControlValues[index]["chkReverseIn3"]) == 1, false);
	chkDropSysexIn3.setToggleState(CSTOI(pageControlValues[index]["chkDropSysexIn3"]) == 1, false);
	chkMuteIn3.setToggleState(CSTOI(pageControlValues[index]["chkMuteIn3"]) == 1, false);
	chkMuteOut3.setToggleState(CSTOI(pageControlValues[index]["chkMuteOut3"]) == 1, false);
}

std::string MainComponent::dump(const juce::MidiMessage &mm)
{
	std::stringstream ss;
	const juce::uint8* p = mm.getRawData();

	for (int i = 0; i < mm.getRawDataSize(); i++)
	{
		ss << std::hex << static_cast<int>(*(p + i)) << " ";
	}

	return ss.str();
}

void MainComponent::handleIncomingMidiMessage(juce::MidiInput* source, const juce::MidiMessage& message)
{
	// Probably SYSEX... Just ignore it for now, later we could push it forward :)
	if (message.getRawDataSize() > 3)
	{
		/*
		if (...)
		{
			->sendMessageNow(message);
		}
		*/
		return;
	}

	//TODO: We'll see later for message of size 2 (Care ! See : http://midi.teragonaudio.com/tech/midispec/run.htm )
	// Introduce a container for each input device holding the first byte ?

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
	}
	logThis2("Incomming message from device %s : %s", Target::midiIn, source->getName().toStdString().c_str(), dump(message).c_str());

	std::string midn; // Midi Input Device Name
	std::string modn;
	std::string mtdn;

	for (int i = 0; i < PAGE_COUNT; i++)
	{
		for (int j = 0; j < ROW_COUNT; j++)
		{			
			midn = pageControlValues[i][std::string("cboDeviceIn") + std::to_string(j)]; // Opposite of int x = std::stoi(s); !-)
			bool muteIn = (CSTOI(pageControlValues[i][std::string("chkMuteIn") + std::to_string(j)]) != 0);
			if (!muteIn and (midn.size() > 0) and (midn == source->getName()))
			{
				modn = pageControlValues[i][std::string("cboDeviceOut") + std::to_string(j)];
				if (modn == "")
				{
					mtdn = pageControlValues[i][std::string("cboTargetIn") + std::to_string(j)];
					if (mtdn != "")
					{
						for (int k = 0; k < PAGE_COUNT; k++)
						{
							for (int l = 0; l < ROW_COUNT; l++)
							{
								modn = pageControlValues[k][std::string("cboDeviceOut") + std::to_string(l)];
								if (modn == mtdn)
								{
									logThis("Using the target OUT", Target::misc);
									process(i, j, k, l);
								}
							}
						}
					}
				}
				else
				{
					logThis("Using the classical OUT", Target::misc);
					process(i, j, i, j);
				}
			}
		}
	}
}

void MainComponent::process(int pageIn, int rowIn, int pageOut, int rowOut)
{
	logThis("Check out mute", Target::misc);
	bool muteOut = (CSTOI(pageControlValues[pageOut][std::string("chkMuteOut") + std::to_string(rowOut)]) != 0);
	if (muteOut)
	{
		return;
	}

	logThis("About to filter", Target::misc);
	if (!filter(pageIn, rowIn))
	{
		logThis2("Midi message didn't pass the filter : page = %d ; row = %d", Target::misc, pageIn, rowIn);
		return;
	}

	logThis("About to transform", Target::misc);
	transform(pageIn, rowIn);
	logThis("About to generate", Target::misc);
	juce::MidiMessage msg = generate(pageOut, rowOut);
	std::string modn = pageControlValues[pageOut][std::string("cboDeviceOut") + std::to_string(rowOut)];
	MidiOutput *mo = m_mods[m_midiOutputDeviceNames.indexOf(modn)];
	logThis2("Outgoing message to device %s : %s", Target::midiOut, mo->getName().toStdString().c_str(), dump(msg).c_str());
	mo->sendMessageNow(msg);
}

bool MainComponent::compare(const std::string &filterValue, byte currentValue)
{
	byte value = (byte) CSTOI(filterValue.substr(1)); // We 'll see later for hex support
	if (filterValue[0] == '!')
	{
		return currentValue != value;
	}
	else if (filterValue[0] == '<')
	{
		return currentValue < value;
	}
	else if (filterValue[0] == '>')
	{
		return (currentValue > value);
	}
	else if (filterValue[0] == '=')
	{
		return (currentValue == value);
	}
	else
	{
		logThis2("Unknown first character = %c", Target::misc, filterValue[0]);
		return false;
	}
}

bool MainComponent::filter(int page, int row)
{
	std::string high, low, middle; // IE : (A and B) or AB
		
	if (CSTOI(pageControlValues[page][std::string("chkInAB") + std::to_string(row)]) != 0)
	{
		middle = trim(pageControlValues[page][std::string("txtInAB") + std::to_string(row)]);
		if ((middle.size() > 1) and (!compare(middle, midiInByte0)))
		{
			return false;
		}
	}
	else
	{
		high = trim(pageControlValues[page][std::string("txtInA") + std::to_string(row)]);
		if ((high.size() > 1) and (!compare(high, midiInHighNibble0)))
		{
			return false;
		}

		low = trim(pageControlValues[page][std::string("txtInB") + std::to_string(row)]);
		if ((low.size() > 1) and (!compare(low, midiInLowNibble0)))
		{
			return false;
		}		
	}

	if (CSTOI(pageControlValues[page][std::string("chkInCD") + std::to_string(row)]) != 0)
	{
		middle = trim(pageControlValues[page][std::string("txtInCD") + std::to_string(row)]);
		if ((middle.size() > 1) and(!compare(middle, midiInByte0)))
		{
			return false;
		}
	}
	else
	{
		high = trim(pageControlValues[page][std::string("txtInC") + std::to_string(row)]);
		if ((high.size() > 1) and(!compare(high, midiInHighNibble0)))
		{
			return false;
		}

		low = trim(pageControlValues[page][std::string("txtInD") + std::to_string(row)]);
		if ((low.size() > 1) and(!compare(low, midiInLowNibble0)))
		{
			return false;
		}
	}

	if (CSTOI(pageControlValues[page][std::string("chkInEF") + std::to_string(row)]) != 0)
	{
		middle = trim(pageControlValues[page][std::string("txtInEF") + std::to_string(row)]);
		if ((middle.size() > 1) and(!compare(middle, midiInByte0)))
		{
			return false;
		}
	}
	else
	{
		high = trim(pageControlValues[page][std::string("txtInE") + std::to_string(row)]);
		if ((high.size() > 1) and(!compare(high, midiInHighNibble0)))
		{
			return false;
		}

		low = trim(pageControlValues[page][std::string("txtInF") + std::to_string(row)]);
		if ((low.size() > 1) and(!compare(low, midiInLowNibble0)))
		{
			return false;
		}
	}

	return true;	
}

/*
void MainComponent::applyOutputFormula(int page, int row)
{
//
}
*/

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
	else
	{
		midiOutHighNibble0 = midiInHighNibble0;
	}

	formula = pageControlValues[page][std::string("txtOutB") + s];
	if (formula.size() > 0)
	{
		if (parser.compile(formula, expression))
		{
			midiOutLowNibble0 = static_cast<byte>(expression.value());
		}
	}
	else
	{
		midiOutLowNibble0 = midiInLowNibble0;
	}

	formula = pageControlValues[page][std::string("txtOutAB") + s];
	if (formula.size() > 0)
	{
		if (parser.compile(formula, expression))
		{
			midiOutByte0 = static_cast<byte>(expression.value());
		}
	}
	else
	{
		midiOutByte0 = midiInByte0;
	}

	formula = pageControlValues[page][std::string("txtOutC") + s];
	if (formula.size() > 0)
	{
		if (parser.compile(formula, expression))
		{
			midiOutHighNibble1 = static_cast<byte>(expression.value());
		}
	}
	else
	{
		midiOutHighNibble1 = midiInHighNibble1;
	}

	formula = pageControlValues[page][std::string("txtOutD") + s];
	if (formula.size() > 0)
	{
		if (parser.compile(formula, expression))
		{
			midiOutLowNibble1 = static_cast<byte>(expression.value());
		}
	}
	else
	{
		midiOutLowNibble1 = midiInLowNibble1;
	}

	formula = pageControlValues[page][std::string("txtOutCD") + s];
	if (formula.size() > 0)
	{
		if (parser.compile(formula, expression))
		{
			midiOutByte1 = static_cast<byte>(expression.value());
		}
	}
	else
	{
		midiOutByte1 = midiInByte1;
	}

	formula = pageControlValues[page][std::string("txtOutE") + s];
	if (formula.size() > 0)
	{
		if (parser.compile(formula, expression))
		{
			midiOutHighNibble2 = static_cast<byte>(expression.value());
		}
	}
	else
	{
		midiOutHighNibble2 = midiInHighNibble2;
	}

	formula = pageControlValues[page][std::string("txtOutF") + s];
	if (formula.size() > 0)
	{
		if (parser.compile(formula, expression))
		{
			midiOutLowNibble2 = static_cast<byte>(expression.value());
		}
	}
	else
	{
		midiOutLowNibble2 = midiInLowNibble2;
	}

	formula = pageControlValues[page][std::string("txtOutEF") + s];
	if (formula.size() > 0)
	{
		if (parser.compile(formula, expression))
		{
			midiOutByte2 = static_cast<byte>(expression.value());
		}
	}
	else
	{
		midiOutByte2 = midiInByte2;
	}
}

juce::MidiMessage MainComponent::generate(int page, int row)
{
	byte b0, b1, b2;

	if (CSTOI(pageControlValues[page][std::string("chkOutAB") + std::to_string(row)]) != 0)
	{
		b0 = midiOutByte0;
	}
	else
	{
		b0 = (midiOutHighNibble0 << 4) | (midiOutLowNibble0 & 0x0F);
	}

	if (CSTOI(pageControlValues[page][std::string("chkOutCD") + std::to_string(row)]) != 0)
	{
		b1 = midiOutByte1;
	}
	else
	{
		b1 = (midiOutHighNibble1 << 4) | (midiOutLowNibble1 & 0x0F);
	}

	if (CSTOI(pageControlValues[page][std::string("chkOutEF") + std::to_string(row)]) != 0)
	{
		b2 = midiOutByte2;
	}
	else
	{
		b2 = (midiOutHighNibble2 << 4) | (midiOutLowNibble2 & 0x0F);
	}

	return juce::MidiMessage(b0, b1, b2);
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
