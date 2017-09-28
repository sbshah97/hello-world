## Assembly

### Downloading and Installing Assembly Dev Environment
You need to install the ARMSim# desktop application to compile and run Assembly code on a computer system. From the official website -
> ARMSim# is a desktop application running in a Windows environment. It allows users to simulate the execution of ARM assembly language programs on a system based on the ARM7TDMI processor.
> ARMSim# includes both an assembler and a linker and it also provides features not often found in similar applications. They enable users both to debug ARM assembly programs and to monitor the state of the system while a program executes. The monitoring information includes both cache states and timing information. ARMSim# is also able to link object files produced by other applications.

#### Prerequisites
* To run ARMSim# you must be running a Windows system. Any version of Windows from Windows 98 on seems to be suitable. You must have the .NET Framework, version 3.0 or later installed. This is a free download from Microsoft. The download you most likely need is this one: [Microsoft .NET Framework Version 3.0 Redistributable Package (x86)](http://www.microsoft.com/downloads/details.aspx?FamilyID=10cc340b-f857-4a14-83f5-25634c3bf043&DisplayLang=en)
* You can also run ARMSim# on Linux and Mac OS. More details can be found below.

#### Obtaining and Installing ARMSim#
* Windows: The download for Windows is provided as an Installer.msi file. You can find the same [here](http://armsim.cs.uvic.ca/Downloads/Installer.msi)
* MAC OS or Linux: You can run ARMSim# on Linux and Mac OS using either the Mono .NET framework or with Parallel. You can download the latest Mono framework from the Mono Project Downloads page. You can download ARMSim# for Mono [here](http://armsim.cs.uvic.ca/Downloads/ARMSim-191-MAC.zip). Please find more detailed instructions for MacOS [here](http://armsim.cs.uvic.ca/AttachedFiles/ArmSimOnMacInstruction.pdf).

#### After Installation
The Plugins are included in the distribution but need to be explicitly enabled. Go to the menu "File/Preferences", select the "Plugins" tab and tick the checkboxes there. Plugins are displayed by selecting "View/BoardControls" on the ARMSim menu bar. Check also the user manual.
