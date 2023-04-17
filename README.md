# GreatVRCookOff
CS6334 Spring 2023

## Team Members:
- Tahmid Imran
- Ethan Roceles
- Chethan Birur Nataraja
- Mustafa Poonawala
- Michelle Kelman

## Primary Scene: 
KitchenScene.unity

## Interaction Techniques:
### Travel: Gaze and Hand Directed Steering (Steering Metaphors)
The direction of travel is determined by the gaze direction from the head tracker in the headset (Google Cardboard with Android Device) and the motion of the hand tracker joystick (Bluetooth Controller). This allows the user to move forwards, backwards, left, or right respectively to the gaze direction.
### Selection and Manipulation: Ray-Casting (Pointing Metaphors)
The reticle pointer is used as an infinite ray vector for object selection. The user can use the reticle pointer to hover over objects for selection and manipulation. Interactable objects will be highlighted on reticle pointer enter, where non-interactable objects will have no change. Interactable objects can be further manipulated (grabbed, returned, or used for specific actions) with button presses from the Bluetooth Controller as specified in each step of the recipe.
### System Control: Physical Controllers and Graphical Menus
The buttons and joystick of the Bluetooth Controller are used to perform system control and interaction tasks. The Settings Menu, 2D graphical menu, can be opened using the Menu button on the controller. The user can navigate through options in the Settings Menu using the joystick and select options using button presses as specified in the game instructions.

## Equipment:
- Android Phone
- Google Cardboard HWD
- Bluetooth Controller
  - Joystick - used for travel and menu option selection
  - OK Button - not used
  - Power Button - not used
  - Menu Button - used to open settings menu
  - X Button - used for object manipulation and menu navigation
  - Y Button - used to exit menus
  - A Button - used to return held objects to original locations
  - B Button - used to grab and manipulate objects

## Multiplayer: 
To Be Implemented

## Demo Link:
https://www.youtube.com/watch?v=8IgeLQmDzME 
