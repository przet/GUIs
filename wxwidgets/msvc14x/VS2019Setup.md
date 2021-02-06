# Visual Studio 2019 Setup
0) Create a solution and folder structure you will be happy with for at least a while. See 8.
1) Obtain the desired platform and configuration zip file from https://github.com/przet/GUIs-third-party
2) Extract folder to at minimum the same level as where the GUIs repo is checked out to.
3) Set environment variable wxwin to the location in 2.
4) If VisualStudio is open, restart it so it reads the new env variable.
5) In VisualStudio, go to View->OtherWindows->PropertyManager, and non-primary mouse click on the Project to select "Add existing property sheet"
6) Select wxwidgets.props from the folder in 2.
7) If your VisualStudio project is not a windows desktop application (i.e you didn't select this template when creating the project), but a console or empty project, in project settings for the desired configuration and platform select Linker->System-> SubSystem to be "Windows"
8) Note that any change in solution location after applying 5. may break things (the project may not know where to find things).