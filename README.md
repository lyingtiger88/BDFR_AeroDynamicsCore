# BDFR_AeroDynamicsCore

Universal aerial vehicle dynamics framework for Unreal Engine.

## Overview

BDFR_AeroDynamicsCore is a modular flight dynamics framework designed to support multiple aerial vehicle classes:

- Fixed wing aircraft
- Fighter aircraft
- Helicopters
- VTOL aircraft
- Tilt rotor systems
- Quadrotors and multirotor UAVs

The project is designed as a foundation layer for future BDFR systems such as BDFR_AeroCombatCore.

## Architecture

```
BDFR_AeroDynamicsCore
│
├── Core
│   ├── Aerial Vehicle Component
│   ├── Flight Physics
│   ├── Force Solver
│   └── Stability Controller
│
├── Fixed Wing
│   ├── Lift Model
│   ├── Drag Model
│   └── Control Surfaces
│
├── Rotorcraft
│   ├── Main Rotor
│   ├── Tail Rotor
│   └── Helicopter Controller
│
├── VTOL
│   ├── Vertical Lift
│   └── Transition Controller
│
└── Multirotor
    ├── Motor System
    └── Flight Stabilizer
```

## Development Roadmap

### v0.1 Core Foundation

- Unreal Engine plugin foundation
- Base aerial vehicle component
- Force and torque framework
- Thrust system
- Lift and drag interfaces
- Flight data assets
- Debug visualization

### Future

- Advanced aerodynamics
- Helicopter rotor dynamics
- VTOL transition
- UAV autopilot
- Weather and wind interaction
- Integration with BDFR_UnifiedPhysicsSystem

## Ecosystem

```
BDFR_UnifiedPhysicsSystem
        |
        +-- BDFR_DriveCore
        |
        +-- BDFR_AeroDynamicsCore
                    |
                    +-- BDFR_AeroCombatCore
```

## License

To be defined.
