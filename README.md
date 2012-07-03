some info about htc-vivid-os-x-tools
====================
This is a beta release of a program I tossed together to make it easier to perform some common tasks on the HTC Vivid while running OS X. It will:

- Walk you through the Bootloader Unlock process
- Capture your Device Token for submission to HTCDev
- Apply the Unlock_code.bin file to your device
- Root your device

I expect a few bugs, however I have tested it on my laptop with positive results. I was able to Unlock the bootloader and lock it again. Everything is bundled so you don't need the Android SDK. The goal was to create something similar to the multi-tool, but for OS X. This is also different from the other Mac tool as it isn't using Apple Script but instead Objective-C. The user should never see a terminal window if all goes well.

Report any bugs if you want, and I'll get them fixed asap. Remember this is beta and I'm not responsible for your device, etc etc etc.
