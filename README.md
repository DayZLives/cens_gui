**Note:** WeaponHUD compability added to this branch

---

# Cen's Custom GUI for Epoch (Overpoch) 1.0.6.1+

## Credits:

**All credits goes to @cen**

+ [Check relevant thread at Epoch forum][thread]

## Instructions:

+ It's easy, just follow folder structure in this repo and use all files.
+ Do not forget:
  + needed files for Overpoch are included
  + in your `init.sqf` set `dayz_presets = "Custom";`
  + in your `init.sqf` set `dayz_classicBloodBagSystem = true;`
  + bloodtest in `player_updateGUI is diabled` for now
+ Tested without issues on fresh testing overpoch server (see picture in the root named `How_it_looks_like.png` )

## Possible issues:

I guess, most of issues will be caused **by RscTitles and Defines confusion** (you already have some addons interacting with GUI installed, right?)

**So remember:**

+ `MPMissions\Dayz_Epoch_11.Chernarus\dayz_code\Configs` folder is your friend.
+ Always remember: **Defines goes first**, **configs goes second** (configs calling defines!)
+ If you have some addons and instructions were something like: _"put this to your desctiption.ext inside RscTitles{};"_ - here is only one thing you need to do:
  + Inside `dayz_code\Configs` find `RscDisplay\PlayerGUI\RscPlayerUI.hpp` and put all your RscTitles `inside RscTitles{};`
+ If you have some addons and instructions were something like: _"put this code... and call it at the bottom of desctiption.ext"_ - again, here is only two things you need to do:
  + Inside `dayz_code\Configs` find `Defines\PlayerGUI\` and put that file inside this folder.
  + Next go to `Configs\master.hpp` and put relevant line at the top of the file: for example: `#include "Defines\PlayerGUI\your_defines.hpp`
  + That's all. Master is already included and loaded in `desctiption.ext`. Just make sure, line `#include "dayz_code\gui\description.hpp"` goes first (you can see in `desctiption.ext` file what I mean).

[thread]: https://epochmod.com/forum/topic/16448-release-cens-custom-gui-for-epochoverpoch/ "Go to source"
