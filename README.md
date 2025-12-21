# stardust
A framework forked from ExLaunch for injecting C/C++ code into Super Mario Galaxy 2.

Features :
- In-game functions and classes usable for code injection
- A TCP-based logger to get real-time feedback. The script can be found at misc/scripts/logger.py
- A json settings file to toggle mods on and off. The file to edit is stardust_config.json

Certain mods are already available :
- Play as Luigi
- Daredevil Mode
- Red Star Power Up : /!\ this mod requires additional files to be usable. The files can be found in /romfs
- Extended Actor Factory

# exlaunch
A framework for injecting C/C++ code into Nintendo Switch applications/applet/sysmodules.

# Credit
- Atmosphère: A great reference and guide.
- oss-rtld: Included for (pending) interop with rtld in applications (License [here](https://github.com/shadowninja108/exlaunch/blob/main/source/lib/reloc/rtld/LICENSE.txt)).
