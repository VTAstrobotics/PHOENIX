# Project PHOENIX
Project **PHOENIX**: **P**at**H**ing **O**p**E**ratio**N**al **I**nfrastructure e**X**tender.

## What Is Project PHOENIX?
Project PHOENIX is Astrobotics at Virginia Tech's project for the 2023-2024 NASA Lunabotics competition.
### Is this repository for open-source collaboration?
No. This repository is not designed for open-source collaborators per the nature of the student organization.
It is only public because we want paid features for free.

## Docs
This repository has documentation available via our [GitHub Wikis](https://github.com/VTAstrobotics/Documentation/wiki). Please read them carefully.

### Running it
With an onboard computer (i.e. Jetson Nano) set up via the [Software Setup steps from the Wiki](https://github.com/VTAstrobotics/Documentation/wiki/Software-Setup), enter the PHOENIX developer container.

While in the developer container, open a terminal and run `./launch.sh` in the home directory. If you make changes, you may need to run `./build.sh` first (`./build.sh; ./launch.sh`). This will spin up all nodes.

The wiring that the system requires is expected to change more frequently than this README. Therefore, it is encouraged to double-check with a knowledgeable team member. Right now, the repository expects a Jetson Nano connected via USB to a controller and connected over USB to a Pico.

### Troubleshooting
When in doubt, rebuild the container (`Ctrl + Shift + P` then type `Rebuild Container` and select `Dev Containers: Rebuild Container`). This automatically runs the `build.sh` script, which is why you don't need to manually run it the first time.

If that fails, try to clone the repository again. It may be that your version is outdated.

If it builds but still does not work, navigate to the `.devcontainer/build.log` file. This outputs information from the entrypoint.

If you cannot even build the container, you should see a popup that allows you to edit the files in a recovery container. Select this option (`Edit devcontainer.json in Recovery Container`). Read the error messages. I repeat **read the error messages.** If you don't understand one, google it. If that yields nothing, look at a different one. If you changed the Dockerfile, inspect your changes.
