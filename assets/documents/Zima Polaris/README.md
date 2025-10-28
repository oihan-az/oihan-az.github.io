## EDITOR

### MODES:

- Default (Select/Move/Edit objecets)
- Collider Edition
- Mesh Edition

Click "Create island button" to create custom mesh. Enable "Update island collider" to update the collider based on the mesh vertices (it is set to false when changing the mesh being modified)

### SHORTCUTS:

- Load scene: CONTROL + 'O'
- Save scene as: CONTROL + SHIFT + 'S'
- Save scene: CONTROL + 'S'

- Copy object: CONTROL + 'C'
- Paste object: CONTROL + 'V'
- Copy-paste the selection: CONTROL + TRANSLATE_GUIZMO

- Undo action: CONTROL + 'Z'
- Redo action: CONTROL + 'Y'

- Play/Pause the game: F5
- Stop the game: SHIFT + F5

- Enable/Disable the editor: F1

Change transformation mode:

- CONTROL + 1 = TRANSLATE_GUIZMO
- CONTROL + 2 = ROTATE_GUIZMO
- CONTROL + 3 = SCALE_GUIZMO

- Move camera: SPACE + LEFT_CLICK
- ZOOM IN/OUTMOUSE: WHEEL

### MAIN MENU BAR:

- Play/Pause/Stop the game
- Enable/Disable the editor
- File: New, Load, Save, Save as
- Demos
- Setting: Enable/Disable systems
- Sound
- Enable/Disable auto save every 'X' secs
- Enable/Disable transformation snap(grid)

### RESOURCES WINDOW:

- Export all resources in use
- Load a package
- Save resources to package

#### Archetype tab:

- Drop an object to save as Archetype
- Load an Archetype
- Archetype:
- Right click: inspect
- Left click: instantiate

#### Textures/Models/Shaders tab:

- Load a resource
- Resource: Drag an drop into renderable

#### Sound tab:

- Load a sound
- Sound: Drag an drop into sound emitter

### SOUND:

If you want to mute the music, open the Sound option in the top bar, and set to 0 the MUSIC bar. Or the different channes.

### HIERARCHY PARENTING:

To link two objects together, drag one into another. The child object will automatically follow any edits made to the parent object.

### HIERARCHY/COMPONENTS ORDERING:

Drag and drom the selectable bar avobe the object/component

### ENABLE/DISABLE VISIBILITY and TRANSFORM LOCK:

Lef click on the eye (visibility) or the lock (transform lock).

### OBJECT SELECTION:

Selection: Left Click
Multiple Selection: Left Crtl + Left Click
Drag selection: Left Crtl + Left Click + Mouse movement
Focus: Mouse Wheel Click

### PLAYER CONTROLS:

Press F1 to deactivate the editor for better gameplay.

### IRREGULAR POLYGON CREATION:

- Use Control + M (CUSTOM COLLIDER)
- Use Control + Shift + M (CUSTOM MESH)

- Edit polygon: On the inspection window open the collider/renderable and click on edit
- Select vtx: click on the vtx
- Add vtx: Shift + Left Click
- Remove vtx: Delete
- Move vtx: Use the GIZMO

- If an object is selected the collider is added to it
- If no object selected a new object is created

- Press "Cancel Edit" button on the main bar to stop editing

### SCENES:

available scenes:

- LVL1 prototype scene but updated
- LVL2
- LVL3
- Elevatorshoot ( moving platforms & Diana(unstable & WIP) )

### BOX CREATION:

1. Add a Game Object.
2. Click the object and add the TransformComp and Renderable components in the Inspector window.
3. For collision detection, add a RigidBody and a Collider.

### LOADING IMAGES TO THE EDITOR:

- In the Resources window, navigate to the Textures tab.
- If the texture doesn't appear, click the "Load a texture" button.
- Select the desired image in the file explorer.
  This method applies to all tabs within the Resources window.

## EDITING TOOLS:

- In the inspector window, in the Renderable Component opened,
- Crop with the mouse using Control 'X' + Mouse Drag.
- To enable the guizmo for the crop you have to press J and drag from the red points.
- To undo the crop you have to openg the Texture Cropping header and press the buttom reset crop.

### GAMEPLAY

### SCENES:

Two available scenes:

- Prototype (runs automatically) - With animations but without art.
- Demo - With art but without animations.

### BOX CREATION:

1. Add a Game Object.
2. Click the object and add the TransformComp and Renderable components in the Inspector window.
3. For collision detection, add a RigidBody and a Collider.

### LOADING IMAGES TO THE EDITOR:

- In the Resources window, navigate to the Textures tab.
- If the texture doesn't appear, click the "Load a texture" button.
- Select the desired image in the file explorer.
  This method applies to all tabs within the Resources window.

## EDITING TOOLS:

- In the inspector window, in the Renderable Component opened,
- Crop with the mouse using Control 'X' + Mouse Drag.
- To enable the guizmo for the crop you have to press L and drag from the red points.
- To undo the crop you have to openg the Texture Cropping header and press the buttom reset crop.

### GAMEPLAY

### MOVEMENT CONTROLS:

- Move right: Press 'D'
- Move left: Press 'A'
- Jump: Press 'SPACE'
- Run: Press 'SHIFT'
- Attach to the rope: Press 'J' when near the rope.

### IF ATTACHED TO THE ROPE:

- Detach from the rope: Press 'SPACE'
- Balance right: Press 'D'
- Balance left: Press 'A'
- Climb up the rope: Press 'W'
- Climb down the rope: Press 'S'
  Note: Balancing is disabled while ascending or descending the rope.

### PUSH / PULL CONTROLS

- 'P' for pulling
- 'O' for braking it or Space

### THROW HOOK

- 'M' to aim
- 'N' to cancel aiming
- 'T' for throwing
- 'G' to withdraw hook (must withdraw to throw it again)

### DIALOG

- 'L' for enter listening state
- 'K' for speak phrases

### MOVING PLATFORMS

- Create a Pt (you'll need to press play once before being able to watch it)

- Straight = Follow route normal (on loop)
- Boomerang = Follow route back and forth
- OnCommand = Won't move until diana has been hit (Diana is still WIP)