/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainContentComponent   : public AnimatedAppComponent
{
public:
    //==============================================================================
    MainContentComponent()
    {
        setSize (750, 420);
        setFramesPerSecond (60);
        
        addAndMakeVisible(rig1Button);
        addAndMakeVisible(rig2Button);
        addAndMakeVisible(rig3Button);
        addAndMakeVisible(rig4Button);
        addAndMakeVisible(rig5Button);
        addAndMakeVisible(performanceUpButton);
        addAndMakeVisible(performanceDownButton);

        
    }

    ~MainContentComponent()
    {
    }

    void update() override
    {
        // This function is called at the frequency specified by the setFramesPerSecond() call
        // in the constructor. You can use it to update counters, animate values, etc.
    }

    void paint (Graphics& g) override
    {
        // (Our component is opaque, so we must completely fill the background with a solid colour)
        g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));
        
        Rectangle<float> windowArea (0, 0, getWidth(), getHeight());
        

        frontPanel->drawWithin(g, windowArea, RectanglePlacement::centred, 1.0);
    }

    void resized() override
    {
        // This is called when the MainContentComponent is resized.
        // If you add any child components, this is where you should
        // update their positions.
        
        rig1Button.setBoundsRelative(0.046, 0.88, 0.03, 0.051);
        rig2Button.setBoundsRelative(0.192, 0.88, 0.03, 0.051);
        rig3Button.setBoundsRelative(0.338, 0.88, 0.03, 0.051);
        rig4Button.setBoundsRelative(0.484, 0.88, 0.03, 0.051);
        rig5Button.setBoundsRelative(0.63, 0.88, 0.03, 0.051);
        performanceUpButton.setBoundsRelative(0.776, 0.88, 0.03, 0.051);
        performanceDownButton.setBoundsRelative(0.922, 0.88, 0.03, 0.051);
    }


private:
    //==============================================================================

    // This is needed for the virtual front panel while developing
    ScopedPointer<Drawable> frontPanel = Drawable::createFromImageData(BinaryData::CentralControlUnitFrontPanel_svg, BinaryData::CentralControlUnitFrontPanel_svgSize);
    
    TextButton rig1Button, rig2Button, rig3Button, rig4Button, rig5Button, performanceUpButton, performanceDownButton;
    


    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainContentComponent)
};


// (This function is called by the app startup code to create our main component)
Component* createMainContentComponent()    { return new MainContentComponent(); }
